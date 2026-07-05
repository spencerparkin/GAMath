#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/PsuedoScalar.h"
#include "E3GA/Scalar.h"
#include "E3GA/Rotor.h"
#include <math.h>

using namespace C3GA;

PointPair::PointPair()
{
	this->weight = 1.0;
	this->radius = 1.0;
	this->imaginary = false;
	this->center = E3GA::Vector(0.0, 0.0, 0.0);
	this->normal = E3GA::Vector(0.0, 0.0, 1.0);
}

PointPair::PointPair(const E3GA::Vector& center, const E3GA::Vector& normal, double radius, double weight /*= 1.0*/)
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
	this->normal.e1 = trivector.e2_e3_no;
	this->normal.e2 = -trivector.e1_e3_no;
	this->normal.e3 = trivector.e1_e2_no;

	this->weight = ::sqrt(this->normal.SquareMagnitude());

	if (this->weight == 0.0)
		return false;

	this->normal.e1 /= this->weight;
	this->normal.e2 /= this->weight;
	this->normal.e3 /= this->weight;

	E3GA::Rotor r1;

	r1._1 = trivector.e1_e2_e3 / this->weight;
	r1.e2_e3 = trivector.e1_no_ni / this->weight;
	r1.e3_e1 = trivector.e2_no_ni / this->weight;
	r1.e1_e2 = trivector.e3_no_ni / this->weight;

	this->center.InnerProduct(this->normal, r1);

	E3GA::Vector v;

	v.e1 = trivector.e2_e3_ni / this->weight;
	v.e2 = -trivector.e1_e3_ni / this->weight;
	v.e3 = trivector.e1_e2_ni / this->weight;

	E3GA::Scalar c_dot_n;
	c_dot_n.InnerProduct(this->center, this->normal);

	E3GA::Scalar n_dot_v;
	n_dot_v.InnerProduct(this->normal, v);

	double squareRadius = -this->center.SquareMagnitude() + 2.0 * c_dot_n._1 * c_dot_n._1 - 2.0 * n_dot_v._1;
	
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
	Bivector b;
	Vector v1, v2;
	PsuedoScalar I(1.0);
	Trivector t;

	pointA.ToVector(v1);
	pointB.ToVector(v2);

	b.OuterProduct(v1, v2);

	t.GeometricProduct(b, I);

	return this->FromTrivector(t);
}

bool PointPair::IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB, const Sphere& sphereC)
{
	Vector v1, v2, v3;
	Bivector b;
	Trivector t;

	sphereA.ToVector(v1);
	sphereB.ToVector(v2);
	sphereC.ToVector(v3);

	b.OuterProduct(v1, v2);
	t.OuterProduct(b, v3);

	return this->FromTrivector(t);
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