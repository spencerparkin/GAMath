#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class PointPair
	{
	public:

		HappyMath::Vector3 point[2];
		double weight;
	};
}