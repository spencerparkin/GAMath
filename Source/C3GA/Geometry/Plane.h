#pragma once

#include "E3GA/Vector.h"

namespace C3GA
{
	class Line;
	class Point;
	class Circle;
	class Vector;

	class Plane
	{
	public:
		Plane();
		Plane(const E3GA::Vector& center, const E3GA::Vector& normal, double weight = 1.0);
		Plane(const Plane& plane);
		virtual ~Plane();

		bool FromVector(const Vector& vector);
		void ToVector(Vector& vector) const;

		bool FitToCircle(const Circle& circle);
		bool FitPlaneToLineAndPoint(const Line& line, const Point& point);

		E3GA::Vector center;
		E3GA::Vector normal;
		double weight;
	};
}