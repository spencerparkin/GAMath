#pragma once

#include <vector>
#include <string>
#include <memory>

class Object;
class PointObject;
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

	std::shared_ptr<SphereObject> sphereObject;
	std::vector<std::shared_ptr<PointObject>> pointObjectArray;
};