#pragma once

namespace C3GA
{
	class Vector;

	class Point
	{
	public:
		Point(double x, double y, double z, double w = 1.0);
		Point(const Point& point);
		virtual ~Point();

		bool ToVector(Vector& vector) const;
		bool FromVector(const Vector& vector);

		double x, y, z;
		double w;
	};
}