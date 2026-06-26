#pragma once

#include "Class.hpp"
#include <vector>
#include <string>
#include <memory>

class Object;
class PointObject;
class PointPairObject;
class CircleObject;
class SphereObject;
class PlaneObject;
class LineObject;
class FlatPointObject;

/**
 *
 */
class Constraint
{
public:
	Constraint();
	virtual ~Constraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& givenObjectArray);
	virtual std::string GetDesc() const = 0;
	virtual bool Enforce() = 0;

protected:

	bool IsReady();

	template<typename T>
	T* GetObject(int i = 0)
	{
		for (std::shared_ptr<Object> object : this->objectArray)
		{
			T* typedObject = dynamic_cast<T*>(object.get());
			if (typedObject && i-- <= 0)
				return typedObject;
		}

		return nullptr;
	}

	std::vector<std::shared_ptr<BaseClass<Object>>> objectClassArray;
	std::vector<std::shared_ptr<Object>> objectArray;
};

/**
 * 
 */
class FitSphereToPointsConstraint : public Constraint
{
public:
	FitSphereToPointsConstraint();
	virtual ~FitSphereToPointsConstraint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class FitSphereToPointAndCircleContraint : public Constraint
{
public:
	FitSphereToPointAndCircleContraint();
	virtual ~FitSphereToPointAndCircleContraint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class FitCircleToPointsConstraint : public Constraint
{
public:
	FitCircleToPointsConstraint();
	virtual ~FitCircleToPointsConstraint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class FitSphereToPointPairsConstraint : public Constraint
{
public:
	FitSphereToPointPairsConstraint();
	virtual ~FitSphereToPointPairsConstraint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class FitCircleToPointAndPointPairConstraint : public Constraint
{
public:
	FitCircleToPointAndPointPairConstraint();
	virtual ~FitCircleToPointAndPointPairConstraint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class FitPlaneToLineAndPointConstraints : public Constraint
{
public:
	FitPlaneToLineAndPointConstraints();
	virtual ~FitPlaneToLineAndPointConstraints();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectTwoSpheresToGetCircle : public Constraint
{
public:
	IntersectTwoSpheresToGetCircle();
	virtual ~IntersectTwoSpheresToGetCircle();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectThreeSpheresToGetPointPair : public Constraint
{
public:
	IntersectThreeSpheresToGetPointPair();
	virtual ~IntersectThreeSpheresToGetPointPair();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 *
 */
class IntersectThreePlanesToGetFlatPoint : public Constraint
{
public:
	IntersectThreePlanesToGetFlatPoint();
	virtual ~IntersectThreePlanesToGetFlatPoint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectTwoPlanesToGetLine : public Constraint
{
public:
	IntersectTwoPlanesToGetLine();
	virtual ~IntersectTwoPlanesToGetLine();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectPlaneAndSphereToGetCircle : public Constraint
{
public:
	IntersectPlaneAndSphereToGetCircle();
	virtual ~IntersectPlaneAndSphereToGetCircle();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectSphereAndCircleToGetPointPair : public Constraint
{
public:
	IntersectSphereAndCircleToGetPointPair();
	virtual ~IntersectSphereAndCircleToGetPointPair();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 * 
 */
class IntersectPlaneAndCircleToGetPointPair : public Constraint
{
public:
	IntersectPlaneAndCircleToGetPointPair();
	virtual ~IntersectPlaneAndCircleToGetPointPair();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};

/**
 *
 */
class IntersectPlaneAndLineToGetFlatPoint : public Constraint
{
public:
	IntersectPlaneAndLineToGetFlatPoint();
	virtual ~IntersectPlaneAndLineToGetFlatPoint();

	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;
};