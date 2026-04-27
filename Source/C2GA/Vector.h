#pragma once

namespace C2GA
{
	class Scalar;
	class Bivector;
	class Trivector;
	class PsuedoScalar;
	class Multivector;

	class Vector
	{
	public:
		Vector();
		Vector(double e1, double e2, double no, double ni);
		Vector(const Vector& vector);

		void Add(const Vector& vectorA, const Vector& vectorB);

		void Subtract(const Vector& vectorA, const Vector& vectorB);

		void InnerProduct(const Scalar& scalarA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const Bivector& bivectorB);
		void InnerProduct(const Bivector& bivectorA, const Vector& vectorB);
		void InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB);
		void InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB);
		void InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB);

		void OuterProduct(const Scalar& scalarA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const Scalar& scalarB);
		void GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB);

		double e1, e2, no, ni;
	};
}