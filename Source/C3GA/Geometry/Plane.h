#pragma once

#include "E3GA/Vector.h"

namespace C3GA
{
	class Line;
	class Point;
	class PointPair;
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
		bool FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC);
		bool FitPlaneToLineAndPoint(const Line& line, const Point& point);
		bool FitPlaneToCircle(const Circle& circle);
		bool FitToPointPairAndPoint(const PointPair& pointPair, const Point& point);

		E3GA::Vector center;
		E3GA::Vector normal;
		double weight;
	};
}