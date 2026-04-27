#pragma once

namespace E2GA
{
	class Multivector
	{
	public:
		Multivector(double _1, double e1, double e2, double e1_e2);
		Multivector(const Scalar& scalar);
		Multivector(const PsuedoScalar& psuedoscalar);
		Multivector(const Vector& vector);
		Multivector(const Rotor& rotor);
		Multivector(const Multivector& multivector);

		void Add(const Scalar& scalarA, const Scalar& scalarB);
		void Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void Add(const Scalar& scalarA, const Vector& vectorB);
		void Add(const Scalar& scalarA, const Rotor& rotorB);
		void Add(const Scalar& scalarA, const Multivector& multivectorB);
		void Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void Add(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void Add(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void Add(const Vector& vectorA, const Scalar& scalarB);
		void Add(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void Add(const Vector& vectorA, const Vector& vectorB);
		void Add(const Vector& vectorA, const Rotor& rotorB);
		void Add(const Vector& vectorA, const Multivector& multivectorB);
		void Add(const Rotor& rotorA, const Scalar& scalarB);
		void Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void Add(const Rotor& rotorA, const Vector& vectorB);
		void Add(const Rotor& rotorA, const Rotor& rotorB);
		void Add(const Rotor& rotorA, const Multivector& multivectorB);
		void Add(const Multivector& multivectorA, const Scalar& scalarB);
		void Add(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);
		void Add(const Multivector& multivectorA, const Vector& vectorB);
		void Add(const Multivector& multivectorA, const Rotor& rotorB);
		void Add(const Multivector& multivectorA, const Multivector& multivectorB);

		void Subract(const Scalar& scalarA, const Scalar& scalarB);
		void Subract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void Subract(const Scalar& scalarA, const Vector& vectorB);
		void Subract(const Scalar& scalarA, const Rotor& rotorB);
		void Subract(const Scalar& scalarA, const Multivector& multivectorB);
		void Subract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void Subract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void Subract(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void Subract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void Subract(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void Subract(const Vector& vectorA, const Scalar& scalarB);
		void Subract(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void Subract(const Vector& vectorA, const Vector& vectorB);
		void Subract(const Vector& vectorA, const Rotor& rotorB);
		void Subract(const Vector& vectorA, const Multivector& multivectorB);
		void Subract(const Rotor& rotorA, const Scalar& scalarB);
		void Subract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void Subract(const Rotor& rotorA, const Vector& vectorB);
		void Subract(const Rotor& rotorA, const Rotor& rotorB);
		void Subract(const Rotor& rotorA, const Multivector& multivectorB);
		void Subract(const Multivector& multivectorA, const Scalar& scalarB);
		void Subract(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);
		void Subract(const Multivector& multivectorA, const Vector& vectorB);
		void Subract(const Multivector& multivectorA, const Rotor& rotorB);
		void Subract(const Multivector& multivectorA, const Multivector& multivectorB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Scalar& scalarA, const Vector& vectorB);
		void InnerProduct(const Scalar& scalarA, const Rotor& rotorB);
		void InnerProduct(const Scalar& scalarA, const Multivector& multivectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void InnerProduct(const Vector& vectorA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const Rotor& rotorB);
		void InnerProduct(const Vector& vectorA, const Multivector& multivectorB);
		void InnerProduct(const Rotor& rotorA, const Scalar& scalarB);
		void InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Rotor& rotorA, const Vector& vectorB);
		void InnerProduct(const Rotor& rotorA, const Rotor& rotorB);
		void InnerProduct(const Rotor& rotorA, const Multivector& multivectorB);
		void InnerProduct(const Multivector& multivectorA, const Scalar& scalarB);
		void InnerProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Multivector& multivectorA, const Vector& vectorB);
		void InnerProduct(const Multivector& multivectorA, const Rotor& rotorB);
		void InnerProduct(const Multivector& multivectorA, const Multivector& multivectorB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Scalar& scalarA, const Vector& vectorB);
		void OuterProduct(const Scalar& scalarA, const Rotor& rotorB);
		void OuterProduct(const Scalar& scalarA, const Multivector& multivectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void OuterProduct(const Vector& vectorA, const Scalar& scalarB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const Rotor& rotorB);
		void OuterProduct(const Vector& vectorA, const Multivector& multivectorB);
		void OuterProduct(const Rotor& rotorA, const Scalar& scalarB);
		void OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Rotor& rotorA, const Vector& vectorB);
		void OuterProduct(const Rotor& rotorA, const Rotor& rotorB);
		void OuterProduct(const Rotor& rotorA, const Multivector& multivectorB);
		void OuterProduct(const Multivector& multivectorA, const Scalar& scalarB);
		void OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Multivector& multivectorA, const Vector& vectorB);
		void OuterProduct(const Multivector& multivectorA, const Rotor& rotorB);
		void OuterProduct(const Multivector& multivectorA, const Multivector& multivectorB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Scalar& scalarA, const Vector& vectorB);
		void GeometricProduct(const Scalar& scalarA, const Rotor& rotorB);
		void GeometricProduct(const Scalar& scalarA, const Multivector& multivectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void GeometricProduct(const Vector& vectorA, const Scalar& scalarB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Vector& vectorA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const Rotor& rotorB);
		void GeometricProduct(const Vector& vectorA, const Multivector& multivectorB);
		void GeometricProduct(const Rotor& rotorA, const Scalar& scalarB);
		void GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Rotor& rotorA, const Vector& vectorB);
		void GeometricProduct(const Rotor& rotorA, const Rotor& rotorB);
		void GeometricProduct(const Rotor& rotorA, const Multivector& multivectorB);
		void GeometricProduct(const Multivector& multivectorA, const Scalar& scalarB);
		void GeometricProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Multivector& multivectorA, const Vector& vectorB);
		void GeometricProduct(const Multivector& multivectorA, const Rotor& rotorB);
		void GeometricProduct(const Multivector& multivectorA, const Multivector& multivectorB);

		double _1, e1, e2, e1_e2;
	};
}