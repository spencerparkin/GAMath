#pragma once

namespace C3GA
{
	class Vector;
	class Bivector;
	class Trivector;
	class Quadvector;
	class PsuedoScalar;
	class Multivector;

	class Scalar
	{
	public:
		Scalar(double _1);
		Scalar(const Scalar& scalar);

		void Add(const Scalar& scalarA, const Scalar& scalarB);

		void Subtract(const Scalar& scalarA, const Scalar& scalarB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB);
		void InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB);
		void InnerProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Bivector& bivectorA, const Quadvector& quadvectorB);
		void OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB);
		void OuterProduct(const Trivector& trivectorA, const Quadvector& quadvectorB);
		void OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Quadvector& quadvectorA, const Bivector& bivectorB);
		void OuterProduct(const Quadvector& quadvectorA, const Trivector& trivectorB);
		void OuterProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB);
		void OuterProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);

		double _1;
	};
}