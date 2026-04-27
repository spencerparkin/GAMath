#include "Multivector.h"

using namespace E2GA;

Multivector::Multivector(double _1, double e1, double e2, double e1_e2)
{
	this->_1 = _1;
	this->e1 = e1;
	this->e2 = e2;
	this->e1_e2 = e1_e2;
}

Multivector::Multivector(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

Multivector::Multivector(const PsuedoScalar& psuedoscalar)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalar.e1_e2;
}

Multivector::Multivector(const Vector& vector)
{
	this->_1 = 0.0;
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->e1_e2 = 0.0;
}

Multivector::Multivector(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotor.e1_e2;
}

Multivector::Multivector(const Multivector& multivector)
{
	this->_1 = multivector._1;
	this->e1 = multivector.e1;
	this->e2 = multivector.e2;
	this->e1_e2 = multivector.e1_e2;
}

void Multivector::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarB.e1_e2;
}

void Multivector::Add(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorB.e1_e2;
}

void Multivector::Add(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = multivectorB.e1_e2;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 + psuedoscalarB.e1_e2;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 + rotorB.e1_e2;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = psuedoscalarA.e1_e2 + multivectorB.e1_e2;
}

void Multivector::Add(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = psuedoscalarB.e1_e2;
}

void Multivector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = rotorB.e1_e2;
}

void Multivector::Add(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = vectorA.e1 + multivectorB.e1;
	this->e2 = vectorA.e2 + multivectorB.e2;
	this->e1_e2 = multivectorB.e1_e2;
}

void Multivector::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
}

void Multivector::Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 + psuedoscalarB.e1_e2;
}

void Multivector::Add(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = rotorA.e1_e2;
}

void Multivector::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
}

void Multivector::Add(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = rotorA.e1_e2 + multivectorB.e1_e2;
}

void Multivector::Add(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 + scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2;
}

void Multivector::Add(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2 + psuedoscalarB.e1_e2;
}

void Multivector::Add(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 + vectorB.e1;
	this->e2 = multivectorA.e2 + vectorB.e2;
	this->e1_e2 = multivectorA.e1_e2;
}

void Multivector::Add(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 + rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2 + rotorB.e1_e2;
}

void Multivector::Add(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 + multivectorB._1;
	this->e1 = multivectorA.e1 + multivectorB.e1;
	this->e2 = multivectorA.e2 + multivectorB.e2;
	this->e1_e2 = multivectorA.e1_e2 + multivectorB.e1_e2;
}

void Multivector::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarB.e1_e2;
}

void Multivector::Subtract(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorB.e1_e2;
}

void Multivector::Subtract(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 - multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = multivectorB.e1_e2;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 - psuedoscalarB.e1_e2;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = psuedoscalarA.e1_e2;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 - rotorB.e1_e2;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = psuedoscalarA.e1_e2 - multivectorB.e1_e2;
}

void Multivector::Subtract(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = psuedoscalarB.e1_e2;
}

void Multivector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e1_e2 = rotorB.e1_e2;
}

void Multivector::Subtract(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = vectorA.e1 - multivectorB.e1;
	this->e2 = vectorA.e2 - multivectorB.e2;
	this->e1_e2 = multivectorB.e1_e2;
}

void Multivector::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
}

void Multivector::Subtract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 - psuedoscalarB.e1_e2;
}

void Multivector::Subtract(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e1_e2 = rotorA.e1_e2;
}

void Multivector::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
}

void Multivector::Subtract(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 - multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e1_e2 = rotorA.e1_e2 - multivectorB.e1_e2;
}

void Multivector::Subtract(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 - scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2;
}

void Multivector::Subtract(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2 - psuedoscalarB.e1_e2;
}

void Multivector::Subtract(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 - vectorB.e1;
	this->e2 = multivectorA.e2 - vectorB.e2;
	this->e1_e2 = multivectorA.e1_e2;
}

void Multivector::Subtract(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 - rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e1_e2 = multivectorA.e1_e2 - rotorB.e1_e2;
}

void Multivector::Subtract(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 - multivectorB._1;
	this->e1 = multivectorA.e1 - multivectorB.e1;
	this->e2 = multivectorA.e2 - multivectorB.e2;
	this->e1_e2 = multivectorA.e1_e2 - multivectorB.e1_e2;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = psuedoscalarA.e1_e2 * vectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * vectorB.e1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * rotorB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * multivectorB.e1_e2;
	this->e1 = psuedoscalarA.e1_e2 * multivectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * multivectorB.e1;
	this->e1_e2 = psuedoscalarA.e1_e2 * multivectorB._1;
}

void Multivector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = vectorA.e1 * psuedoscalarB.e1_e2;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Multivector::InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.e1_e2 * multivectorB.e2;
	this->e2 = rotorA._1 * multivectorB.e2 + (-1.0) * rotorA.e1_e2 * multivectorB.e1;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = multivectorA.e1 * psuedoscalarB.e1_e2;
	this->e1_e2 = multivectorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->e1_e2 = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2;
	this->e1 = multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e2 * rotorB.e1_e2;
	this->e2 = multivectorA.e1 * rotorB.e1_e2 + multivectorA.e2 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.e2;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + multivectorA.e2 * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1_e2 * multivectorB._1;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * multivectorB._1;
}

void Multivector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
}

void Multivector::OuterProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1;
	this->e2 = vectorA.e2 * rotorB._1;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * multivectorB._1;
	this->e2 = vectorA.e2 * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Multivector::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1;
	this->e2 = rotorA._1 * vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1;
	this->e1 = rotorA._1 * multivectorB.e1;
	this->e2 = rotorA._1 * multivectorB.e2;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = multivectorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = multivectorA._1 * vectorB.e1;
	this->e2 = multivectorA._1 * vectorB.e2;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + (-1.0) * multivectorA.e2 * vectorB.e1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1;
	this->e1 = multivectorA.e1 * rotorB._1;
	this->e2 = multivectorA.e2 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e2 * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * psuedoscalarB.e1_e2;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * scalarB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = psuedoscalarA.e1_e2 * vectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * vectorB.e1;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * rotorB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2 * rotorB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2 * multivectorB.e1_e2;
	this->e1 = psuedoscalarA.e1_e2 * multivectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * multivectorB.e1;
	this->e1_e2 = psuedoscalarA.e1_e2 * multivectorB._1;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = vectorA.e1 * psuedoscalarB.e1_e2;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1;
	this->e1_e2 = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.e1_e2 * multivectorB.e2;
	this->e2 = rotorA._1 * multivectorB.e2 + (-1.0) * rotorA.e1_e2 * multivectorB.e1;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2;
	this->e1 = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = multivectorA.e1 * psuedoscalarB.e1_e2;
	this->e1_e2 = multivectorA._1 * psuedoscalarB.e1_e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + (-1.0) * multivectorA.e2 * vectorB.e1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2;
	this->e1 = multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e2 * rotorB.e1_e2;
	this->e2 = multivectorA.e1 * rotorB.e1_e2 + multivectorA.e2 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.e2;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + multivectorA.e2 * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1;
}

