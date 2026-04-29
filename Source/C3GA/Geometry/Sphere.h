#pragma once

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
		Sphere(double cx, double cy, double cz, double r, double w = 1.0);
		Sphere(const Sphere& sphere);
		virtual ~Sphere();

		bool ToVector(Vector& vector) const;
		bool FromVector(const Vector& vector);

		bool FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC, const Point& pointD);
		bool FitToPointPairs(const PointPair& pointPairA, const PointPair& pointPairB);
		bool FitToCircleAndPoint(const Circle& circleA, const Point& pointB);

		double cx, cy, cz;
		double r;
		double w;
	};
}