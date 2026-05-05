#pragma once

#include <memory>

template<typename BaseClassType>
class BaseClass
{
public:
	virtual std::shared_ptr<BaseClassType> Create() = 0;
};

template<typename BaseClassType, typename DerivedClassType>
class DerivedClass : public BaseClass<BaseClassType>
{
public:
	virtual std::shared_ptr<BaseClassType> Create() override
	{
		return std::make_shared<DerivedClassType>();
	}
};