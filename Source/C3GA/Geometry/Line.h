#pragma once

#include "E3GA/Vector.h"

namespace C3GA
{
	class Plane;
	class PointPair;
	class Bivector;

	class Line
	{
	public:
		Line();
		Line(const E3GA::Vector& center, const E3GA::Vector& normal, double weight = 1.0);
		Line(const Line& line);
		virtual ~Line();

		bool FromBivector(const Bivector& bivector);
		void ToBivector(Bivector& bivector) const;

		bool FitToPointPair(const PointPair& pointPair);
		bool IntersectPlanes(const Plane& planeA, const Plane& planeB);

		E3GA::Vector center;
		E3GA::Vector normal;
		double weight;
	};
}