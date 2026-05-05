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

/*virtual*/ bool FitSphereToPointsConstraint::TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList)
{
	// STPTODO: Write this.
	return false;
}

/*virtual*/ std::string FitSphereToPointsConstraint::GetDesc() const
{
	return "Fit sphere to 4 points";
}

/*virtual*/ bool FitSphereToPointsConstraint::Enforce()
{
	if (!this->sphereObject.get())
		return false;

	if (this->pointObjectArray.size() != 4)
		return false;

	for (int i = 0; i < 4; i++)
		if (!this->pointObjectArray[i].get())
			return false;

	return this->sphereObject->sphere.FitToPoints(
						this->pointObjectArray[0]->point,
						this->pointObjectArray[1]->point,
						this->pointObjectArray[2]->point,
						this->pointObjectArray[3]->point);
}