// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

namespace C2GA
{
	class Scalar;
	class Vector;
	class Bivector;
	class Trivector;
	class PsuedoScalar;
	class Multivector;

	class Rotor
	{
	public:
		Rotor();
		Rotor(double _1, double e1_e2, double e1_no, double e1_ni, double e2_no, double e2_ni, double no_ni);
		Rotor(const Scalar& scalar);
		Rotor(const Bivector& bivector);
		Rotor(const Rotor& rotor);

		void Add(const Scalar& scalarA, const Scalar& scalarB);
		void Add(const Scalar& scalarA, const Bivector& bivectorB);
		void Add(const Scalar& scalarA, const Rotor& rotorB);
		void Add(const Bivector& bivectorA, const Scalar& scalarB);
		void Add(const Bivector& bivectorA, const Bivector& bivectorB);
		void Add(const Bivector& bivectorA, const Rotor& rotorB);
		void Add(const Rotor& rotorA, const Scalar& scalarB);
		void Add(const Rotor& rotorA, const Bivector& bivectorB);
		void Add(const Rotor& rotorA, const Rotor& rotorB);

		void Subtract(const Scalar& scalarA, const Scalar& scalarB);
		void Subtract(const Scalar& scalarA, const Bivector& bivectorB);
		void Subtract(const Scalar& scalarA, const Rotor& rotorB);
		void Subtract(const Bivector& bivectorA, const Scalar& scalarB);
		void Subtract(const Bivector& bivectorA, const Bivector& bivectorB);
		void Subtract(const Bivector& bivectorA, const Rotor& rotorB);
		void Subtract(const Rotor& rotorA, const Scalar& scalarB);
		void Subtract(const Rotor& rotorA, const Bivector& bivectorB);
		void Subtract(const Rotor& rotorA, const Rotor& rotorB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void InnerProduct(const Scalar& scalarA, const Rotor& rotorB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const Trivector& trivectorB);
		void InnerProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Bivector& bivectorA, const Rotor& rotorB);
		void InnerProduct(const Trivector& trivectorA, const Vector& vectorB);
		void InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Rotor& rotorA, const Scalar& scalarB);
		void InnerProduct(const Rotor& rotorA, const Bivector& bivectorB);
		void InnerProduct(const Rotor& rotorA, const Rotor& rotorB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void OuterProduct(const Scalar& scalarA, const Rotor& rotorB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB);
		void OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB);
		void OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB);
		void OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Rotor& rotorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void GeometricProduct(const Scalar& scalarA, const Rotor& rotorB);
		void GeometricProduct(const Vector& vectorA, const Vector& vectorB);
		void GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Trivector& trivectorA, const Trivector& trivectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Rotor& rotorA, const Scalar& scalarB);

		double _1, e1_e2, e1_no, e1_ni, e2_no, e2_ni, no_ni;
	};
}