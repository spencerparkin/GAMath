#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/PsuedoScalar.h"
#include <math.h>
#include <limits>

using namespace C3GA;

//----------------------------------- Point -----------------------------------

Point::Point()
{
	this->weight = 1.0;
}

Point::Point(const HappyMath::Vector3& center, double weight /*= 1.0*/)
{
	this->center = center;
	this->weight = weight;
}

Point::Point(const Point& point)
{
	this->center = point.center;
	this->weight = point.weight;
}

/*virtual*/ Point::~Point()
{
}

void Point::ToVector(Vector& vector) const
{
	vector.no = this->weight;
	vector.e1 = this->weight * this->center.x;
	vector.e2 = this->weight * this->center.y;
	vector.e3 = this->weight * this->center.z;
	vector.ni = 0.5 * this->center.SquareLength();
}

bool Point::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->weight = vector.no;
	this->center.x = vector.e1 / this->weight;
	this->center.y = vector.e2 / this->weight;
	this->center.z = vector.e3 / this->weight;

	double alpha = this->center.SquareLength() - 2.0 * vector.ni / this->weight;

	return ::fabs(alpha) <= std::numeric_limits<double>::epsilon();
}

//----------------------------------- FlatPoint -----------------------------------

FlatPoint::FlatPoint()
{
	this->weight = 1.0;
}

FlatPoint::FlatPoint(const HappyMath::Vector3 center, double weight /*= 1.0*/)
{
	this->weight = weight;
	this->center = center;
}

FlatPoint::FlatPoint(const FlatPoint& point)
{
	this->weight = point.weight;
	this->center = point.center;
}

/*virtual*/ FlatPoint::~FlatPoint()
{
}

void FlatPoint::ToTrivector(Trivector& trivector) const
{
	trivector.e1_e2_e3 = 1.0;
	
	trivector.e1_e2_ni = this->center.z;
	trivector.e1_e3_ni = -this->center.y;
	trivector.e2_e3_ni = this->center.x;

	trivector.e1_e2_no = 0.0;
	trivector.e1_e3_no = 0.0;
	trivector.e2_e3_no = 0.0;

	trivector.e1_no_ni = 0.0;
	trivector.e2_no_ni = 0.0;
	trivector.e3_no_ni = 0.0;
}

bool FlatPoint::FromTrivector(const Trivector& trivector)
{
	if (trivector.e1_e2_e3 == 0.0)
		return false;

	if (::fabs(trivector.e1_e2_no) > std::numeric_limits<double>::epsilon() ||
		::fabs(trivector.e1_e3_no) > std::numeric_limits<double>::epsilon() ||
		::fabs(trivector.e2_e3_no) > std::numeric_limits<double>::epsilon())
	{
		return false;
	}

	if (::fabs(trivector.e1_no_ni) > std::numeric_limits<double>::epsilon() ||
		::fabs(trivector.e2_no_ni) > std::numeric_limits<double>::epsilon() ||
		::fabs(trivector.e3_no_ni) > std::numeric_limits<double>::epsilon())
	{
		return false;
	}

	this->weight = trivector.e1_e2_e3;

	this->center.x = trivector.e2_e3_ni / this->weight;
	this->center.y = -trivector.e1_e3_ni / this->weight;
	this->center.z = trivector.e1_e2_ni / this->weight;

	return true;
}

bool FlatPoint::FitToPoint(const Point& point)
{
	Vector v1, v2;
	Bivector b;
	Trivector t;
	PsuedoScalar I(1.0);

	point.ToVector(v1);

	v2.ni = 1.0;

	b.OuterProduct(v1, v2);

	t.GeometricProduct(b, I);

	return this->FromTrivector(t);
}

bool FlatPoint::IntersectPlaneAndLine(const Plane& plane, const Line& line)
{
	Vector v;
	Bivector b;
	Trivector t;

	plane.ToVector(v);
	line.ToBivector(b);

	t.OuterProduct(v, b);

	return this->FromTrivector(t);
}

bool FlatPoint::IntersectPlanes(const Plane& planeA, const Plane& planeB, const Plane& planeC)
{
	Vector v1, v2, v3;
	Bivector b;
	Trivector t;

	planeA.ToVector(v1);
	planeB.ToVector(v2);
	planeC.ToVector(v3);

	b.OuterProduct(v1, v2);
	t.OuterProduct(b, v3);

	return this->FromTrivector(t);
}