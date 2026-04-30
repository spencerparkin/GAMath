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

/*virtual*/ void SphereObject::Draw(Drawer* drawer) const
{
	drawer->DrawSphere(this->sphere.center, this->sphere.radius, this->color, true);
}

//------------------------------ PointObject ------------------------------

PointObject::PointObject()
{
}

/*virtual*/ PointObject::~PointObject()
{
}

/*virtual*/ void PointObject::Draw(Drawer* drawer) const
{
	drawer->DrawPoint(this->point.center, this->color, false);
}