#pragma once

#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/Sphere.h"
#include "HappyMath/Ray.h"

class Drawer;

class Object
{
public:
	Object();
	virtual ~Object();

	virtual void Draw(Drawer* drawer, bool showAsHighlighted) const = 0;
	virtual void SetPosition(const HappyMath::Vector3& position) = 0;
	virtual HappyMath::Vector3 GetPosition() const = 0;
	virtual bool IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const = 0;

	HappyMath::Vector3 color;
};

class SphereObject : public Object
{
public:
	SphereObject();
	virtual ~SphereObject();

	virtual void Draw(Drawer* drawer, bool showAsHighlighted) const override;
	virtual void SetPosition(const HappyMath::Vector3& position) override;
	virtual HappyMath::Vector3 GetPosition() const override;
	virtual bool IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const override;

	C3GA::Sphere sphere;
};

class PointObject : public Object
{
public:
	PointObject();
	virtual ~PointObject();

	virtual void Draw(Drawer* drawer, bool showAsHighlighted) const override;
	virtual void SetPosition(const HappyMath::Vector3& position) override;
	virtual HappyMath::Vector3 GetPosition() const override;
	virtual bool IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const override;

	C3GA::Point point;
};