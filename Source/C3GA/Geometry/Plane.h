#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Line;
	class Point;
	class Vector;

	class Plane
	{
	public:
		Plane();
		Plane(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double weight = 1.0);
		Plane(const Plane& plane);
		virtual ~Plane();

		bool FromVector(const Vector& vector);
		void ToVector(Vector& vector) const;

		bool FitPlaneToLineAndPoint(const Line& line, const Point& point);

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double weight;
	};
}