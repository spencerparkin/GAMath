#include "C3GA/Factoring.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"

namespace C3GA
{
	static Vector GetProbingVector(int i)
	{
		switch (i)
		{
			case 0: return Vector(1.0, 0.0, 0.0, 0.0, 0.0);
			case 1: return Vector(0.0, 1.0, 0.0, 0.0, 0.0);
			case 2: return Vector(0.0, 0.0, 1.0, 0.0, 0.0);
			case 3: return Vector(0.0, 0.0, 0.0, 1.0, 0.0);
			case 4: return Vector(0.0, 0.0, 0.0, 0.0, 1.0);
		}

		return Vector(0.0, 0.0, 0.0, 0.0, 0.0);
	}

	static int GetNumProbingVectors()
	{
		return 5;
	}

	bool Factor(const Quadvector& quadvector, Vector& vectorA, Vector& vectorB, Vector& vectorC, Vector& vectorD)
	{
		Trivector zero(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

		for (int i = 0; i < GetNumProbingVectors(); i++)
		{
			Vector probingVector = GetProbingVector(i);

			Trivector trivector;
			trivector.InnerProduct(probingVector, quadvector);

			if (!trivector.IsEqualTo(zero))
			{
				vectorA.InnerProduct(trivector, quadvector);

				Trivector blade;
				blade.InnerProduct(vectorA, quadvector);

				return Factor(blade, vectorB, vectorC, vectorD);
			}
		}

		return false;
	}

	bool Factor(const Trivector& trivector, Vector& vectorA, Vector& vectorB, Vector& vectorC)
	{
		Bivector zero(0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

		for (int i = 0; i < GetNumProbingVectors(); i++)
		{
			Vector probingVector = GetProbingVector(i);

			Bivector bivector;
			bivector.InnerProduct(probingVector, trivector);

			if (!bivector.IsEqualTo(zero))
			{
				vectorA.InnerProduct(bivector, trivector);

				Bivector blade;
				blade.InnerProduct(vectorA, trivector);

				return Factor(blade, vectorB, vectorC);
			}
		}

		return false;
	}

	bool Factor(const Bivector& bivector, Vector& vectorA, Vector& vectorB)
	{
		Vector zero(0.0, 0.0, 0.0, 0.0, 0.0);

		for (int i = 0; i < GetNumProbingVectors(); i++)
		{
			Vector probingVector = GetProbingVector(i);

			vectorA.InnerProduct(probingVector, bivector);

			if (!vectorA.IsEqualTo(zero))
			{
				vectorB.InnerProduct(vectorA, bivector);

				Bivector blade;
				blade.OuterProduct(vectorA, vectorB);

				return blade.IsEqualTo(bivector);
			}
		}

		return false;
	}
}