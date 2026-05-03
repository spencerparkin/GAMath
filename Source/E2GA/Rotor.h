// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

namespace E2GA
{
	class Scalar;
	class PsuedoScalar;
	class Vector;
	class Multivector;

	class Rotor
	{
	public:
		Rotor();
		Rotor(double _1, double e1_e2);
		Rotor(const Scalar& scalar);
		Rotor(const PsuedoScalar& psuedoscalar);
		Rotor(const Rotor& rotor);

		void Add(const Scalar& scalarA, const Scalar& scalarB);
		void Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void Add(const Scalar& scalarA, const Rotor& rotorB);
		void Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void Add(const Rotor& rotorA, const Scalar& scalarB);
		void Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void Add(const Rotor& rotorA, const Rotor& rotorB);

		void Subtract(const Scalar& scalarA, const Scalar& scalarB);
		void Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void Subtract(const Scalar& scalarA, const Rotor& rotorB);
		void Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void Subtract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void Subtract(const Rotor& rotorA, const Scalar& scalarB);
		void Subtract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void Subtract(const Rotor& rotorA, const Rotor& rotorB);

		void InnerProduct(const Scalar& scalarA, const Scalar& scalarB);
		void InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Scalar& scalarA, const Rotor& rotorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void InnerProduct(const Vector& vectorA, const Vector& vectorB);
		void InnerProduct(const Rotor& rotorA, const Scalar& scalarB);
		void InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Rotor& rotorA, const Rotor& rotorB);

		void OuterProduct(const Scalar& scalarA, const Scalar& scalarB);
		void OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Scalar& scalarA, const Rotor& rotorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB);
		void OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Vector& vectorA, const Vector& vectorB);
		void OuterProduct(const Rotor& rotorA, const Scalar& scalarB);
		void OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void OuterProduct(const Rotor& rotorA, const Rotor& rotorB);
		void OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB);

		void GeometricProduct(const Scalar& scalarA, const Scalar& scalarB);
		void GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Scalar& scalarA, const Rotor& rotorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB);
		void GeometricProduct(const Vector& vectorA, const Vector& vectorB);
		void GeometricProduct(const Rotor& rotorA, const Scalar& scalarB);
		void GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Rotor& rotorA, const Rotor& rotorB);

		double _1, e1_e2;
	};
}