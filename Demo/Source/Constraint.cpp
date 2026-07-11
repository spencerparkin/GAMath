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

//------------------------------- FitCircleToSphereAndFlatPointConstraint -------------------------------

FitCircleToSphereAndFlatPointConstraint::FitCircleToSphereAndFlatPointConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, FlatPointObject>>());
}

/*virtual*/ FitCircleToSphereAndFlatPointConstraint::~FitCircleToSphereAndFlatPointConstraint()
{
}

/*virtual*/ std::string FitCircleToSphereAndFlatPointConstraint::GetDesc() const
{
	return "Fit circle to a sphere and a flat-point.";
}

/*virtual*/ bool FitCircleToSphereAndFlatPointConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	CircleObject* circleObject = this->GetObject<CircleObject>();
	SphereObject* sphereObject = this->GetObject<SphereObject>();
	FlatPointObject* flatPointObject = this->GetObject<FlatPointObject>();

	return circleObject->circle.FitToSphereAndFlatPoint(sphereObject->sphere, flatPointObject->point);
}

//------------------------------- FitLineToPointPairConstraint -------------------------------

FitLineToPointPairConstraint::FitLineToPointPairConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ FitLineToPointPairConstraint::~FitLineToPointPairConstraint()
{
}

/*virtual*/ std::string FitLineToPointPairConstraint::GetDesc() const
{
	return "Fit line to point-pair.";
}

/*virtual*/ bool FitLineToPointPairConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	LineObject* lineObject = this->GetObject<LineObject>();
	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();

	return lineObject->line.FitToPointPair(pointPairObject->pointPair);
}

//------------------------------- FitPointPairToPointsConstraint -------------------------------

FitPointPairToPointsConstraint::FitPointPairToPointsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitPointPairToPointsConstraint::~FitPointPairToPointsConstraint()
{
}

/*virtual*/ std::string FitPointPairToPointsConstraint::GetDesc() const
{
	return "Fit point-pair to two points.";
}

/*virtual*/ bool FitPointPairToPointsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);

	return pointPairObject->pointPair.FitToPoints(pointObjectA->point, pointObjectB->point);
}

//------------------------------- FitSphereToPointPairAndPointsConstraints -------------------------------

FitSphereToPointPairAndPointsConstraints::FitSphereToPointPairAndPointsConstraints()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitSphereToPointPairAndPointsConstraints::~FitSphereToPointPairAndPointsConstraints()
{
}

/*virtual*/ std::string FitSphereToPointPairAndPointsConstraints::GetDesc() const
{
	return "Fit sphere to a point-pair and two points.";
}

/*virtual*/ bool FitSphereToPointPairAndPointsConstraints::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObject = this->GetObject<SphereObject>();
	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);

	return sphereObject->sphere.FitToPointPairAndPoints(pointPairObject->pointPair, pointObjectA->point, pointObjectB->point);
}

//------------------------------- FitLineToPointsConstraint -------------------------------

FitLineToPointsConstraint::FitLineToPointsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitLineToPointsConstraint::~FitLineToPointsConstraint()
{
}

/*virtual*/ std::string FitLineToPointsConstraint::GetDesc() const
{
	return "Fit line to two points.";
}

/*virtual*/ bool FitLineToPointsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	LineObject* lineObject = this->GetObject<LineObject>();
	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);

	return lineObject->line.FitToPoints(pointObjectA->point, pointObjectB->point);
}

//------------------------------- FitPlaneToPointsConstraint -------------------------------

FitPlaneToPointsConstraint::FitPlaneToPointsConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitPlaneToPointsConstraint::~FitPlaneToPointsConstraint()
{
}

/*virtual*/ std::string FitPlaneToPointsConstraint::GetDesc() const
{
	return "Fit plane to three points.";
}

