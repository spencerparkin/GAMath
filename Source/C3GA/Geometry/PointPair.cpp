#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/PsuedoScalar.h"
#include "C3GA/Rotor.h"

using namespace C3GA;

PointPair::PointPair()
{
	this->weight = 1.0;
	this->radius = 1.0;
	this->imaginary = false;
	this->center.SetComponents(0.0, 0.0, 0.0);
	this->normal.SetComponents(0.0, 0.0, 1.0);
}

PointPair::PointPair(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, double weight /*= 1.0*/)
{
	this->center = center;
	this->normal = normal;
	this->radius = radius;
	this->imaginary = false;
	this->weight = weight;
}

PointPair::PointPair(const PointPair& pointPair)
{
	this->weight = pointPair.weight;
	this->center = pointPair.center;
	this->normal = pointPair.normal;
	this->radius = pointPair.radius;
	this->imaginary = pointPair.imaginary;
}

/*virtual*/ PointPair::~PointPair()
{
}

bool PointPair::FromTrivector(const Trivector& trivector)
{
	this->normal.x = trivector.e2_e3_no;
	this->normal.y = -trivector.e1_e3_no;
	this->normal.z = trivector.e1_e2_no;

	this->weight = this->normal.Length();

	if (this->weight == 0.0)
		return false;

	this->normal /= this->weight;

	Rotor r1;

	r1._1 = trivector.e1_e2_e3 / this->weight;
	r1.e2_e3 = trivector.e1_no_ni / this->weight;
	r1.e1_e3 = -trivector.e2_no_ni / this->weight;
	r1.e1_e2 = trivector.e3_no_ni / this->weight;

	Vector v1, v2;

	v1.e1 = this->normal.x;
	v1.e2 = this->normal.y;
	v1.e3 = this->normal.z;

	v2.InnerProduct(v1, r1);

	this->center.x = v2.e1;
	this->center.y = v2.e2;
	this->center.z = v2.e3;

	HappyMath::Vector3 v;

	v.x = trivector.e2_e3_ni / this->weight;
	v.y = -trivector.e1_e3_ni / this->weight;
	v.z = trivector.e1_e2_ni / this->weight;

	double c_dot_n = this->center.Dot(this->normal);
	double squareRadius = -this->center.SquareLength() + 2.0 * c_dot_n * c_dot_n - 2.0 * this->normal.Dot(v);
	
	this->imaginary = false;

	if (squareRadius < 0.0)
	{
		this->imaginary = true;
		squareRadius = -squareRadius;
	}

	this->radius = sqrt(squareRadius);

	return true;
}

void PointPair::ToTrivector(Trivector& trivector) const
{
	Sphere sphere(this->center, this->radius, 1.0);
	Line line(this->center, this->normal, this->weight);

	Vector v1;
	Bivector b1;

	sphere.ToVector(v1);
	line.ToBivector(b1);

	trivector.OuterProduct(b1, v1);
}

bool PointPair::FitToPoints(const Point& pointA, const Point& pointB)
{
	return false;
}

bool PointPair::IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB, const Sphere& sphereC)
{
	return false;
}

bool PointPair::IntersectSphereAndCircle(const Sphere& sphere, const Circle& circle)
{
	Vector v;
	Bivector b;
	Trivector t;

	sphere.ToVector(v);
	circle.ToBivector(b);

	t.OuterProduct(v, b);

	return this->FromTrivector(t);
}

bool PointPair::IntersectSphereAndLine(const Sphere& sphere, const Line& line)
{
	Vector v;
	Bivector b;
	Trivector t;

	sphere.ToVector(v);
	line.ToBivector(b);

	t.OuterProduct(v, b);

	return this->FromTrivector(t);
}

bool PointPair::IntersectPlaneAndCircle(const Plane& plane, const Circle& circle)
{
	Vector v;
	Bivector b;
	Trivector t;

	plane.ToVector(v);
	circle.ToBivector(b);

	t.OuterProduct(v, b);

	return this->FromTrivector(t);
}