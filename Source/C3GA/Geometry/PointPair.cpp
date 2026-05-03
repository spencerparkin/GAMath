#include "C3GA/Geometry/PointPair.h"

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
	return false;
}

void PointPair::ToBivector(Bivector& bivector) const
{
}

bool PointPair::FitToPoints(const Point& pointA, const Point& pointB)
{
	return false;
}

bool PointPair::IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB, const Sphere& sphereC)
{
	return false;
}