#pragma once

namespace C3GA
{
	class Scalar;
	class Vector;
	class Bivector;
	class Trivector;
	class Quadvector;
	class Multivector;

	class PsuedoScalar
	{
	public:
		PsuedoScalar();
		PsuedoScalar(double e1_e2_e3_no_ni);
		PsuedoScalar(const PsuedoScalar& psuedoscalar);

		void Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);

		void OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Vector& vectorA, const Quadvector& quadvectorB);
		void OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB);
		void OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB);
		void OuterProduct(const Quadvector& quadvectorA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);

		void GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);

		double e1_e2_e3_no_ni;
	};
}