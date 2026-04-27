#include "Multivector.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Rotor.h"

using namespace E3GA;

Multivector::Multivector()
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

Multivector::Multivector(double _1, double e1, double e2, double e3, double e1_e2, double e2_e3, double e3_e1, double e1_e2_e3)
{
	this->_1 = _1;
	this->e1 = e1;
	this->e2 = e2;
	this->e3 = e3;
	this->e1_e2 = e1_e2;
	this->e2_e3 = e2_e3;
	this->e3_e1 = e3_e1;
	this->e1_e2_e3 = e1_e2_e3;
}

Multivector::Multivector(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

Multivector::Multivector(const PsuedoScalar& psuedoscalar)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalar.e1_e2_e3;
}

Multivector::Multivector(const Vector& vector)
{
	this->_1 = 0.0;
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->e3 = vector.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

Multivector::Multivector(const Bivector& bivector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivector.e1_e2;
	this->e2_e3 = bivector.e2_e3;
	this->e3_e1 = bivector.e3_e1;
	this->e1_e2_e3 = 0.0;
}

Multivector::Multivector(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotor.e1_e2;
	this->e2_e3 = rotor.e2_e3;
	this->e3_e1 = rotor.e3_e1;
	this->e1_e2_e3 = 0.0;
}

Multivector::Multivector(const Multivector& multivector)
{
	this->_1 = multivector._1;
	this->e1 = multivector.e1;
	this->e2 = multivector.e2;
	this->e3 = multivector.e3;
	this->e1_e2 = multivector.e1_e2;
	this->e2_e3 = multivector.e2_e3;
	this->e3_e1 = multivector.e3_e1;
	this->e1_e2_e3 = multivector.e1_e2_e3;
}

void Multivector::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e2_e3 = bivectorB.e2_e3;
	this->e3_e1 = bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e2_e3 = rotorB.e2_e3;
	this->e3_e1 = rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->e1_e2 = multivectorB.e1_e2;
	this->e2_e3 = multivectorB.e2_e3;
	this->e3_e1 = multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 + psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e2_e3 = bivectorB.e2_e3;
	this->e3_e1 = bivectorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e2_e3 = rotorB.e2_e3;
	this->e3_e1 = rotorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->e1_e2 = multivectorB.e1_e2;
	this->e2_e3 = multivectorB.e2_e3;
	this->e3_e1 = multivectorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 + multivectorB.e1_e2_e3;
}

void Multivector::Add(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->e3 = vectorA.e3 + vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = bivectorB.e1_e2;
	this->e2_e3 = bivectorB.e2_e3;
	this->e3_e1 = bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = rotorB.e1_e2;
	this->e2_e3 = rotorB.e2_e3;
	this->e3_e1 = rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = vectorA.e1 + multivectorB.e1;
	this->e2 = vectorA.e2 + multivectorB.e2;
	this->e3 = vectorA.e3 + multivectorB.e3;
	this->e1_e2 = multivectorB.e1_e2;
	this->e2_e3 = multivectorB.e2_e3;
	this->e3_e1 = multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
}

void Multivector::Add(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + rotorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + rotorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->e1_e2 = bivectorA.e1_e2 + multivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + multivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
}