/*virtual*/ bool FitPlaneToPointsConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	PointObject* pointObjectA = this->GetObject<PointObject>(0);
	PointObject* pointObjectB = this->GetObject<PointObject>(1);
	PointObject* pointObjectC = this->GetObject<PointObject>(2);
	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	
	return planeObject->plane.FitToPoints(
								pointObjectA->point,
								pointObjectB->point,
								pointObjectC->point);
}

//------------------------------- FitPlaneToCircleConstraint -------------------------------

FitPlaneToCircleConstraint::FitPlaneToCircleConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ FitPlaneToCircleConstraint::~FitPlaneToCircleConstraint()
{
}

/*virtual*/ std::string FitPlaneToCircleConstraint::GetDesc() const
{
	return "Fit plane to circle.";
}

/*virtual*/ bool FitPlaneToCircleConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return planeObject->plane.FitPlaneToCircle(circleObject->circle);
}

//------------------------------- FitPlaneToPointPairAndPointConstraint -------------------------------

FitPlaneToPointPairAndPointConstraint::FitPlaneToPointPairAndPointConstraint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointObject>>());
}

/*virtual*/ FitPlaneToPointPairAndPointConstraint::~FitPlaneToPointPairAndPointConstraint()
{
}

/*virtual*/ std::string FitPlaneToPointPairAndPointConstraint::GetDesc() const
{
	return "Fit plane to point-pair and point.";
}

/*virtual*/ bool FitPlaneToPointPairAndPointConstraint::Enforce()
{
	if (!this->IsReady())
		return false;

	PlaneObject* planeObject = this->GetObject<PlaneObject>();
	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	PointObject* pointObject = this->GetObject<PointObject>();

	return planeObject->plane.FitToPointPairAndPoint(pointPairObject->pointPair, pointObject->point);
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

//------------------------------- IntersectThreeSpheresToGetPointPair -------------------------------

IntersectThreeSpheresToGetPointPair::IntersectThreeSpheresToGetPointPair()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
}

/*virtual*/ IntersectThreeSpheresToGetPointPair::~IntersectThreeSpheresToGetPointPair()
{
}

/*virtual*/ std::string IntersectThreeSpheresToGetPointPair::GetDesc() const
{
	return "Intersect three spheres to produce point-pair.";
}

/*virtual*/ bool IntersectThreeSpheresToGetPointPair::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObjectA = this->GetObject<SphereObject>(0);
	SphereObject* sphereObjectB = this->GetObject<SphereObject>(1);
	SphereObject* sphereObjectC = this->GetObject<SphereObject>(2);
	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();

	return pointPairObject->pointPair.IntersectSpheres(
									sphereObjectA->sphere,
									sphereObjectB->sphere,
									sphereObjectC->sphere);
}

//------------------------------- IntersectThreePlanesToGetFlatPoint -------------------------------

IntersectThreePlanesToGetFlatPoint::IntersectThreePlanesToGetFlatPoint()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, FlatPointObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
}

/*virtual*/ IntersectThreePlanesToGetFlatPoint::~IntersectThreePlanesToGetFlatPoint()
{
}

/*virtual*/ std::string IntersectThreePlanesToGetFlatPoint::GetDesc() const
{
	return "Intersect three planes to get a flat-point.";
}

/*virtual*/ bool IntersectThreePlanesToGetFlatPoint::Enforce()
{
	if (!this->IsReady())
		return false;

	PlaneObject* planeObjectA = this->GetObject<PlaneObject>(0);
	PlaneObject* planeObjectB = this->GetObject<PlaneObject>(1);
	PlaneObject* planeObjectC = this->GetObject<PlaneObject>(2);
	FlatPointObject* flatPointObject = this->GetObject<FlatPointObject>();

	return flatPointObject->point.IntersectPlanes(
									planeObjectA->plane,
									planeObjectB->plane,
									planeObjectC->plane);
}

//------------------------------- IntersectTwoPlanesToGetLine -------------------------------

IntersectTwoPlanesToGetLine::IntersectTwoPlanesToGetLine()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PlaneObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
}

/*virtual*/ IntersectTwoPlanesToGetLine::~IntersectTwoPlanesToGetLine()
{
}

