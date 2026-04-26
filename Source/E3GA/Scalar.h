#pragma once

namespace E3GA
{
	class Scalar
	{
	public:
		Scalar(double _1);
		Scalar(const Scalar& scalar);

		void Add(const Scalar& scalarA, const Scalar& scalarB);

		void Subract(const Scalar& scalarA, const Scalar& scalarB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);


		double _1;
	};
}