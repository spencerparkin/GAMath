#pragma once

namespace C3GA
{
	class Vector;
	class Bivector;
	class Trivector;
	class Quadvector;

	// These functions try to find a factorization of the given GA elements.
	// Note that all N-blades are N-vectors, but not all N-vectors are N-blades.
	// Also note that blade factorizations are not unique.
	bool Factor(const Quadvector& quadvector, Vector& vectorA, Vector& vectorB, Vector& vectorC, Vector& vectorD);
	bool Factor(const Trivector& trivector, Vector& vectorA, Vector& vectorB, Vector& vectorC);
	bool Factor(const Bivector& bivector, Vector& vectorA, Vector& vectorB);
}