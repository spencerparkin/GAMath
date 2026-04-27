#pragma once

namespace C3GA
{
	class Scalar;
	class Vector;
	class Bivector;
	class Quadvector;
	class PsuedoScalar;
	class Multivector;

	class Trivector
	{
	public:
		Trivector(double e1_e2_e3, double e1_e2_no, double e1_e2_ni, double e1_e3_no, double e1_e3_ni, double e1_no_ni, double e2_e3_no, double e2_e3_ni, double e2_no_ni, double e3_no_ni);
		Trivector(const Trivector& trivector);

		void Add(const Trivector& trivectorA, const Trivector& trivectorB);

		void Subtract(const Trivector& trivectorA, const Trivector& trivectorB);

		void InnerProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void InnerProduct(const Vector& vectorA, const Quadvector& quadvectorB);
		void InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Trivector& trivectorA, const Scalar& scalarB);
		void InnerProduct(const Quadvector& quadvectorA, const Vector& vectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);

		void OuterProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void OuterProduct(const Vector& vectorA, const Bivector& bivectorB);
		void OuterProduct(const Bivector& bivectorA, const Vector& vectorB);
		void OuterProduct(const Trivector& trivectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB);
		void GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);

		double e1_e2_e3, e1_e2_no, e1_e2_ni, e1_e3_no, e1_e3_ni, e1_no_ni, e2_e3_no, e2_e3_ni, e2_no_ni, e3_no_ni;
	};
}