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
	if (objectList.size() != 5)
		return false;

	this->sphereObject.reset();
	this->pointObjectArray.clear();

	for (std::shared_ptr<Object> object : objectList)
	{
		if (!this->sphereObject.get())
			this->sphereObject = std::dynamic_pointer_cast<SphereObject>(object);
		
		std::shared_ptr<PointObject> pointObject = std::dynamic_pointer_cast<PointObject>(object);
		if (pointObject.get())
			this->pointObjectArray.push_back(pointObject);
	}

	if (this->sphereObject.get() && this->pointObjectArray.size() == 4)
		return true;

	this->sphereObject.reset();
	this->pointObjectArray.clear();
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

//------------------------------- FitCircleToPointsConstraint -------------------------------

FitCircleToPointsConstraint::FitCircleToPointsConstraint()
{
}

/*virtual*/ FitCircleToPointsConstraint::~FitCircleToPointsConstraint()
{
}

/*virtual*/ bool FitCircleToPointsConstraint::TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList)
{
	if (objectList.size() != 4)
		return false;

	this->circleObject.reset();
	this->pointObjectArray.clear();

	for (std::shared_ptr<Object> object : objectList)
	{
		if (!this->circleObject.get())
			this->circleObject = std::dynamic_pointer_cast<CircleObject>(object);

		std::shared_ptr<PointObject> pointObject = std::dynamic_pointer_cast<PointObject>(object);
		if (pointObject.get())
			this->pointObjectArray.push_back(pointObject);
	}

	if (this->circleObject.get() && this->pointObjectArray.size() == 3)
		return true;

	this->circleObject.reset();
	this->pointObjectArray.clear();
	return false;
}

/*virtual*/ std::string FitCircleToPointsConstraint::GetDesc() const
{
	return "Fit circle to 3 points.";
}

/*virtual*/ bool FitCircleToPointsConstraint::Enforce()
{
	if (!this->circleObject.get())
		return false;

	if (this->pointObjectArray.size() != 3)
		return false;

	for (int i = 0; i < 3; i++)
		if (!this->pointObjectArray[i].get())
			return false;

	return this->circleObject->circle.FitToPoints(
						this->pointObjectArray[0]->point,
						this->pointObjectArray[1]->point,
						this->pointObjectArray[2]->point);
}

//------------------------------- FitSphereToPointPairsConstraint -------------------------------

FitSphereToPointPairsConstraint::FitSphereToPointPairsConstraint()
{
}

/*virtual*/ FitSphereToPointPairsConstraint::~FitSphereToPointPairsConstraint()
{
}

/*virtual*/ bool FitSphereToPointPairsConstraint::TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList)
{
	if (objectList.size() != 3)
		return false;

	this->sphereObject.reset();
	this->pointPairA.reset();
	this->pointPairB.reset();

	for (std::shared_ptr<Object> object : objectList)
	{
		if (!this->sphereObject.get())
			this->sphereObject = std::dynamic_pointer_cast<SphereObject>(object);

		if (!this->pointPairA.get())
			this->pointPairA = std::dynamic_pointer_cast<PointPairObject>(object);
		else if (!this->pointPairB.get())
			this->pointPairB = std::dynamic_pointer_cast<PointPairObject>(object);
	}

	if (this->sphereObject.get() && this->pointPairA.get() && this->pointPairB.get())
		return true;

	this->sphereObject.reset();
	this->pointPairA.reset();
	this->pointPairB.reset();

	return false;
}

/*virtual*/ std::string FitSphereToPointPairsConstraint::GetDesc() const
{
	return "Fit sphere to 2 point-pairs.";
}

/*virtual*/ bool FitSphereToPointPairsConstraint::Enforce()
{
	// STPTODO: Write this.
	return false;
}

//------------------------------- FitCircleToPointAndPointPairConstraint -------------------------------

FitCircleToPointAndPointPairConstraint::FitCircleToPointAndPointPairConstraint()
{
}

/*virtual*/ FitCircleToPointAndPointPairConstraint::~FitCircleToPointAndPointPairConstraint()
{
}

/*virtual*/ bool FitCircleToPointAndPointPairConstraint::TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList)
{
	if (objectList.size() != 3)
		return false;

	this->circleObject.reset();
	this->pointObject.reset();
	this->pointPairObject.reset();

	for (std::shared_ptr<Object> object : objectList)
	{
		if (!this->circleObject.get())
			this->circleObject = std::dynamic_pointer_cast<CircleObject>(object);

		if (!this->pointObject.get())
			this->pointObject = std::dynamic_pointer_cast<PointObject>(object);

		if (!this->pointPairObject.get())
			this->pointPairObject = std::dynamic_pointer_cast<PointPairObject>(object);
	}

	if (this->circleObject.get() && this->pointObject.get() && this->pointPairObject.get())
		return true;

	this->circleObject.reset();
	this->pointObject.reset();
	this->pointPairObject.reset();

	return false;
}

/*virtual*/ std::string FitCircleToPointAndPointPairConstraint::GetDesc() const
{
	return "Fit circle to point and point-pair.";
}

/*virtual*/ bool FitCircleToPointAndPointPairConstraint::Enforce()
{
	// STPTODO: Write this.
	return false;
}

//------------------------------- IntersectTwoSpheres -------------------------------

IntersectTwoSpheres::IntersectTwoSpheres()
{
}

/*virtual*/ IntersectTwoSpheres::~IntersectTwoSpheres()
{
}

/*virtual*/ bool IntersectTwoSpheres::TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList)
{
	if (objectList.size() != 3)
		return false;

	this->sphereObjectA.reset();
	this->sphereObjectB.reset();
	this->circleObject.reset();

	for (std::shared_ptr<Object> object : objectList)
	{
		if (!this->circleObject.get())
			this->circleObject = std::dynamic_pointer_cast<CircleObject>(object);

		if (!this->sphereObjectA.get())
			this->sphereObjectA = std::dynamic_pointer_cast<SphereObject>(object);
		else if (!this->sphereObjectB.get())
			this->sphereObjectB = std::dynamic_pointer_cast<SphereObject>(object);
	}

	if (this->circleObject.get() && this->sphereObjectA.get() && this->sphereObjectB.get())
		return true;

	this->circleObject.reset();
	this->sphereObjectA.reset();
	this->sphereObjectB.reset();

	return false;
}

/*virtual*/ std::string IntersectTwoSpheres::GetDesc() const
{
	return "Intersect two spheres to produce a circle.";
}

/*virtual*/ bool IntersectTwoSpheres::Enforce()
{
	if (!this->circleObject.get())
		return false;

	if (!this->sphereObjectA.get() || !this->sphereObjectB.get())
		return false;

	return this->circleObject->circle.IntersectSpheres(this->sphereObjectA->sphere, this->sphereObjectB->sphere);
}