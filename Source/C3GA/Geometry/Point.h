#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Plane;
	class Line;
	class Vector;
	class Trivector;

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

	class FlatPoint
	{
	public:
		FlatPoint();
		FlatPoint(const HappyMath::Vector3 center, double weight = 1.0);
		FlatPoint(const FlatPoint& point);
		virtual ~FlatPoint();

		void ToTrivector(Trivector& trivector) const;
		bool FromTrivector(const Trivector& trivector);

		bool FitToPoint(const Point& point);
		bool IntersectPlaneAndLine(const Plane& plane, const Line& line);
		bool IntersectPlanes(const Plane& planeA, const Plane& planeB, const Plane& planeC);

		HappyMath::Vector3 center;
		double weight;
	};
}