#pragma once

#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/Sphere.h"

class Drawer;

class Object
{
public:
	Object();
	virtual ~Object();

	virtual void Draw(Drawer* drawer) const = 0;

	HappyMath::Vector3 color;
};

class SphereObject : public Object
{
public:
	SphereObject();
	virtual ~SphereObject();

	virtual void Draw(Drawer* drawer) const override;

	C3GA::Sphere sphere;
};

class PointObject : public Object
{
public:
	PointObject();
	virtual ~PointObject();

	virtual void Draw(Drawer* drawer) const override;

	C3GA::Point point;
};