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
	std::shared_ptr<Object> outputObject = this->outputObjectWeakPtr.lock();
	if (!outputObject.get())
		return false;

	auto* sphereObject = dynamic_cast<SphereObject*>(outputObject.get());
	if (!sphereObject)
		return false;

	if (this->inputObjectWeakPtrArray.size() != 4)
		return false;

	std::shared_ptr<Object> inputObjectArray[4] =
	{
		this->inputObjectWeakPtrArray[0].lock(),
		this->inputObjectWeakPtrArray[1].lock(),
		this->inputObjectWeakPtrArray[2].lock(),
		this->inputObjectWeakPtrArray[3].lock()
	};

	PointObject* pointObjectArray[4] =
	{
		dynamic_cast<PointObject*>(inputObjectArray[0].get()),
		dynamic_cast<PointObject*>(inputObjectArray[1].get()),
		dynamic_cast<PointObject*>(inputObjectArray[2].get()),
		dynamic_cast<PointObject*>(inputObjectArray[3].get())
	};

	for (int i = 0; i < 4; i++)
		if (!pointObjectArray[i])
			return false;

	return sphereObject->sphere.FitToPoints(
						pointObjectArray[0]->point,
						pointObjectArray[1]->point,
						pointObjectArray[2]->point,
						pointObjectArray[3]->point);
}