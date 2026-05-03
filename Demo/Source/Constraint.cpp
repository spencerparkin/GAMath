#include "Constraint.h"
#include "Object.h"

//------------------------------- Constraint -------------------------------

Constraint::Constraint()
{
}

/*virtual*/ Constraint::~Constraint()
{
}

//------------------------------- FitSphereToPointsConstraint -------------------------------

FitSphereToPointsConstraint::FitSphereToPointsConstraint()
{
}

/*virtual*/ FitSphereToPointsConstraint::~FitSphereToPointsConstraint()
{
}

/*virtual*/ bool FitSphereToPointsConstraint::Enforce()
{
	std::shared_ptr<SphereObject> sphereObject = std::dynamic_pointer_cast<SphereObject>(this->outputObjectWeakPtr.lock());
	if (!sphereObject.get())
		return false;

	if (this->inputObjectWeakPtrArray.size() != 4)
		return false;

	std::shared_ptr<PointObject> pointObjectA = std::dynamic_pointer_cast<PointObject>(this->inputObjectWeakPtrArray[0].lock());
	if (!pointObjectA.get())
		return false;

	std::shared_ptr<PointObject> pointObjectB = std::dynamic_pointer_cast<PointObject>(this->inputObjectWeakPtrArray[1].lock());
	if (!pointObjectB.get())
		return false;

	std::shared_ptr<PointObject> pointObjectC = std::dynamic_pointer_cast<PointObject>(this->inputObjectWeakPtrArray[2].lock());
	if (!pointObjectC.get())
		return false;

	std::shared_ptr<PointObject> pointObjectD = std::dynamic_pointer_cast<PointObject>(this->inputObjectWeakPtrArray[3].lock());
	if (!pointObjectD.get())
		return false;

	return sphereObject->sphere.FitToPoints(pointObjectA->point, pointObjectB->point, pointObjectC->point, pointObjectD->point);
}