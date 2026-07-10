// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Bivector.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Vector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E3GA;

Bivector::Bivector()
{
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

Bivector::Bivector(double e1_e2, double e2_e3, double e3_e1)
{
	this->e1_e2 = e1_e2;
	this->e2_e3 = e2_e3;
	this->e3_e1 = e3_e1;
}

Bivector::Bivector(const Bivector& bivector)
{
	this->e1_e2 = bivector.e1_e2;
	this->e2_e3 = bivector.e2_e3;
	this->e3_e1 = bivector.e3_e1;
}

void Bivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + bivectorB.e3_e1;
}

void Bivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - bivectorB.e3_e1;
}

void Bivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Bivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Bivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Bivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
}

void Bivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Bivector::OuterProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
}

void Bivector::OuterProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
}

void Bivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Bivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Bivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Bivector::Reverse(const Bivector& bivectorA)
{
	this->e1_e2 = (-1.0) * bivectorA.e1_e2;
	this->e2_e3 = (-1.0) * bivectorA.e2_e3;
	this->e3_e1 = (-1.0) * bivectorA.e3_e1;
}

double Bivector::SquareMagnitude() const
{
	return (this->e1_e2 * this->e1_e2) + (this->e2_e3 * this->e2_e3) + (this->e3_e1 * this->e3_e1);
}

int Bivector::GetMatrixSize() const
{
	return 4;
}

void Bivector::ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const
{
	elementCallback(0, 0, (-1.0)*this->e1_e2);
	elementCallback(0, 1, (-1.0)*this->e2_e3);
	elementCallback(0, 2, (-1.0)*this->e3_e1);
	elementCallback(1, 2, (-1.0)*this->e2_e3);
	elementCallback(1, 1, this->e3_e1);
	elementCallback(2, 1, this->e1_e2);
	elementCallback(2, 0, (-1.0)*this->e2_e3);
	elementCallback(3, 2, this->e1_e2);
	elementCallback(3, 0, (-1.0)*this->e3_e1);
}

void Bivector::ToColumnMatrix(std::function<void(int, double)> elementCallback) const
{
	elementCallback(0, this->e1_e2);
	elementCallback(1, this->e2_e3);
	elementCallback(2, this->e3_e1);
}

void Bivector::FromColumnMatrix(std::function<void(int, double&)> elementCallback)
{
	elementCallback(0, this->e1_e2);
	elementCallback(1, this->e2_e3);
	elementCallback(2, this->e3_e1);
}

