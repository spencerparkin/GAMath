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
	// STPTODO: Base this on intersection between line running through center of sphere.
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