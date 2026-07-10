// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "PsuedoScalar.h"
#include "Scalar.h"
#include "Vector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E2GA;

PsuedoScalar::PsuedoScalar()
{
	this->e1_e2 = 0.0;
}

PsuedoScalar::PsuedoScalar(double e1_e2)
{
	this->e1_e2 = e1_e2;
}

PsuedoScalar::PsuedoScalar(const PsuedoScalar& psuedoscalar)
{
	this->e1_e2 = psuedoscalar.e1_e2;
}

void PsuedoScalar::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 + psuedoscalarB.e1_e2;
}

void PsuedoScalar::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 - psuedoscalarB.e1_e2;
}

void PsuedoScalar::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void PsuedoScalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void PsuedoScalar::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 * multivectorB._1;
}

void PsuedoScalar::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
}

void PsuedoScalar::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void PsuedoScalar::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = multivectorA._1 * psuedoscalarB.e1_e2;
}

void PsuedoScalar::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void PsuedoScalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void PsuedoScalar::Reverse(const PsuedoScalar& psuedoscalarA)
{
	this->e1_e2 = (-1.0) * psuedoscalarA.e1_e2;
}

double PsuedoScalar::SquareMagnitude() const
{
	return (this->e1_e2 * this->e1_e2);
}

void PsuedoScalar::GetMatrixSize(int& numRows, int& numCols) const
{
	numRows = 1;
	numCols = 1;
}

void PsuedoScalar::ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const
{
	elementCallback(0, 0, (-1.0)*this->e1_e2);
}

void PsuedoScalar::ToColumnMatrix(std::function<void(int, double)> elementCallback) const
{
	elementCallback(0, this->e1_e2);
}

void PsuedoScalar::FromColumnMatrix(std::function<void(int, double&)> elementCallback)
{
	elementCallback(0, this->e1_e2);
}

