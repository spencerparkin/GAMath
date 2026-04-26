#include "Rotor.h"

using namespace E3GA;

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
	this->e1_e2 = bivectorB.e1_e2;
	this->e2_e3 = bivectorB.e2_e3;
	this->e3_e1 = bivectorB.e3_e1;
}

void Rotor::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1_e2 = rotorB.e1_e2;
	this->e2_e3 = rotorB.e2_e3;
	this->e3_e1 = rotorB.e3_e1;
}

void Rotor::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
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
	this->_1 = rotorB._1;
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

