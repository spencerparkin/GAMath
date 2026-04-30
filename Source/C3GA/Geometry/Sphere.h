#pragma once

#include "HappyMath/Vector3.h"

namespace C3GA
{
	class Vector;
	class Point;
	class PointPair;
	class Circle;

	/**
	 * These are spheres in 3D conformal geometric algebra.
	 * Note that if the radius is negative, then they're imaginary.
	 * If the radius is zero, then it's a point.
	 */
	class Sphere
	{
	public:
		Sphere();
		Sphere(const HappyMath::Vector3& center, double radius, double weight = 1.0);
		Sphere(const Sphere& sphere);
		virtual ~Sphere();

		void ToVector(Vector& vector) const;
		bool FromVector(const Vector& vector);

		bool FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC, const Point& pointD);
		bool FitToPointPairs(const PointPair& pointPairA, const PointPair& pointPairB);
		bool FitToCircleAndPoint(const Circle& circleA, const Point& pointB);

		HappyMath::Vector3 center;
		double radius;
		double weight;
	};
}