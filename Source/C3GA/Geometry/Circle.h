#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Circle
	{
	public:


		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double radius;
		double weight;
	};
}