void Multivector::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 + bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 + rotorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 + rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->e1_e2 = rotorA.e1_e2 + multivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 + multivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 + multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 + scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 + psuedoscalarB.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 + vectorB.e1;
	this->e2 = multivectorA.e2 + vectorB.e2;
	this->e3 = multivectorA.e3 + vectorB.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 + bivectorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 + rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2 + rotorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 + rotorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 + rotorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Add(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 + multivectorB._1;
	this->e1 = multivectorA.e1 + multivectorB.e1;
	this->e2 = multivectorA.e2 + multivectorB.e2;
	this->e3 = multivectorA.e3 + multivectorB.e3;
	this->e1_e2 = multivectorA.e1_e2 + multivectorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 + multivectorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 + multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 + multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = -psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e3_e1 = -bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e2_e3 = -rotorB.e2_e3;
	this->e3_e1 = -rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 - multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e3_e1 = -multivectorB.e3_e1;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 - psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e3_e1 = -bivectorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e2_e3 = -rotorB.e2_e3;
	this->e3_e1 = -rotorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e3_e1 = -multivectorB.e3_e1;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 - multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = -psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->e3 = vectorA.e3 - vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e3_e1 = -bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->e1_e2 = -rotorB.e1_e2;
	this->e2_e3 = -rotorB.e2_e3;
	this->e3_e1 = -rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = vectorA.e1 - multivectorB.e1;
	this->e2 = vectorA.e2 - multivectorB.e2;
	this->e3 = vectorA.e3 - multivectorB.e3;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e3_e1 = -multivectorB.e3_e1;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = -psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - rotorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - rotorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->e1_e2 = bivectorA.e1_e2 - multivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - multivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - multivectorB.e3_e1;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = -psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 - bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 - rotorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 - rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 - multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->e1_e2 = rotorA.e1_e2 - multivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 - multivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 - multivectorB.e3_e1;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 - scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 - psuedoscalarB.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 - vectorB.e1;
	this->e2 = multivectorA.e2 - vectorB.e2;
	this->e3 = multivectorA.e3 - vectorB.e3;
	this->e1_e2 = multivectorA.e1_e2;
	this->e2_e3 = multivectorA.e2_e3;
	this->e3_e1 = multivectorA.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 - bivectorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 - rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->e1_e2 = multivectorA.e1_e2 - rotorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 - rotorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 - rotorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
}

void Multivector::Subtract(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 - multivectorB._1;
	this->e1 = multivectorA.e1 - multivectorB.e1;
	this->e2 = multivectorA.e2 - multivectorB.e2;
	this->e3 = multivectorA.e3 - multivectorB.e3;
	this->e1_e2 = multivectorA.e1_e2 - multivectorB.e1_e2;
	this->e2_e3 = multivectorA.e2_e3 - multivectorB.e2_e3;
	this->e3_e1 = multivectorA.e3_e1 - multivectorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 - multivectorB.e1_e2_e3;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * multivectorB.e3_e1;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e1_e2;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e1_e2;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * rotorB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e1_e2_e3;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e1_e2;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * multivectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * multivectorB.e2;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB._1;
}

