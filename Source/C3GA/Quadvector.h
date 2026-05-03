// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

namespace C3GA
{
	class Scalar;
	class Vector;
	class Bivector;
	class Trivector;
	class PsuedoScalar;
	class Multivector;
	class Rotor;

	class Quadvector
	{
	public:
		Quadvector();
		Quadvector(double e1_e2_e3_no, double e1_e2_e3_ni, double e1_e2_no_ni, double e1_e3_no_ni, double e2_e3_no_ni);
		Quadvector(const Quadvector& quadvector);

		void Add(const Quadvector& quadvectorA, const Quadvector& quadvectorB);

		void Subtract(const Quadvector& quadvectorA, const Quadvector& quadvectorB);

		void InnerProduct(const Scalar& scalarA, const Quadvector& quadvectorB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Quadvector& quadvectorA, const Scalar& scalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);

		void OuterProduct(const Scalar& scalarA, const Quadvector& quadvectorB);
		void OuterProduct(const Vector& vectorA, const Trivector& trivectorB);
		void OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void OuterProduct(const Trivector& trivectorA, const Vector& vectorB);
		void OuterProduct(const Quadvector& quadvectorA, const Scalar& scalarB);
		void OuterProduct(const Quadvector& quadvectorA, const Rotor& rotorB);
		void OuterProduct(const Rotor& rotorA, const Quadvector& quadvectorB);

		void GeometricProduct(const Scalar& scalarA, const Quadvector& quadvectorB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Quadvector& quadvectorA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);

		double e1_e2_e3_no, e1_e2_e3_ni, e1_e2_no_ni, e1_e3_no_ni, e2_e3_no_ni;
	};
}