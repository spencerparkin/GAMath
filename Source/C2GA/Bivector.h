#pragma once

namespace C2GA
{
	class Scalar;
	class Vector;
	class Trivector;
	class PsuedoScalar;
	class Multivector;

	class Bivector
	{
	public:
		Bivector(double e1_e2, double e1_no, double e1_ni, double e2_no, double e2_ni, double no_ni);
		Bivector(const Bivector& bivector);

		void Add(const Bivector& bivectorA, const Bivector& bivectorB);

		void Subtract(const Bivector& bivectorA, const Bivector& bivectorB);

		void InnerProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void InnerProduct(const Vector& vectorA, const Trivector& trivectorB);
		void InnerProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Trivector& trivectorA, const Vector& vectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);

		void OuterProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Bivector& bivectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB);
		void GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB);
		void GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);

		double e1_e2, e1_no, e1_ni, e2_no, e2_ni, no_ni;
	};
}