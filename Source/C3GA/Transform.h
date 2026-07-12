#pragma once

#include "C3GA/Multivector.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"
#include "E3GA/Vector.h"
#include "E3GA/Rotor.h"

namespace C3GA
{
	/**
	 * This class can represent and apply any conformal transformation.
	 * All such transformations are a sequence of reflections and inversions.
	 * Interestingly, we can get all of the rigid body transformations with
	 * just reflections.
	 */
	class Transform
	{
	public:
		Transform();
		virtual ~Transform();

		/**
		 * Set this transform to the identity transform.
		 */
		void SetAsIdentity();

		void ConcatInversion(const E3GA::Vector& centerOfInversion, double radiusOfInversion);
		void ConcatReflection(const E3GA::Vector& centerOfReflection, const E3GA::Vector& unitNormOfReflection);
		void ConcatRotation(const E3GA::Vector& unitRotationAxis, double rotationAngle);
		void ConcatRotation(const E3GA::Vector& unitRotationAxis, double rotationAngle, const E3GA::Vector& centerOfRotation);
		void ConcatTranslation(const E3GA::Vector& translationDelta);
		void ConcatScale(double uniformScale);
		void ConcatScale(double uniformScale, const E3GA::Vector& centerOfScale);
		void ConcatRigidBodyMotion(const E3GA::Vector& unitRotationAxis, double rotationAngle, const E3GA::Vector& translationDelta);

		/**
		 * This needs to be called before any application of the transform.
		 */
		void CalcInverse();

		void Apply(const Vector& vector, Vector& vectorTransformed) const;
		void Apply(const Bivector& bivector, Bivector& bivectorTransformed) const;
		void Apply(const Trivector& trivector, Trivector& trivectorTransformed) const;
		void Apply(const Quadvector& quadvector, Quadvector& quadvectorTransformed) const;
		void Apply(const Multivector& multivector, Multivector& multivectorTransformed) const;

	public:
		Multivector versor, versorInv;

		static void MakeOrthogonalVector(const E3GA::Vector& vector, E3GA::Vector& orthogonalVector);
		static void MakeRotor(const E3GA::Vector& unitAxis, double angle, E3GA::Rotor& unitRotor);
		static void ApplyRotor(const E3GA::Rotor& unitRotor, const E3GA::Vector& vector, E3GA::Vector& vectorRotated);
	};
}