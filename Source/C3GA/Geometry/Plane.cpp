#include "C3GA/Geometry/Plane.h"
#include "C3GA/Bivector.h"
#include "C3GA/Vector.h"

using namespace C3GA;

Plane::Plane()
{
	this->weight = 1.0;
	this->normal.SetComponents(0.0, 0.0, 1.0);
}

Plane::Plane(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double weight /*= 1.0*/)
{
	this->center = center;
	this->normal = normal;
	this->weight = weight;
}

Plane::Plane(const Plane& plane)
{
	this->center = plane.center;
	this->normal = plane.normal;
	this->weight = plane.weight;
}

/*virtual*/ Plane::~Plane()
{
}

bool Plane::FromVector(const Vector& vector)
{
	this->normal.x = vector.e1;
	this->normal.y = vector.e2;
	this->normal.z = vector.e3;

	this->weight = this->normal.Length();

	if (this->weight == 0.0)
		return false;

	this->normal /= this->weight;

	this->center = this->normal * vector.ni / this->weight;

	return true;
}

void Plane::ToVector(Vector& vector) const
{
	vector.e1 = this->normal.x * this->weight;
	vector.e2 = this->normal.y * this->weight;
	vector.e3 = this->normal.z * this->weight;
	vector.ni = this->normal.Dot(this->center) * this->weight;
	vector.no = 0.0;
}