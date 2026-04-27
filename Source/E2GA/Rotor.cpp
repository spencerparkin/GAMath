#include "Rotor.h"

using namespace E2GA;

Rotor::Rotor(double _1, double e1_e2)
{
	this->_1 = _1;
	this->e1_e2 = e1_e2;
}

Rotor::Rotor(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1_e2 = 0.0;
}

Rotor::Rotor(const PsuedoScalar& psuedoscalar)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalar.e1_e2;
}

Rotor::Rotor(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1_e2 = rotor.e1_e2;
}

void Rotor::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1_e2 = 0.0;
}

void Rotor::Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = psuedoscalarB.e1_e2;
}

void Rotor::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1_e2 = rotorB.e1_e2;
}

void Rotor::Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Rotor::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 + psuedoscalarB.e1_e2;
}

void Rotor::Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1_e2 = psuedoscalarA.e1_e2 + rotorB.e1_e2;
}

void Rotor::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
}

void Rotor::Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 + psuedoscalarB.e1_e2;
}

void Rotor::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
}

void Rotor::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1_e2 = 0.0;
}

void Rotor::Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = -psuedoscalarB.e1_e2;
}

void Rotor::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1_e2 = -rotorB.e1_e2;
}

void Rotor::Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Rotor::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 - psuedoscalarB.e1_e2;
}

void Rotor::Subtract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1_e2 = psuedoscalarA.e1_e2 - rotorB.e1_e2;
}

void Rotor::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
}

void Rotor::Subtract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 - psuedoscalarB.e1_e2;
}

void Rotor::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Rotor::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1_e2 = 0.0;
}

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * rotorB.e1_e2;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Rotor::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2;
	this->e1_e2 = 0.0;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Rotor::InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Rotor::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * multivectorB._1;
}

void Rotor::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
}

void Rotor::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
}

void Rotor::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Rotor::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Rotor::OuterProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

void Rotor::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = multivectorA._1 * psuedoscalarB.e1_e2;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1_e2 = 0.0;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * rotorB.e1_e2;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Rotor::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

