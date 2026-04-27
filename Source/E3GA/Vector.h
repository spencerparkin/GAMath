#pragma once

namespace E3GA
{
	class Scalar;
	class PsuedoScalar;
	class Bivector;
	class Rotor;
	class Multivector;

	class Vector
	{
	public:
		Vector();
		Vector(double e1, double e2, double e3);
		Vector(const Vector& vector);

		void Add(const Vector& vectorA, const Vector& vectorB);

		void Subtract(const Vector& vectorA, const Vector& vectorB);

		void InnerProduct(const Scalar& scalarA, const Vector& vectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void InnerProduct(const Vector& vectorA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const Bivector& bivectorB);
		void InnerProduct(const Vector& vectorA, const Rotor& rotorB);
		void InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Bivector& bivectorA, const Vector& vectorB);
		void InnerProduct(const Rotor& rotorA, const Vector& vectorB);

		void OuterProduct(const Scalar& scalarA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const Scalar& scalarB);

		void GeometricProduct(const Scalar& scalarA, const Vector& vectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB);
		void GeometricProduct(const Vector& vectorA, const Scalar& scalarB);
		void GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB);

		double e1, e2, e3;
	};
}