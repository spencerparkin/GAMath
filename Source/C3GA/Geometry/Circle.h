#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Bivector;
	class Point;
	class PointPair;
	class Sphere;
	class Plane;

	class Circle
	{
	public:
		Circle();
		Circle(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, double weight = 1.0);
		Circle(const Circle& circle);
		virtual ~Circle();

		bool FromBivector(const Bivector& bivector);
		void ToBivector(Bivector& bivector) const;

		bool FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC);
		bool FitToPointPairAndPoint(const PointPair& pointPairA, const Point& pointB);

		bool IntersectSpheres(const Sphere& sphereA, const Sphere& sphereB);
		bool IntersectPlaneAndSphere(const Plane& planeA, const Sphere& sphereB);

		HappyMath::Vector3 center;
		HappyMath::Vector3 normal;
		double radius;
		double weight;
		bool imaginary;
	};
}