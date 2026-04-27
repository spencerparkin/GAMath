#pragma once

namespace C3GA
{
	class Vector
	{
	public:
		Vector(double e1, double e2, double e3, double no, double ni);
		Vector(const Vector& vector);

		void Add(const Vector& vectorA, const Vector& vectorB);

		void Subract(const Vector& vectorA, const Vector& vectorB);

		void InnerProduct(const Scalar& scalarA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const Bivector& bivectorB);
		void InnerProduct(const Bivector& bivectorA, const Vector& vectorB);
		void InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB);
		void InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB);
		void InnerProduct(const Trivector& trivectorA, const Quadvector& quadvectorB);
		void InnerProduct(const Quadvector& quadvectorA, const Trivector& trivectorB);
		void InnerProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB);

		void OuterProduct(const Scalar& scalarA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const Scalar& scalarB);
		void GeometricProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB);

		double e1, e2, e3, no, ni;
	};
}