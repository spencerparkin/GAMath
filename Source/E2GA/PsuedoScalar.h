#pragma once

namespace E2GA
{
	class Scalar;
	class Vector;
	class Rotor;
	class Multivector;

	class PsuedoScalar
	{
	public:
		PsuedoScalar();
		PsuedoScalar(double e1_e2);
		PsuedoScalar(const PsuedoScalar& psuedoscalar);

		void Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);

		void OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);

		void GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);

		double e1_e2;
	};
}