#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class TangentPoint
	{
	public:

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double weight;
	};
}