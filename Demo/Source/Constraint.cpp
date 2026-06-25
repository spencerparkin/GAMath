#include "Constraint.h"
#include "Object.h"
#include <list>

//------------------------------- Constraint -------------------------------

Constraint::Constraint()
{
}

/*virtual*/ Constraint::~Constraint()
{
}

/*virtual*/ bool Constraint::TakeObjects(const std::vector<std::shared_ptr<Object>>& givenObjectArray)
{
	if (givenObjectArray.size() != this->objectClassArray.size())
		return false;

	std::list<std::shared_ptr<BaseClass<Object>>> objectClassList;
	for (std::shared_ptr<BaseClass<Object>> objectClass : this->objectClassArray)
		objectClassList.push_back(objectClass);

	this->objectArray.clear();

	for(std::shared_ptr<Object> object : givenObjectArray)
	{
		bool foundMatch = false;
		for (std::list<std::shared_ptr<BaseClass<Object>>>::iterator iter = objectClassList.begin(); iter != objectClassList.end(); iter++)
		{
			std::shared_ptr<BaseClass<Object>> objectClass = *iter;
			if (objectClass->IsType(object.get()))
			{
				objectClassList.erase(iter);
				this->objectArray.push_back(object);
				foundMatch = true;
				break;
			}
		}

		if (!foundMatch)
		{
			this->objectArray.clear();
			return false;
		}
	}

	return true;
}

bool Constraint::IsReady()
{
	return this->objectArray.size() == this->objectClassArray.size();
}

//------------------------------- FitSphereToPointsConstraint -------------------------------

FitSphereToPointsConstraint::FitSphereToPointsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitSphereToPointsConstraint::~FitSphereToPointsConstraint()
{
}

/*virtual*/ std::string FitSphereToPointsConstraint::GetDesc() const
{
	return "Fit sphere to 4 points";
}

/*virtual*/ bool FitSphereToPointsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObject = this->GetObject<SphereObject>();
	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);
	PointObject* pointObjectC = this->GetObject<PointObject>(2);
	PointObject* pointObjectD = this->GetObject<PointObject>(3);

	return sphereObject->sphere.FitToPoints(
								pointObjectA->point,
								pointObjectB->point,
								pointObjectC->point,
								pointObjectD->point);
}

//------------------------------- FitSphereToPointAndCircleContraint -------------------------------

FitSphereToPointAndCircleContraint::FitSphereToPointAndCircleContraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ FitSphereToPointAndCircleContraint::~FitSphereToPointAndCircleContraint()
{
}

/*virtual*/ std::string FitSphereToPointAndCircleContraint::GetDesc() const
{
	return "Fit sphere to circle and point.";
}

/*virtual*/ bool FitSphereToPointAndCircleContraint::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObject = this->GetObject<SphereObject>();
	PointObject* pointObject = this->GetObject<PointObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return sphereObject->sphere.FitToCircleAndPoint(circleObject->circle, pointObject->point);
}

//------------------------------- FitCircleToPointsConstraint -------------------------------

FitCircleToPointsConstraint::FitCircleToPointsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitCircleToPointsConstraint::~FitCircleToPointsConstraint()
{
}

/*virtual*/ std::string FitCircleToPointsConstraint::GetDesc() const
{
	return "Fit circle to 3 points.";
}

/*virtual*/ bool FitCircleToPointsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	CircleObject* circleObject = this->GetObject<CircleObject>();
	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);
	PointObject* pointObjectC = this->GetObject<PointObject>(2);

	return circleObject->circle.FitToPoints(
								pointObjectA->point,
								pointObjectB->point,
								pointObjectC->point);
}

//------------------------------- FitSphereToPointPairsConstraint -------------------------------

FitSphereToPointPairsConstraint::FitSphereToPointPairsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ FitSphereToPointPairsConstraint::~FitSphereToPointPairsConstraint()
{
}

/*virtual*/ std::string FitSphereToPointPairsConstraint::GetDesc() const
{
	return "Fit sphere to 2 point-pairs.";
}

/*virtual*/ bool FitSphereToPointPairsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObject = this->GetObject<SphereObject>();
	PointPairObject* pointPairObjectA = this->GetObject<PointPairObject>(0);
	PointPairObject* pointPairObjectB = this->GetObject<PointPairObject>(1);

	return sphereObject->sphere.FitToPointPairs(
								pointPairObjectA->pointPair,
								pointPairObjectB->pointPair);
}

//------------------------------- FitCircleToPointAndPointPairConstraint -------------------------------

FitCircleToPointAndPointPairConstraint::FitCircleToPointAndPointPairConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitCircleToPointAndPointPairConstraint::~FitCircleToPointAndPointPairConstraint()
{
}

/*virtual*/ std::string FitCircleToPointAndPointPairConstraint::GetDesc() const
{
	return "Fit circle to point and point-pair.";
}

/*virtual*/ bool FitCircleToPointAndPointPairConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	CircleObject* circleObject = this->GetObject<CircleObject>();
	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	PointObject* pointObject = this->GetObject<PointObject>();

	return circleObject->circle.FitToPointPairAndPoint(pointPairObject->pointPair, pointObject->point);
}

