#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Rotor.h"

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

bool Circle::IntersectPlaneAndSphere(const Plane& planeA, const Sphere& sphereB)
{
	return false;
}

bool Circle::FromBivector(const Bivector& bivector)
{
	this->normal.x = bivector.e1_no;
	this->normal.y = bivector.e2_no;
	this->normal.z = bivector.e3_no;

	this->weight = this->normal.Length();

	if (this->weight == 0.0)
		return false;

	this->normal /= weight;

	Rotor rotor;
	rotor._1 = -bivector.no_ni / this->weight;
	rotor.e1_e2 = bivector.e1_e2 / this->weight;
	rotor.e1_e3 = bivector.e1_e3 / this->weight;
	rotor.e2_e3 = bivector.e2_e3 / this->weight;

	Vector norm;
	norm.e1 = this->normal.x;
	norm.e2 = this->normal.y;
	norm.e3 = this->normal.z;

	Vector centre;
	centre.InnerProduct(norm, rotor);

	this->center.x = centre.e1;
	this->center.y = centre.e2;
	this->center.z = centre.e3;

	Bivector n_ni;
	n_ni.e1_ni = bivector.e1_ni / this->weight;
	n_ni.e2_ni = bivector.e2_ni / this->weight;
	n_ni.e3_ni = bivector.e3_ni / this->weight;

	Vector ni;
	ni.InnerProduct(norm, n_ni);

	double squareRadius = this->center.Dot(center) - 2.0 * ni.ni;

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
	Vector plane;
	plane.no = 0.0;
	plane.e1 = this->weight * this->normal.x;
	plane.e2 = this->weight * this->normal.y;
	plane.e3 = this->weight * this->normal.z;
	plane.ni = this->normal.Dot(this->center);

	double sign = this->imaginary ? -1.0 : 1.0;

	Vector sphere;
	sphere.no = 1.0;
	sphere.e1 = this->center.x;
	sphere.e2 = this->center.y;
	sphere.e3 = this->center.z;
	sphere.ni = 0.5 * (this->center.Dot(center) - sign * this->radius * this->radius);

	bivector.OuterProduct(plane, sphere);
}