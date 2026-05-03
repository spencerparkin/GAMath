// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

namespace E3GA
{
	class Scalar;
	class PsuedoScalar;
	class Vector;
	class Rotor;
	class Multivector;

	class Bivector
	{
	public:
		Bivector();
		Bivector(double e1_e2, double e2_e3, double e3_e1);
		Bivector(const Bivector& bivector);

		void Add(const Bivector& bivectorA, const Bivector& bivectorB);

		void Subtract(const Bivector& bivectorA, const Bivector& bivectorB);

		void InnerProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Bivector& bivectorA, const Scalar& scalarB);

		void OuterProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void OuterProduct(const Bivector& bivectorA, const Rotor& rotorB);
		void OuterProduct(const Rotor& rotorA, const Bivector& bivectorB);

		void GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB);

		double e1_e2, e2_e3, e3_e1;
	};
}