//------------------------------- FitPlaneToLineAndPointConstraints -------------------------------

FitPlaneToLineAndPointConstraints::FitPlaneToLineAndPointConstraints()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitPlaneToLineAndPointConstraints::~FitPlaneToLineAndPointConstraints()
{
}

/*virtual*/ std::string FitPlaneToLineAndPointConstraints::GetDesc() const
{
	return "Fit plane to line and point.";
}

/*virtual*/ bool FitPlaneToLineAndPointConstraints::Enforce()
{
	if (!this->IsReady())
		return false;

	LineObject* lineObject = this->GetObject<LineObject>();
	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	PointObject* pointObject = this->GetObject<PointObject>();

	return planeObject->plane.FitPlaneToLineAndPoint(lineObject->line, pointObject->point);
}

//------------------------------- IntersectTwoSpheresToGetCircle -------------------------------

IntersectTwoSpheresToGetCircle::IntersectTwoSpheresToGetCircle()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ IntersectTwoSpheresToGetCircle::~IntersectTwoSpheresToGetCircle()
{
}

/*virtual*/ std::string IntersectTwoSpheresToGetCircle::GetDesc() const
{
	return "Intersect two spheres to produce a circle.";
}

/*virtual*/ bool IntersectTwoSpheresToGetCircle::Enforce()
{
	if (!this->IsReady())
		return false;

	CircleObject* circleObject = this->GetObject<CircleObject>();
	SphereObject* sphereObjectA = this->GetObject<SphereObject>(0);
	SphereObject* sphereObjectB = this->GetObject<SphereObject>(1);

	return circleObject->circle.IntersectSpheres(sphereObjectA->sphere, sphereObjectB->sphere);
}

//------------------------------- IntersectPlaneAndSphereToGetCircle -------------------------------

IntersectPlaneAndSphereToGetCircle::IntersectPlaneAndSphereToGetCircle()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ IntersectPlaneAndSphereToGetCircle::~IntersectPlaneAndSphereToGetCircle()
{
}

/*virtual*/ std::string IntersectPlaneAndSphereToGetCircle::GetDesc() const
{
	return "Intersect a plane and sphere to produce circle.";
}

/*virtual*/ bool IntersectPlaneAndSphereToGetCircle::Enforce()
{
	if (!this->IsReady())
		return false;

	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	SphereObject* sphereObject = this->GetObject<SphereObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return circleObject->circle.IntersectPlaneAndSphere(planeObject->plane, sphereObject->sphere);
}

//------------------------------- IntersectSphereAndCircleToGetPointPair -------------------------------

IntersectSphereAndCircleToGetPointPair::IntersectSphereAndCircleToGetPointPair()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ IntersectSphereAndCircleToGetPointPair::~IntersectSphereAndCircleToGetPointPair()
{
}

/*virtual*/ std::string IntersectSphereAndCircleToGetPointPair::GetDesc() const
{
	return "Intersect a sphere and a circle to get a point-pair.";
}

/*virtual*/ bool IntersectSphereAndCircleToGetPointPair::Enforce()
{
	if (!this->IsReady())
		return false;

	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	SphereObject* sphereObject = this->GetObject<SphereObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return pointPairObject->pointPair.IntersectSphereAndCircle(sphereObject->sphere, circleObject->circle);
}

//------------------------------- IntersectPlaneAndCircleToGetPointPair -------------------------------

IntersectPlaneAndCircleToGetPointPair::IntersectPlaneAndCircleToGetPointPair()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ IntersectPlaneAndCircleToGetPointPair::~IntersectPlaneAndCircleToGetPointPair()
{
}

/*virtual*/ std::string IntersectPlaneAndCircleToGetPointPair::GetDesc() const
{
	return "Intersect a plane and a circle to get a point-pair.";
}

/*virtual*/ bool IntersectPlaneAndCircleToGetPointPair::Enforce()
{
	if (!this->IsReady())
		return false;

	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return pointPairObject->pointPair.IntersectPlaneAndCircle(planeObject->plane, circleObject->circle);
}

//------------------------------- IntersectPlaneAndLineToGetFlatPoint -------------------------------

IntersectPlaneAndLineToGetFlatPoint::IntersectPlaneAndLineToGetFlatPoint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, FlatPointObject>>());
}

/*virtual*/ IntersectPlaneAndLineToGetFlatPoint::~IntersectPlaneAndLineToGetFlatPoint()
{
}

/*virtual*/ std::string IntersectPlaneAndLineToGetFlatPoint::GetDesc() const
{
	return "Intersect a plane and a line to get a flat-point.";
}

/*virtual*/ bool IntersectPlaneAndLineToGetFlatPoint::Enforce()
{
	if (!this->IsReady())
		return false;

	LineObject* lineObject = this->GetObject<LineObject>();
	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	FlatPointObject* flatPointObject = this->GetObject<FlatPointObject>();

	return flatPointObject->point.IntersectPlaneAndLine(planeObject->plane, lineObject->line);
}