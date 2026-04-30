#pragma once

#include <vector>
#include <memory>

class Object;

/**
 *
 */
class Constraint
{
public:
	Constraint();
	virtual ~Constraint();

	virtual bool Enforce() = 0;

	std::weak_ptr<Object> outputObjectWeakPtr;
	std::vector<std::weak_ptr<Object>> inputObjectWeakPtrArray;
};

/**
 * 
 */
class FitSphereToPointsConstraint : public Constraint
{
public:
	FitSphereToPointsConstraint();
	virtual ~FitSphereToPointsConstraint();

	virtual bool Enforce() override;
};