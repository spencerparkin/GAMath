#pragma once

#include <vector>
#include <string>
#include <memory>

class Object;
class PointObject;
class PointPairObject;
class CircleObject;
class SphereObject;

/**
 *
 */
class Constraint
{
public:
	Constraint();
	virtual ~Constraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) = 0;
	virtual std::string GetDesc() const = 0;
	virtual bool Enforce() = 0;
};

/**
 * 
 */
class FitSphereToPointsConstraint : public Constraint
{
public:
	FitSphereToPointsConstraint();
	virtual ~FitSphereToPointsConstraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) override;
	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;

private:
	std::shared_ptr<SphereObject> sphereObject;
	std::vector<std::shared_ptr<PointObject>> pointObjectArray;
};

/**
 * 
 */
class FitCircleToPointsConstraint : public Constraint
{
public:
	FitCircleToPointsConstraint();
	virtual ~FitCircleToPointsConstraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) override;
	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;

private:
	std::shared_ptr<CircleObject> circleObject;
	std::vector<std::shared_ptr<PointObject>> pointObjectArray;
};

/**
 * 
 */
class FitSphereToPointPairsConstraint : public Constraint
{
public:
	FitSphereToPointPairsConstraint();
	virtual ~FitSphereToPointPairsConstraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) override;
	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;

private:
	std::shared_ptr<SphereObject> sphereObject;
	std::shared_ptr<PointPairObject> pointPairA;
	std::shared_ptr<PointPairObject> pointPairB;
};

/**
 * 
 */
class FitCircleToPointAndPointPairConstraint : public Constraint
{
public:
	FitCircleToPointAndPointPairConstraint();
	virtual ~FitCircleToPointAndPointPairConstraint();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) override;
	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;

private:
	std::shared_ptr<CircleObject> circleObject;
	std::shared_ptr<PointPairObject> pointPairObject;
	std::shared_ptr<PointObject> pointObject;
};

/**
 * 
 */
class IntersectTwoSpheres : public Constraint
{
public:
	IntersectTwoSpheres();
	virtual ~IntersectTwoSpheres();

	virtual bool TakeObjects(const std::vector<std::shared_ptr<Object>>& objectList) override;
	virtual std::string GetDesc() const override;
	virtual bool Enforce() override;

private:
	std::shared_ptr<SphereObject> sphereObjectA;
	std::shared_ptr<SphereObject> sphereObjectB;
	std::shared_ptr<CircleObject> circleObject;
};