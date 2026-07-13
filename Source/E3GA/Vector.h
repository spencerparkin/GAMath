// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#pragma once

#include <functional>

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

		bool IsEqualTo(const Vector& vector, double epsilon = 1e-5) const;

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

		void Reverse(const Vector& vectorA);

		double SquareMagnitude() const;

		void GetMatrixSize(int& numRows, int& numCols) const;

		void ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const;
		void ToColumnMatrix(std::function<void(int, double)> elementCallback) const;
		void FromColumnMatrix(std::function<void(int, double&)> elementCallback);

		double e1, e2, e3;
	};
}