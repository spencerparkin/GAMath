#include "Object.h"
#include "Drawer.h"

//------------------------------ Object ------------------------------

Object::Object()
{
}

/*virtual*/ Object::~Object()
{
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

/*virtual*/ void PointObject::SetPosition(const HappyMath::Vector3& position)
{
	this->point.center = position;
}

/*virtual*/ HappyMath::Vector3 PointObject::GetPosition() const
{
	return this->point.center;
}

/*virtual*/ bool PointObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->point.center, 0.1, rayDistance);
}

//------------------------------ PointPairObject ------------------------------

PointPairObject::PointPairObject()
{
}

/*virtual*/ PointPairObject::~PointPairObject()
{
}

/*virtual*/ void PointPairObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
}

/*virtual*/ void PointPairObject::SetPosition(const HappyMath::Vector3& position)
{
	this->pointPair.center = position;
}

/*virtual*/ HappyMath::Vector3 PointPairObject::GetPosition() const
{
	return this->pointPair.center;
}

/*virtual*/ bool PointPairObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return false;
}

//------------------------------ CircleObject ------------------------------

CircleObject::CircleObject()
{
}

/*virtual*/ CircleObject::~CircleObject()
{
}

/*virtual*/ void CircleObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
}

/*virtual*/ void CircleObject::SetPosition(const HappyMath::Vector3& position)
{
	this->circle.center = position;
}

/*virtual*/ HappyMath::Vector3 CircleObject::GetPosition() const
{
	return this->circle.center;
}

/*virtual*/ bool CircleObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return false;
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
	HappyMath::Vector3 usedColor;

	if (showAsHighlighted)
		usedColor = HappyMath::Vector3(1.0, 1.0, 1.0);
	else
	{
		usedColor = this->color;
		if (this->sphere.imaginary)
			usedColor = HappyMath::Vector3(1.0, 1.0, 1.0) - usedColor;
	}

	drawer->DrawSphere(this->sphere.center, this->sphere.radius, usedColor, true);
}

/*virtual*/ void SphereObject::SetPosition(const HappyMath::Vector3& position)
{
	this->sphere.center = position;
}

/*virtual*/ HappyMath::Vector3 SphereObject::GetPosition() const
{
	return this->sphere.center;
}

/*virtual*/ bool SphereObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->sphere.center, this->sphere.radius, rayDistance);
}