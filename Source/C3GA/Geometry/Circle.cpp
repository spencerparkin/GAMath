#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include "C3GA/Scalar.h"
#include "E3GA/Scalar.h"
#include "E3GA/Rotor.h"
#include <math.h>

using namespace C3GA;

Circle::Circle()
{
	this->weight = 1.0;
	this->radius = 1.0;
	this->imaginary = false;
	this->center = E3GA::Vector(0.0, 0.0, 0.0);
	this->normal = E3GA::Vector(0.0, 0.0, 1.0);
}

Circle::Circle(const E3GA::Vector& center, const E3GA::Vector& normal, double radius, double weight /*= 1.0*/)
{
	this->center = center;
	this->normal = normal;
	this->radius = radius;
	this->imaginary = false;
	this->weight = weight;
}

Circle::Circle(const Circle& circle)
{
	this->weight = circle.weight;
	this->center = circle.center;
	this->normal = circle.normal;
	this->radius = circle.radius;
	this->imaginary = circle.imaginary;
}

/*virtual*/ Circle::~Circle()
{
}

bool Circle::FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC)
{
	Vector v1, v2, v3;
	Bivector b1;
	Trivector t1;
	PsuedoScalar I(1.0);

	pointA.ToVector(v1);
	pointB.ToVector(v2);
	pointC.ToVector(v3);

	b1.OuterProduct(v1, v2);
	t1.OuterProduct(b1, v3);
	b1.GeometricProduct(t1, I);

	return this->FromBivector(b1);
}

bool Circle::FitToPointPairAndPoint(const PointPair& pointPairA, const Point& pointB)
{
	return false;
}

bool Circle::FitToSphereAndFlatPoint(const Sphere& sphere, const FlatPoint& flatPoint)
{
	Trivector t;
	Bivector b;
	Quadvector q;
	Vector v1, v2;
	PsuedoScalar I(1.0);

	sphere.ToVector(v1);
	flatPoint.ToTrivector(t);

	q.OuterProduct(v1, t);

	v2.GeometricProduct(q, I);
	
	b.OuterProduct(v1, v2);

	return this->FromBivector(b);
}

bool Circle::IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB)
{
	Vector v1, v2;
	Bivector b1;

	sphereA.ToVector(v1);
	sphereB.ToVector(v2);

	b1.OuterProduct(v1, v2);

	return this->FromBivector(b1);
}

bool Circle::IntersectPlaneAndSphere(const Plane& planeA, const Sphere& sphereB)
{
	Vector v1, v2;
	Bivector b1;

	planeA.ToVector(v1);
	sphereB.ToVector(v2);

	b1.OuterProduct(v1, v2);

	return this->FromBivector(b1);
}

bool Circle::FromBivector(const Bivector& bivector)
{
	this->normal.e1 = bivector.e1_no;
	this->normal.e2 = bivector.e2_no;
	this->normal.e3 = bivector.e3_no;

	this->weight = ::sqrt(this->normal.SquareMagnitude());

	if (this->weight == 0.0)
		return false;

	this->normal.e1 /= this->weight;
	this->normal.e2 /= this->weight;
	this->normal.e3 /= this->weight;

	E3GA::Rotor rotor;
	rotor._1 = -bivector.no_ni / this->weight;
	rotor.e1_e2 = bivector.e1_e2 / this->weight;
	rotor.e3_e1 = -bivector.e1_e3 / this->weight;
	rotor.e2_e3 = bivector.e2_e3 / this->weight;

	this->center.InnerProduct(this->normal, rotor);

	E3GA::Vector v;
	v.e1 = bivector.e1_ni / this->weight;
	v.e2 = bivector.e2_ni / this->weight;
	v.e3 = bivector.e3_ni / this->weight;

	E3GA::Scalar dot;
	dot.InnerProduct(this->center, this->normal);

	v.e1 += dot._1 * this->center.e1;
	v.e2 += dot._1 * this->center.e2;
	v.e3 += dot._1 * this->center.e3;

	dot.InnerProduct(this->normal, v);

	double squareRadius = this->center.SquareMagnitude() - 2.0 * dot._1;

	this->imaginary = false;

	if (squareRadius < 0.0)
	{
		this->imaginary = true;
		squareRadius = -squareRadius;
	}

	this->radius = sqrt(squareRadius);

	return true;
}

void Circle::ToBivector(Bivector& bivector) const
{
	E3GA::Scalar dot;
	dot.InnerProduct(this->normal, this->center);

	Vector plane;
	plane.no = 0.0;
	plane.e1 = this->weight * this->normal.e1;
	plane.e2 = this->weight * this->normal.e2;
	plane.e3 = this->weight * this->normal.e3;
	plane.ni = dot._1;

	double sign = this->imaginary ? -1.0 : 1.0;

	Vector sphere;
	sphere.no = 1.0;
	sphere.e1 = this->center.e1;
	sphere.e2 = this->center.e2;
	sphere.e3 = this->center.e3;
	sphere.ni = 0.5 * (this->center.SquareMagnitude() - sign * this->radius * this->radius);

	bivector.OuterProduct(plane, sphere);
}