#include "C3GA/Geometry/Circle.h"

using namespace C3GA;

Circle::Circle()
{
	this->weight = 1.0;
	this->radius = 1.0;
	this->imaginary = false;
	this->center.SetComponents(0.0, 0.0, 0.0);
	this->normal.SetComponents(0.0, 0.0, 1.0);
}

Circle::Circle(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, double weight /*= 1.0*/)
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
	return false;
}

bool Circle::FitToPointPairAndPoint(const PointPair& pointPairA, const Point& pointB)
{
	return false;
}

bool Circle::IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB)
{
	return false;
}

bool Circle::FromBivector(const Bivector& bivector)
{
	return false;
}

void Circle::ToBivector(Bivector& bivector) const
{
}