void Multivector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.e3 * bivectorB.e3_e1;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * bivectorB.e3_e1 + vectorA.e2 * bivectorB.e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2 + vectorA.e3 * rotorB.e3_e1;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1 + (-1.0) * vectorA.e3 * rotorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * rotorB.e3_e1 + vectorA.e2 * rotorB.e2_e3 + vectorA.e3 * rotorB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + vectorA.e3 * multivectorB.e3;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + vectorA.e3 * multivectorB.e3_e1;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + (-1.0) * vectorA.e3 * multivectorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * multivectorB.e3_e1 + vectorA.e2 * multivectorB.e2_e3 + vectorA.e3 * multivectorB._1;
	this->e1_e2 = vectorA.e3 * multivectorB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * multivectorB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * multivectorB.e1_e2_e3;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * bivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e3_e1 * vectorB.e3;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3;
	this->e3 = (-1.0) * bivectorA.e2_e3 * vectorB.e2 + bivectorA.e3_e1 * vectorB.e1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * rotorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e3;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + bivectorA.e2_e3 * multivectorB.e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e2_e3 * multivectorB.e2 + bivectorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1;
	this->e2_e3 = bivectorA.e2_e3 * multivectorB._1;
	this->e3_e1 = bivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * rotorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * rotorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = rotorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2 + (-1.0) * rotorA.e3_e1 * vectorB.e3;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1 + rotorA.e2_e3 * vectorB.e3;
	this->e3 = rotorA._1 * vectorB.e3 + (-1.0) * rotorA.e2_e3 * vectorB.e2 + rotorA.e3_e1 * vectorB.e1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + (-1.0) * rotorA.e3_e1 * rotorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.e1_e2 * multivectorB.e2 + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e3;
	this->e2 = rotorA._1 * multivectorB.e2 + (-1.0) * rotorA.e1_e2 * multivectorB.e1 + rotorA.e2_e3 * multivectorB.e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = rotorA._1 * multivectorB.e3 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e2_e3 * multivectorB.e2 + rotorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB._1;
	this->e3_e1 = rotorA._1 * multivectorB.e3_e1 + rotorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = multivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1 = (-1.0) * multivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * multivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = multivectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = multivectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = multivectorA.e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2_e3 = multivectorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2 + multivectorA.e3 * vectorB.e3;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2 + (-1.0) * multivectorA.e3_e1 * vectorB.e3;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e1_e2 * vectorB.e1 + multivectorA.e2_e3 * vectorB.e3;
	this->e3 = multivectorA._1 * vectorB.e3 + (-1.0) * multivectorA.e2_e3 * vectorB.e2 + multivectorA.e3_e1 * vectorB.e1;
	this->e1_e2 = multivectorA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = multivectorA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = multivectorA.e1_e2_e3 * vectorB.e2;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_e3 + (-1.0) * multivectorA.e2 * bivectorB.e1_e2 + multivectorA.e3 * bivectorB.e3_e1;
	this->e2 = multivectorA.e1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e3_e1 + (-1.0) * multivectorA.e3 * bivectorB.e2_e3;
	this->e3 = (-1.0) * multivectorA.e1 * bivectorB.e3_e1 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.e2_e3;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3;
	this->e3_e1 = multivectorA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * rotorB.e3_e1;
	this->e1 = multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_e3 + (-1.0) * multivectorA.e2 * rotorB.e1_e2 + multivectorA.e3 * rotorB.e3_e1;
	this->e2 = multivectorA.e1 * rotorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e3_e1 + multivectorA.e2 * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e2_e3;
	this->e3 = (-1.0) * multivectorA.e1 * rotorB.e3_e1 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e1_e2 + multivectorA.e2 * rotorB.e2_e3 + multivectorA.e3 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = multivectorA._1 * rotorB.e3_e1 + multivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * rotorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + multivectorA.e2 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3 + multivectorA.e3 * multivectorB.e3 + (-1.0) * multivectorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3 + multivectorA.e3 * multivectorB.e3_e1 + (-1.0) * multivectorA.e3_e1 * multivectorB.e3;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e3_e1 + multivectorA.e2 * multivectorB._1 + multivectorA.e2_e3 * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = multivectorA._1 * multivectorB.e3 + (-1.0) * multivectorA.e1 * multivectorB.e3_e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2 + multivectorA.e3 * multivectorB._1 + multivectorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1_e2 * multivectorB._1 + multivectorA.e1_e2_e3 * multivectorB.e3 + multivectorA.e3 * multivectorB.e1_e2_e3;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e1 * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3 * multivectorB.e1 + multivectorA.e2_e3 * multivectorB._1;
	this->e3_e1 = multivectorA._1 * multivectorB.e3_e1 + multivectorA.e1_e2_e3 * multivectorB.e2 + multivectorA.e2 * multivectorB.e1_e2_e3 + multivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3 * multivectorB._1;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * multivectorB.e3_e1;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * rotorB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB._1;
}

void Multivector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + vectorA.e2 * bivectorB.e3_e1 + vectorA.e3 * bivectorB.e1_e2;
}

void Multivector::OuterProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1;
	this->e2 = vectorA.e2 * rotorB._1;
	this->e3 = vectorA.e3 * rotorB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = vectorA.e1 * rotorB.e2_e3 + vectorA.e2 * rotorB.e3_e1 + vectorA.e3 * rotorB.e1_e2;
}

