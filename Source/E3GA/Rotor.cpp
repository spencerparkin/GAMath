#include "Rotor.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Multivector.h"

using namespace E3GA;

Rotor::Rotor()
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

Rotor::Rotor(double _1, double e1_e2, double e2_e3, double e3_e1)
{
	this->_1 = _1;
	this->e1_e2 = e1_e2;
	this->e2_e3 = e2_e3;
	this->e3_e1 = e3_e1;
}

Rotor::Rotor(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

Rotor::Rotor(const Bivector& bivector)
{
	this->_1 = 0.0;
	this->e1_e2 = bivector.e1_e2;
	this->e2_e3 = bivector.e2_e3;
	this->e3_e1 = bivector.e3_e1;
}

Rotor::Rotor(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1_e2 = rotor.e1_e2;
	this->e2_e3 = rotor.e2_e3;
	this->e3_e1 = rotor.e3_e1;
}

void Rotor::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::Add(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = bivectorB.e1_e2;
	this->e2_e3 = bivectorB.e2_e3;
	this->e3_e1 = bivectorB.e3_e1;
}

void Rotor::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1_e2 = rotorB.e1_e2;
	this->e2_e3 = rotorB.e2_e3;
	this->e3_e1 = rotorB.e3_e1;
}

void Rotor::Add(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
}

void Rotor::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + bivectorB.e3_e1;
}

void Rotor::Add(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1_e2 = bivectorA.e1_e2 + rotorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + rotorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + rotorB.e3_e1;
}

void Rotor::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
}

void Rotor::Add(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 + bivectorB.e3_e1;
}

void Rotor::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 + rotorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 + rotorB.e3_e1;
}

void Rotor::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::Subtract(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e3_e1 = -bivectorB.e3_e1;
}

void Rotor::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1_e2 = -rotorB.e1_e2;
	this->e2_e3 = -rotorB.e2_e3;
	this->e3_e1 = -rotorB.e3_e1;
}

void Rotor::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1_e2 = bivectorA.e1_e2;
	this->e2_e3 = bivectorA.e2_e3;
	this->e3_e1 = bivectorA.e3_e1;
}

void Rotor::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - bivectorB.e3_e1;
}

void Rotor::Subtract(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1_e2 = bivectorA.e1_e2 - rotorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - rotorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - rotorB.e3_e1;
}

void Rotor::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
	this->e2_e3 = rotorA.e2_e3;
	this->e3_e1 = rotorA.e3_e1;
}

void Rotor::Subtract(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 - bivectorB.e3_e1;
}

void Rotor::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
	this->e2_e3 = rotorA.e2_e3 - rotorB.e2_e3;
	this->e3_e1 = rotorA.e3_e1 - rotorB.e3_e1;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
}

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Rotor::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Rotor::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Rotor::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::InnerProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * rotorB.e3_e1;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * bivectorB.e3_e1;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + (-1.0) * rotorA.e3_e1 * rotorB.e3_e1;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB._1;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
}

void Rotor::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Rotor::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::OuterProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
}

void Rotor::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
}

void Rotor::OuterProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
}

void Rotor::OuterProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB._1;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e3_e1 = scalarA._1 * rotorB.e3_e1;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e1_e2 = 0.0;
	this->e2_e3 = 0.0;
	this->e3_e1 = 0.0;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Rotor::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Rotor::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
}

void Rotor::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Rotor::GeometricProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * bivectorB.e3_e1;
	this->e1_e2 = (-1.0) * bivectorA.e2_e3 * bivectorB.e3_e1 + bivectorA.e3_e1 * bivectorB.e2_e3;
	this->e2_e3 = bivectorA.e1_e2 * bivectorB.e3_e1 + (-1.0) * bivectorA.e3_e1 * bivectorB.e1_e2;
	this->e3_e1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_e2;
}

void Rotor::GeometricProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * rotorB.e3_e1;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1 + (-1.0) * bivectorA.e2_e3 * rotorB.e3_e1 + bivectorA.e3_e1 * rotorB.e2_e3;
	this->e2_e3 = bivectorA.e1_e2 * rotorB.e3_e1 + bivectorA.e2_e3 * rotorB._1 + (-1.0) * bivectorA.e3_e1 * rotorB.e1_e2;
	this->e3_e1 = (-1.0) * bivectorA.e1_e2 * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_e2 + bivectorA.e3_e1 * rotorB._1;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e3_e1 = rotorA.e3_e1 * scalarB._1;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * rotorA.e3_e1 * bivectorB.e3_e1;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2 + (-1.0) * rotorA.e2_e3 * bivectorB.e3_e1 + rotorA.e3_e1 * bivectorB.e2_e3;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3 + rotorA.e1_e2 * bivectorB.e3_e1 + (-1.0) * rotorA.e3_e1 * bivectorB.e1_e2;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1 + (-1.0) * rotorA.e1_e2 * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_e2;
}

void Rotor::GeometricProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + (-1.0) * rotorA.e3_e1 * rotorB.e3_e1;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1 + (-1.0) * rotorA.e2_e3 * rotorB.e3_e1 + rotorA.e3_e1 * rotorB.e2_e3;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e1_e2 * rotorB.e3_e1 + rotorA.e2_e3 * rotorB._1 + (-1.0) * rotorA.e3_e1 * rotorB.e1_e2;
	this->e3_e1 = rotorA._1 * rotorB.e3_e1 + (-1.0) * rotorA.e1_e2 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_e2 + rotorA.e3_e1 * rotorB._1;
}

