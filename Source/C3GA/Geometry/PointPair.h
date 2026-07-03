#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Point;
	class Sphere;
	class Circle;
	class Plane;
	class Line;
	class Trivector;

	class PointPair
	{
	public:
		PointPair();
		PointPair(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, double weight = 1.0);
		PointPair(const PointPair& pointPair);
		virtual ~PointPair();

		bool FromTrivector(const Trivector& trivector);
		void ToTrivector(Trivector& trivector) const;

		bool FitToPoints(const Point& pointA, const Point& pointB);

		bool IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB, const Sphere& sphereC);
		bool IntersectSphereAndCircle(const Sphere& sphere, const Circle& circle);
		bool IntersectSphereAndLine(const Sphere& sphere, const Line& line);
		bool IntersectPlaneAndCircle(const Plane& plane, const Circle& circle);

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double radius;
		double weight;
		bool imaginary;
	};
}