void Multivector::OuterProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * multivectorB._1;
	this->e2 = vectorA.e2 * multivectorB._1;
	this->e3 = vectorA.e3 * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1;
	this->e2_e3 = vectorA.e2 * multivectorB.e3 + (-1.0) * vectorA.e3 * multivectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * multivectorB.e3 + vectorA.e3 * multivectorB.e1;
	this->e1_e2_e3 = vectorA.e1 * multivectorB.e2_e3 + vectorA.e2 * multivectorB.e3_e1 + vectorA.e3 * multivectorB.e1_e2;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + bivectorA.e2_e3 * vectorB.e1 + bivectorA.e3_e1 * vectorB.e2;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1;
	this->e2_e3 = bivectorA.e2_e3 * multivectorB._1;
	this->e3_e1 = bivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = bivectorA.e1_e2 * multivectorB.e3 + bivectorA.e2_e3 * multivectorB.e1 + bivectorA.e3_e1 * multivectorB.e2;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = rotorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1;
	this->e2 = rotorA._1 * vectorB.e2;
	this->e3 = rotorA._1 * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = rotorA.e1_e2 * vectorB.e3 + rotorA.e2_e3 * vectorB.e1 + rotorA.e3_e1 * vectorB.e2;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1;
	this->e1 = rotorA._1 * multivectorB.e1;
	this->e2 = rotorA._1 * multivectorB.e2;
	this->e3 = rotorA._1 * multivectorB.e3;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB._1;
	this->e3_e1 = rotorA._1 * multivectorB.e3_e1 + rotorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3 + rotorA.e1_e2 * multivectorB.e3 + rotorA.e2_e3 * multivectorB.e1 + rotorA.e3_e1 * multivectorB.e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = multivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = multivectorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = multivectorA._1 * vectorB.e1;
	this->e2 = multivectorA._1 * vectorB.e2;
	this->e3 = multivectorA._1 * vectorB.e3;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + (-1.0) * multivectorA.e2 * vectorB.e1;
	this->e2_e3 = multivectorA.e2 * vectorB.e3 + (-1.0) * multivectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * multivectorA.e1 * vectorB.e3 + multivectorA.e3 * vectorB.e1;
	this->e1_e2_e3 = multivectorA.e1_e2 * vectorB.e3 + multivectorA.e2_e3 * vectorB.e1 + multivectorA.e3_e1 * vectorB.e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3;
	this->e3_e1 = multivectorA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = multivectorA.e1 * bivectorB.e2_e3 + multivectorA.e2 * bivectorB.e3_e1 + multivectorA.e3 * bivectorB.e1_e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1;
	this->e1 = multivectorA.e1 * rotorB._1;
	this->e2 = multivectorA.e2 * rotorB._1;
	this->e3 = multivectorA.e3 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = multivectorA._1 * rotorB.e3_e1 + multivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = multivectorA.e1 * rotorB.e2_e3 + multivectorA.e1_e2_e3 * rotorB._1 + multivectorA.e2 * rotorB.e3_e1 + multivectorA.e3 * rotorB.e1_e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e2 * multivectorB._1;
	this->e3 = multivectorA._1 * multivectorB.e3 + multivectorA.e3 * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e2 * multivectorB.e3 + multivectorA.e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e3 * multivectorB.e2;
	this->e3_e1 = multivectorA._1 * multivectorB.e3_e1 + (-1.0) * multivectorA.e1 * multivectorB.e3 + multivectorA.e3 * multivectorB.e1 + multivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + multivectorA.e1 * multivectorB.e2_e3 + multivectorA.e1_e2 * multivectorB.e3 + multivectorA.e1_e2_e3 * multivectorB._1 + multivectorA.e2 * multivectorB.e3_e1 + multivectorA.e2_e3 * multivectorB.e1 + multivectorA.e3 * multivectorB.e1_e2 + multivectorA.e3_e1 * multivectorB.e2;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * multivectorB.e3_e1;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e1_e2;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * rotorB.e1_e2;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * rotorB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e1_e2_e3;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * multivectorB.e1_e2;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * multivectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * multivectorB.e2;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB._1;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.e3 * bivectorB.e3_e1;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * bivectorB.e3_e1 + vectorA.e2 * bivectorB.e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + vectorA.e2 * bivectorB.e3_e1 + vectorA.e3 * bivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2 + vectorA.e3 * rotorB.e3_e1;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1 + (-1.0) * vectorA.e3 * rotorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * rotorB.e3_e1 + vectorA.e2 * rotorB.e2_e3 + vectorA.e3 * rotorB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = vectorA.e1 * rotorB.e2_e3 + vectorA.e2 * rotorB.e3_e1 + vectorA.e3 * rotorB.e1_e2;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + vectorA.e3 * multivectorB.e3;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + vectorA.e3 * multivectorB.e3_e1;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + (-1.0) * vectorA.e3 * multivectorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * multivectorB.e3_e1 + vectorA.e2 * multivectorB.e2_e3 + vectorA.e3 * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1 + vectorA.e3 * multivectorB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * multivectorB.e1_e2_e3 + vectorA.e2 * multivectorB.e3 + (-1.0) * vectorA.e3 * multivectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * multivectorB.e3 + vectorA.e2 * multivectorB.e1_e2_e3 + vectorA.e3 * multivectorB.e1;
	this->e1_e2_e3 = vectorA.e1 * multivectorB.e2_e3 + vectorA.e2 * multivectorB.e3_e1 + vectorA.e3 * multivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * bivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e3_e1 * vectorB.e3;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3;
	this->e3 = (-1.0) * bivectorA.e2_e3 * vectorB.e2 + bivectorA.e3_e1 * vectorB.e1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + bivectorA.e2_e3 * vectorB.e1 + bivectorA.e3_e1 * vectorB.e2;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = (-1.0) * bivectorA.e2_e3 * bivectorB.e3_e1 + bivectorA.e3_e1 * bivectorB.e2_e3;
	this->e2_e3 = bivectorA.e1_e2 * bivectorB.e3_e1 + (-1.0) * bivectorA.e3_e1 * bivectorB.e1_e2;
	this->e3_e1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_e2;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * rotorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1 + (-1.0) * bivectorA.e2_e3 * rotorB.e3_e1 + bivectorA.e3_e1 * rotorB.e2_e3;
	this->e2_e3 = bivectorA.e1_e2 * rotorB.e3_e1 + bivectorA.e2_e3 * rotorB._1 + (-1.0) * bivectorA.e3_e1 * rotorB.e1_e2;
	this->e3_e1 = (-1.0) * bivectorA.e1_e2 * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_e2 + bivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e3;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + bivectorA.e2_e3 * multivectorB.e3 + (-1.0) * bivectorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e2_e3 * multivectorB.e2 + bivectorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1 + (-1.0) * bivectorA.e2_e3 * multivectorB.e3_e1 + bivectorA.e3_e1 * multivectorB.e2_e3;
	this->e2_e3 = bivectorA.e1_e2 * multivectorB.e3_e1 + bivectorA.e2_e3 * multivectorB._1 + (-1.0) * bivectorA.e3_e1 * multivectorB.e1_e2;
	this->e3_e1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e2_e3 + bivectorA.e2_e3 * multivectorB.e1_e2 + bivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = bivectorA.e1_e2 * multivectorB.e3 + bivectorA.e2_e3 * multivectorB.e1 + bivectorA.e3_e1 * multivectorB.e2;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * rotorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * rotorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = rotorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2 + (-1.0) * rotorA.e3_e1 * vectorB.e3;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1 + rotorA.e2_e3 * vectorB.e3;
	this->e3 = rotorA._1 * vectorB.e3 + (-1.0) * rotorA.e2_e3 * vectorB.e2 + rotorA.e3_e1 * vectorB.e1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
	this->e1_e2_e3 = rotorA.e1_e2 * vectorB.e3 + rotorA.e2_e3 * vectorB.e1 + rotorA.e3_e1 * vectorB.e2;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e3_e1 + rotorA.e3_e1 * bivectorB.e2_e3;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3 + rotorA.e1_e2 * bivectorB.e3_e1 + (-1.0) * rotorA.e3_e1 * bivectorB.e1_e2;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1 + (-1.0) * rotorA.e1_e2 * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_e2;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + (-1.0) * rotorA.e3_e1 * rotorB.e3_e1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1 + (-1.0) * rotorA.e2_e3 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB.e2_e3;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e1_e2 * rotorB.e3_e1 + rotorA.e2_e3 * rotorB._1 + (-1.0) * rotorA.e3_e1 * rotorB.e1_e2;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + (-1.0) * rotorA.e1_e2 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_e2 + rotorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.e1_e2 * multivectorB.e2 + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e3;
	this->e2 = rotorA._1 * multivectorB.e2 + (-1.0) * rotorA.e1_e2 * multivectorB.e1 + rotorA.e2_e3 * multivectorB.e3 + (-1.0) * rotorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = rotorA._1 * multivectorB.e3 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e2_e3 * multivectorB.e2 + rotorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1 + (-1.0) * rotorA.e2_e3 * multivectorB.e3_e1 + rotorA.e3_e1 * multivectorB.e2_e3;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.e1_e2 * multivectorB.e3_e1 + rotorA.e2_e3 * multivectorB._1 + (-1.0) * rotorA.e3_e1 * multivectorB.e1_e2;
	this->e3_e1 = rotorA._1 * multivectorB.e3_e1 + (-1.0) * rotorA.e1_e2 * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB.e1_e2 + rotorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3 + rotorA.e1_e2 * multivectorB.e3 + rotorA.e2_e3 * multivectorB.e1 + rotorA.e3_e1 * multivectorB.e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = multivectorA.e3_e1 * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1 = (-1.0) * multivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * multivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = multivectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = multivectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = multivectorA.e2 * psuedoscalarB.e1_e2_e3;
	this->e1_e2_e3 = multivectorA._1 * psuedoscalarB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2 + multivectorA.e3 * vectorB.e3;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2 + (-1.0) * multivectorA.e3_e1 * vectorB.e3;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e1_e2 * vectorB.e1 + multivectorA.e2_e3 * vectorB.e3;
	this->e3 = multivectorA._1 * vectorB.e3 + (-1.0) * multivectorA.e2_e3 * vectorB.e2 + multivectorA.e3_e1 * vectorB.e1;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + multivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * multivectorA.e2 * vectorB.e1;
	this->e2_e3 = multivectorA.e1_e2_e3 * vectorB.e1 + multivectorA.e2 * vectorB.e3 + (-1.0) * multivectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * multivectorA.e1 * vectorB.e3 + multivectorA.e1_e2_e3 * vectorB.e2 + multivectorA.e3 * vectorB.e1;
	this->e1_e2_e3 = multivectorA.e1_e2 * vectorB.e3 + multivectorA.e2_e3 * vectorB.e1 + multivectorA.e3_e1 * vectorB.e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1 = (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_e3 + (-1.0) * multivectorA.e2 * bivectorB.e1_e2 + multivectorA.e3 * bivectorB.e3_e1;
	this->e2 = multivectorA.e1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e3_e1 + (-1.0) * multivectorA.e3 * bivectorB.e2_e3;
	this->e3 = (-1.0) * multivectorA.e1 * bivectorB.e3_e1 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.e2_e3;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * bivectorB.e3_e1 + multivectorA.e3_e1 * bivectorB.e2_e3;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3 + multivectorA.e1_e2 * bivectorB.e3_e1 + (-1.0) * multivectorA.e3_e1 * bivectorB.e1_e2;
	this->e3_e1 = multivectorA._1 * bivectorB.e3_e1 + (-1.0) * multivectorA.e1_e2 * bivectorB.e2_e3 + multivectorA.e2_e3 * bivectorB.e1_e2;
	this->e1_e2_e3 = multivectorA.e1 * bivectorB.e2_e3 + multivectorA.e2 * bivectorB.e3_e1 + multivectorA.e3 * bivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * rotorB.e3_e1;
	this->e1 = multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_e3 + (-1.0) * multivectorA.e2 * rotorB.e1_e2 + multivectorA.e3 * rotorB.e3_e1;
	this->e2 = multivectorA.e1 * rotorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e3_e1 + multivectorA.e2 * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e2_e3;
	this->e3 = (-1.0) * multivectorA.e1 * rotorB.e3_e1 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e1_e2 + multivectorA.e2 * rotorB.e2_e3 + multivectorA.e3 * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1 + (-1.0) * multivectorA.e2_e3 * rotorB.e3_e1 + multivectorA.e3_e1 * rotorB.e2_e3;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e1_e2 * rotorB.e3_e1 + multivectorA.e2_e3 * rotorB._1 + (-1.0) * multivectorA.e3_e1 * rotorB.e1_e2;
	this->e3_e1 = multivectorA._1 * rotorB.e3_e1 + (-1.0) * multivectorA.e1_e2 * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB.e1_e2 + multivectorA.e3_e1 * rotorB._1;
	this->e1_e2_e3 = multivectorA.e1 * rotorB.e2_e3 + multivectorA.e1_e2_e3 * rotorB._1 + multivectorA.e2 * rotorB.e3_e1 + multivectorA.e3 * rotorB.e1_e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + multivectorA.e2 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3 + multivectorA.e3 * multivectorB.e3 + (-1.0) * multivectorA.e3_e1 * multivectorB.e3_e1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3 + multivectorA.e3 * multivectorB.e3_e1 + (-1.0) * multivectorA.e3_e1 * multivectorB.e3;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e3_e1 + multivectorA.e2 * multivectorB._1 + multivectorA.e2_e3 * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_e3 + (-1.0) * multivectorA.e3_e1 * multivectorB.e1_e2_e3;
	this->e3 = multivectorA._1 * multivectorB.e3 + (-1.0) * multivectorA.e1 * multivectorB.e3_e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2 + multivectorA.e3 * multivectorB._1 + multivectorA.e3_e1 * multivectorB.e1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + multivectorA.e1_e2_e3 * multivectorB.e3 + (-1.0) * multivectorA.e2 * multivectorB.e1 + (-1.0) * multivectorA.e2_e3 * multivectorB.e3_e1 + multivectorA.e3 * multivectorB.e1_e2_e3 + multivectorA.e3_e1 * multivectorB.e2_e3;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e1 * multivectorB.e1_e2_e3 + multivectorA.e1_e2 * multivectorB.e3_e1 + multivectorA.e1_e2_e3 * multivectorB.e1 + multivectorA.e2 * multivectorB.e3 + multivectorA.e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e3 * multivectorB.e2 + (-1.0) * multivectorA.e3_e1 * multivectorB.e1_e2;
	this->e3_e1 = multivectorA._1 * multivectorB.e3_e1 + (-1.0) * multivectorA.e1 * multivectorB.e3 + (-1.0) * multivectorA.e1_e2 * multivectorB.e2_e3 + multivectorA.e1_e2_e3 * multivectorB.e2 + multivectorA.e2 * multivectorB.e1_e2_e3 + multivectorA.e2_e3 * multivectorB.e1_e2 + multivectorA.e3 * multivectorB.e1 + multivectorA.e3_e1 * multivectorB._1;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + multivectorA.e1 * multivectorB.e2_e3 + multivectorA.e1_e2 * multivectorB.e3 + multivectorA.e1_e2_e3 * multivectorB._1 + multivectorA.e2 * multivectorB.e3_e1 + multivectorA.e2_e3 * multivectorB.e1 + multivectorA.e3 * multivectorB.e1_e2 + multivectorA.e3_e1 * multivectorB.e2;
}

