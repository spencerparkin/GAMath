#pragma once

#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Sphere.h"
#include "HappyMath/Ray.h"

class Drawer;

/**
 * This will be our base class for anything we draw in the scene.
 */
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

/**
 * These are 0-dimensional rounds, not to be confused with flat points.
 */
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

/**
 * These are the 1-dimensional rounds.
 */
class PointPairObject : public Object
{
public:
	PointPairObject();
	virtual ~PointPairObject();

	virtual void Draw(Drawer* drawer, bool showAsHighlighted) const override;
	virtual void SetPosition(const HappyMath::Vector3& position) override;
	virtual HappyMath::Vector3 GetPosition() const override;
	virtual bool IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const override;

	C3GA::PointPair pointPair;
};

/**
 * These are 2-dimensional rounds.
 */
class CircleObject : public Object
{
public:
	CircleObject();
	virtual ~CircleObject();

	virtual void Draw(Drawer* drawer, bool showAsHighlighted) const override;
	virtual void SetPosition(const HappyMath::Vector3& position) override;
	virtual HappyMath::Vector3 GetPosition() const override;
	virtual bool IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const override;

	C3GA::Circle circle;
};

/**
 * These are 3-dimensional rounds.
 */
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