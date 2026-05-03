#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Point;
	class Sphere;
	class Bivector;

	class PointPair
	{
	public:
		PointPair();
		PointPair(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, double weight = 1.0);
		PointPair(const PointPair& pointPair);
		virtual ~PointPair();

		bool FromBivector(const Bivector& bivector);
		void ToBivector(Bivector& bivector) const;

		bool FitToPoints(const Point& pointA, const Point& pointB);

		bool IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB, const Sphere& sphereC);

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double radius;
		double weight;
		bool imaginary;
	};
}