/*virtual*/ std::string IntersectTwoPlanesToGetLine::GetDesc() const
{
	return "Intersect two planes to get a line.";
}

/*virtual*/ bool IntersectTwoPlanesToGetLine::Enforce()
{
	if (!this->IsReady())
		return false;

	PlaneObject* planeObjectA = this->GetObject<PlaneObject>(0);
	PlaneObject* planeObjectB = this->GetObject<PlaneObject>(1);
	LineObject* lineObject = this->GetObject<LineObject>();

	return lineObject->line.IntersectPlanes(
							planeObjectA->plane,
							planeObjectB->plane);
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

//------------------------------- IntersectSphereAndLineToGetPointPair -------------------------------

IntersectSphereAndLineToGetPointPair::IntersectSphereAndLineToGetPointPair()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ IntersectSphereAndLineToGetPointPair::~IntersectSphereAndLineToGetPointPair()
{
}

/*virtual*/ std::string IntersectSphereAndLineToGetPointPair::GetDesc() const
{
	return "Intersect a sphere and a line to get a point-pair";
}

/*virtual*/ bool IntersectSphereAndLineToGetPointPair::Enforce()
{
	if (!this->IsReady())
		return false;

	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	SphereObject* sphereObject = this->GetObject<SphereObject>();
	LineObject* lineObject = this->GetObject<LineObject>();

	return pointPairObject->pointPair.IntersectSphereAndLine(sphereObject->sphere, lineObject->line);
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

//------------------------------- ReinterpretPointPairAsCircle -------------------------------

ReinterpretPointPairAsCircle::ReinterpretPointPairAsCircle()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, PointPairObject>>());
}

/*virtual*/ ReinterpretPointPairAsCircle::~ReinterpretPointPairAsCircle()
{
}

/*virtual*/ std::string ReinterpretPointPairAsCircle::GetDesc() const
{
	return "Reinterpret a point-pair as a circle.";
}

/*virtual*/ bool ReinterpretPointPairAsCircle::Enforce()
{
	if (!this->IsReady())
		return false;

	PointPairObject* pointPairObject = this->GetObject<PointPairObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return circleObject->circle.Reinterpret(pointPairObject->pointPair);
}

//------------------------------- TransformLineUsingSphere -------------------------------

TransformLineUsingSphere::TransformLineUsingSphere()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, LineObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ TransformLineUsingSphere::~TransformLineUsingSphere()
{
}

/*virtual*/ std::string TransformLineUsingSphere::GetDesc() const
{
	return "Transform a line into a circle using a spherical inversion.";
}

/*virtual*/ bool TransformLineUsingSphere::Enforce()
{
	if (!this->IsReady())
		return false;

	LineObject* lineObject = this->GetObject<LineObject>();
	SphereObject* sphereObject = this->GetObject<SphereObject>();
	CircleObject* circleObject = this->GetObject<CircleObject>();

	return sphereObject->sphere.InvertLineToCircle(lineObject->line, circleObject->circle);
}

//------------------------------- TransformCircleUsingSphere -------------------------------

TransformCircleUsingSphere::TransformCircleUsingSphere()
{
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, SphereObject>>());
	this->objectClassArray.push_back(std::make_shared<DerivedClass<Object, CircleObject>>());
}

/*virtual*/ TransformCircleUsingSphere::~TransformCircleUsingSphere()
{
}

/*virtual*/ std::string TransformCircleUsingSphere::GetDesc() const
{
	return "Transform a circle using a spherical inversion.";
}

/*virtual*/ bool TransformCircleUsingSphere::Enforce()
{
	if (!this->IsReady())
		return false;

	SphereObject* sphereObject = this->GetObject<SphereObject>();
	CircleObject* circleObjectA = this->GetObject<CircleObject>(0);
	CircleObject* circleObjectB = this->GetObject<CircleObject>(1);

	return sphereObject->sphere.InvertCircleToCircle(circleObjectA->circle, circleObjectB->circle);
}