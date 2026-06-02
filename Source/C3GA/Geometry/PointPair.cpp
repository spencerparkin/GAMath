#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/PsuedoScalar.h"

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

bool PointPair::FromBivector(const Bivector& bivector)
{
	// STPTODO: Do the math.

	return false;
}

void PointPair::ToBivector(Bivector& bivector) const
{
	Vector v1, v2;

	HappyMath::Vector3 a, b;

	a = this->center - this->radius * this->normal;
	b = this->center + this->radius * this->normal;

	v1.no = this->weight;
	v1.e1 = this->weight * a.x;
	v1.e2 = this->weight * a.y;
	v1.e3 = this->weight * a.z;
	v1.ni = this->weight * 0.5 * a.SquareLength();

	v2.no = 1.0;
	v2.e1 = b.x;
	v2.e2 = b.y;
	v2.e3 = b.z;
	v2.ni = 0.5 * b.SquareLength();

	// STPTODO: What if it's imaginary?

	bivector.OuterProduct(v1, v2);
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
	Bivector b1, b2;
	Trivector t;
	PsuedoScalar I(1.0);

	sphere.ToVector(v);
	circle.ToBivector(b1);

	t.OuterProduct(v, b1);

	b2.GeometricProduct(t, I);

	return this->FromBivector(b2);
}