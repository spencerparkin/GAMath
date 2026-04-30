#include "Object.h"
#include "Drawer.h"

//------------------------------ Object ------------------------------

Object::Object()
{
}

/*virtual*/ Object::~Object()
{
}

//------------------------------ SphereObject ------------------------------

SphereObject::SphereObject()
{
}

/*virtual*/ SphereObject::~SphereObject()
{
}

/*virtual*/ void SphereObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector3 usedColor = showAsHighlighted ? HappyMath::Vector3(1.0, 1.0, 1.0) : this->color;
	drawer->DrawSphere(this->sphere.center, this->sphere.radius, usedColor, true);
}

/*virtual*/ void SphereObject::Translate(const HappyMath::Vector3& delta)
{
	this->sphere.center += delta;
}

/*virtual*/ bool SphereObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->sphere.center, this->sphere.radius, rayDistance);
}

//------------------------------ PointObject ------------------------------

PointObject::PointObject()
{
}

/*virtual*/ PointObject::~PointObject()
{
}

/*virtual*/ void PointObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector3 usedColor = showAsHighlighted ? HappyMath::Vector3(1.0, 1.0, 1.0) : this->color;
	drawer->DrawPoint(this->point.center, usedColor, false);
}

/*virtual*/ void PointObject::Translate(const HappyMath::Vector3& delta)
{
	this->point.center += delta;
}

/*virtual*/ bool PointObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->point.center, 0.1, rayDistance);
}