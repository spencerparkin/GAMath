#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include <math.h>

using namespace C3GA;

Sphere::Sphere()
{
	this->radius = 1.0;
	this->weight = 1.0;
}

Sphere::Sphere(const HappyMath::Vector3& center, double radius, double weight /*= 1.0*/)
{
	this->center = center;
	this->radius = radius;
	this->weight = weight;
}

Sphere::Sphere(const Sphere& sphere)
{
	this->center = sphere.center;
	this->radius = sphere.radius;
	this->weight = sphere.weight;
}

/*virtual*/ Sphere::~Sphere()
{
}

void Sphere::ToVector(Vector& vector) const
{
	vector.no = this->weight;
	vector.e1 = this->weight * this->center.x;
	vector.e2 = this->weight * this->center.y;
	vector.e3 = this->weight * this->center.z;
	vector.ni = this->weight * 0.5 * (this->center.SquareLength() - this->radius * this->radius);
}

bool Sphere::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->weight = vector.no;
	this->center.x = vector.e1 / this->weight;
	this->center.y = vector.e2 / this->weight;
	this->center.z = vector.e3 / this->weight;

	// STPTODO: What about imaginary spheres?
	this->radius = sqrt(fabs(this->center.SquareLength() - 2.0 * vector.ni / this->weight));
	
	return true;
}

bool Sphere::FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC, const Point& pointD)
{
	Vector v1, v2, v3, v4;
	Bivector b1, b2;
	Quadvector q;
	PsuedoScalar I(1.0);
	Vector v;

	pointA.ToVector(v1);
	pointB.ToVector(v2);
	pointC.ToVector(v3);
	pointD.ToVector(v4);
	
	b1.OuterProduct(v1, v2);
	b2.OuterProduct(v3, v4);
	q.OuterProduct(b1, b2);
	v.GeometricProduct(q, I);

	return this->FromVector(v);
}

bool Sphere::FitToPointPairs(const PointPair& pointPairA, const PointPair& pointPairB)
{
	// STPTODO: Write this.
	return false;
}

bool Sphere::FitToCircleAndPoint(const Circle& circleA, const Point& pointB)
{
	// STPTODO: Write this.
	return false;
}