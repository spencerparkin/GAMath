#pragma once

namespace E3GA
{
	class Rotor
	{
	public:
		Rotor(double _1, double e1_e2, double e2_e3, double e3_e1);
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

		void Subract(const Scalar& scalarA, const Scalar& scalarB);
		void Subract(const Scalar& scalarA, const Bivector& bivectorB);
		void Subract(const Scalar& scalarA, const Rotor& rotorB);
		void Subract(const Bivector& bivectorA, const Scalar& scalarB);
		void Subract(const Bivector& bivectorA, const Bivector& bivectorB);
		void Subract(const Bivector& bivectorA, const Rotor& rotorB);
		void Subract(const Rotor& rotorA, const Scalar& scalarB);
		void Subract(const Rotor& rotorA, const Bivector& bivectorB);
		void Subract(const Rotor& rotorA, const Rotor& rotorB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void InnerProduct(const Scalar& scalarA, const Rotor& rotorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void InnerProduct(const Bivector& bivectorA, const Rotor& rotorB);
		void InnerProduct(const Rotor& rotorA, const Scalar& scalarB);
		void InnerProduct(const Rotor& rotorA, const Bivector& bivectorB);
		void InnerProduct(const Rotor& rotorA, const Rotor& rotorB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void OuterProduct(const Scalar& scalarA, const Rotor& rotorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void OuterProduct(const Bivector& bivectorA, const Rotor& rotorB);
		void OuterProduct(const Rotor& rotorA, const Scalar& scalarB);
		void OuterProduct(const Rotor& rotorA, const Bivector& bivectorB);
		void OuterProduct(const Rotor& rotorA, const Rotor& rotorB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void GeometricProduct(const Scalar& scalarA, const Rotor& rotorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Vector& vectorA, const Vector& vectorB);
		void GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void GeometricProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void GeometricProduct(const Bivector& bivectorA, const Rotor& rotorB);
		void GeometricProduct(const Rotor& rotorA, const Scalar& scalarB);
		void GeometricProduct(const Rotor& rotorA, const Bivector& bivectorB);
		void GeometricProduct(const Rotor& rotorA, const Rotor& rotorB);

		double _1, e1_e2, e2_e3, e3_e1;
	};
}