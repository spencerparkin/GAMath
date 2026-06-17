#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Bivector;

	class Line
	{
	public:
		Line();
		Line(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double weight = 1.0);
		Line(const Line& line);
		virtual ~Line();

		bool FromBivector(const Bivector& bivector);
		void ToBivector(Bivector& bivector) const;

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double weight;
	};
}