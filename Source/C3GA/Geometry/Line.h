#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Line
	{
	public:

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double weight;
	};
}