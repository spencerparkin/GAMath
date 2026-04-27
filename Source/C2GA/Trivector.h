#pragma once

namespace C2GA
{
	class Scalar;
	class Vector;
	class Bivector;
	class PsuedoScalar;
	class Multivector;

	class Trivector
	{
	public:
		Trivector();
		Trivector(double e1_e2_no, double e1_e2_ni, double e1_no_ni, double e2_no_ni);
		Trivector(const Trivector& trivector);

		void Add(const Trivector& trivectorA, const Trivector& trivectorB);

		void Subtract(const Trivector& trivectorA, const Trivector& trivectorB);

		void InnerProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Trivector& trivectorA, const Scalar& scalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);

		void OuterProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void OuterProduct(const Vector& vectorA, const Bivector& bivectorB);
		void OuterProduct(const Bivector& bivectorA, const Vector& vectorB);
		void OuterProduct(const Trivector& trivectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);

		double e1_e2_no, e1_e2_ni, e1_no_ni, e2_no_ni;
	};
}