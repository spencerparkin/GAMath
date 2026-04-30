#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Vector;

	class Point
	{
	public:
		Point();
		Point(const HappyMath::Vector3& center, double weight = 1.0);
		Point(const Point& point);
		virtual ~Point();

		void ToVector(Vector& vector) const;
		bool FromVector(const Vector& vector);

		HappyMath::Vector3 center;
		double weight;
	};
}