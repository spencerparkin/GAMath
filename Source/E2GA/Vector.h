// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

#include <functional>

namespace E2GA
{
	class Scalar;
	class PsuedoScalar;
	class Rotor;
	class Multivector;

	class Vector
	{
	public:
		Vector();
		Vector(double e1, double e2);
		Vector(const Vector& vector);

		void Add(const Vector& vectorA, const Vector& vectorB);

		void Subtract(const Vector& vectorA, const Vector& vectorB);

		void InnerProduct(const Scalar& scalarA, const Vector& vectorB);
		void InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void InnerProduct(const Vector& vectorA, const Scalar& scalarB);
		void InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void InnerProduct(const Vector& vectorA, const Rotor& rotorB);
		void InnerProduct(const Rotor& rotorA, const Vector& vectorB);

		void OuterProduct(const Scalar& scalarA, const Vector& vectorB);
		void OuterProduct(const Vector& vectorA, const Scalar& scalarB);
		void OuterProduct(const Vector& vectorA, const Rotor& rotorB);
		void OuterProduct(const Rotor& rotorA, const Vector& vectorB);

		void GeometricProduct(const Scalar& scalarA, const Vector& vectorB);
		void GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB);
		void GeometricProduct(const Vector& vectorA, const Scalar& scalarB);
		void GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB);
		void GeometricProduct(const Vector& vectorA, const Rotor& rotorB);
		void GeometricProduct(const Rotor& rotorA, const Vector& vectorB);

		void Reverse(const Vector& vectorA);

		double SquareMagnitude() const;

		int GetMatrixSize() const;

		void ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const;
		void ToColumnMatrix(std::function<void(int, double)> elementCallback) const;
		void FromColumnMatrix(std::function<void(int, double&)> elementCallback);

		double e1, e2;
	};
}