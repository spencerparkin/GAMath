// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Multivector.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Rotor.h"

using namespace C3GA;

Multivector::Multivector()
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(double _1, double e1, double e2, double e3, double no, double ni, double e1_e2, double e1_e3, double e1_no, double e1_ni, double e2_e3, double e2_no, double e2_ni, double e3_no, double e3_ni, double no_ni, double e1_e2_e3, double e1_e2_no, double e1_e2_ni, double e1_e3_no, double e1_e3_ni, double e1_no_ni, double e2_e3_no, double e2_e3_ni, double e2_no_ni, double e3_no_ni, double e1_e2_e3_no, double e1_e2_e3_ni, double e1_e2_no_ni, double e1_e3_no_ni, double e2_e3_no_ni, double e1_e2_e3_no_ni)
{
	this->_1 = _1;
	this->e1 = e1;
	this->e2 = e2;
	this->e3 = e3;
	this->no = no;
	this->ni = ni;
	this->e1_e2 = e1_e2;
	this->e1_e3 = e1_e3;
	this->e1_no = e1_no;
	this->e1_ni = e1_ni;
	this->e2_e3 = e2_e3;
	this->e2_no = e2_no;
	this->e2_ni = e2_ni;
	this->e3_no = e3_no;
	this->e3_ni = e3_ni;
	this->no_ni = no_ni;
	this->e1_e2_e3 = e1_e2_e3;
	this->e1_e2_no = e1_e2_no;
	this->e1_e2_ni = e1_e2_ni;
	this->e1_e3_no = e1_e3_no;
	this->e1_e3_ni = e1_e3_ni;
	this->e1_no_ni = e1_no_ni;
	this->e2_e3_no = e2_e3_no;
	this->e2_e3_ni = e2_e3_ni;
	this->e2_no_ni = e2_no_ni;
	this->e3_no_ni = e3_no_ni;
	this->e1_e2_e3_no = e1_e2_e3_no;
	this->e1_e2_e3_ni = e1_e2_e3_ni;
	this->e1_e2_no_ni = e1_e2_no_ni;
	this->e1_e3_no_ni = e1_e3_no_ni;
	this->e2_e3_no_ni = e2_e3_no_ni;
	this->e1_e2_e3_no_ni = e1_e2_e3_no_ni;
}

Multivector::Multivector(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(const Vector& vector)
{
	this->_1 = 0.0;
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->e3 = vector.e3;
	this->no = vector.no;
	this->ni = vector.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(const Bivector& bivector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivector.e1_e2;
	this->e1_e3 = bivector.e1_e3;
	this->e1_no = bivector.e1_no;
	this->e1_ni = bivector.e1_ni;
	this->e2_e3 = bivector.e2_e3;
	this->e2_no = bivector.e2_no;
	this->e2_ni = bivector.e2_ni;
	this->e3_no = bivector.e3_no;
	this->e3_ni = bivector.e3_ni;
	this->no_ni = bivector.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(const Trivector& trivector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivector.e1_e2_e3;
	this->e1_e2_no = trivector.e1_e2_no;
	this->e1_e2_ni = trivector.e1_e2_ni;
	this->e1_e3_no = trivector.e1_e3_no;
	this->e1_e3_ni = trivector.e1_e3_ni;
	this->e1_no_ni = trivector.e1_no_ni;
	this->e2_e3_no = trivector.e2_e3_no;
	this->e2_e3_ni = trivector.e2_e3_ni;
	this->e2_no_ni = trivector.e2_no_ni;
	this->e3_no_ni = trivector.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(const Quadvector& quadvector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvector.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvector.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvector.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvector.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvector.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

Multivector::Multivector(const PsuedoScalar& psuedoscalar)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalar.e1_e2_e3_no_ni;
}

Multivector::Multivector(const Multivector& multivector)
{
	this->_1 = multivector._1;
	this->e1 = multivector.e1;
	this->e2 = multivector.e2;
	this->e3 = multivector.e3;
	this->no = multivector.no;
	this->ni = multivector.ni;
	this->e1_e2 = multivector.e1_e2;
	this->e1_e3 = multivector.e1_e3;
	this->e1_no = multivector.e1_no;
	this->e1_ni = multivector.e1_ni;
	this->e2_e3 = multivector.e2_e3;
	this->e2_no = multivector.e2_no;
	this->e2_ni = multivector.e2_ni;
	this->e3_no = multivector.e3_no;
	this->e3_ni = multivector.e3_ni;
	this->no_ni = multivector.no_ni;
	this->e1_e2_e3 = multivector.e1_e2_e3;
	this->e1_e2_no = multivector.e1_e2_no;
	this->e1_e2_ni = multivector.e1_e2_ni;
	this->e1_e3_no = multivector.e1_e3_no;
	this->e1_e3_ni = multivector.e1_e3_ni;
	this->e1_no_ni = multivector.e1_no_ni;
	this->e2_e3_no = multivector.e2_e3_no;
	this->e2_e3_ni = multivector.e2_e3_ni;
	this->e2_no_ni = multivector.e2_no_ni;
	this->e3_no_ni = multivector.e3_no_ni;
	this->e1_e2_e3_no = multivector.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivector.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivector.e1_e2_no_ni;
	this->e1_e3_no_ni = multivector.e1_e3_no_ni;
	this->e2_e3_no_ni = multivector.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivector.e1_e2_e3_no_ni;
}

Multivector::Multivector(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotor.e1_e2;
	this->e1_e3 = rotor.e1_e3;
	this->e1_no = rotor.e1_no;
	this->e1_ni = rotor.e1_ni;
	this->e2_e3 = rotor.e2_e3;
	this->e2_no = rotor.e2_no;
	this->e2_ni = rotor.e2_ni;
	this->e3_no = rotor.e3_no;
	this->e3_ni = rotor.e3_ni;
	this->no_ni = rotor.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_e3 = multivectorB.e1_e3;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_e3 = multivectorB.e2_e3;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->e3_no = multivectorB.e3_no;
	this->e3_ni = multivectorB.e3_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->e3 = vectorA.e3 + vectorB.e3;
	this->no = vectorA.no + vectorB.no;
	this->ni = vectorA.ni + vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = vectorA.e1 + multivectorB.e1;
	this->e2 = vectorA.e2 + multivectorB.e2;
	this->e3 = vectorA.e3 + multivectorB.e3;
	this->no = vectorA.no + multivectorB.no;
	this->ni = vectorA.ni + multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_e3 = multivectorB.e1_e3;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_e3 = multivectorB.e2_e3;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->e3_no = multivectorB.e3_no;
	this->e3_ni = multivectorB.e3_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 + bivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no + bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + bivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no + bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + bivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no + bivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni + bivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni + bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 + multivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 + multivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no + multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + multivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 + multivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no + multivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + multivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no + multivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni + multivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni + multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + rotorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 + rotorB.e1_e3;
	this->e1_no = bivectorA.e1_no + rotorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + rotorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 + rotorB.e2_e3;
	this->e2_no = bivectorA.e2_no + rotorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + rotorB.e2_ni;
	this->e3_no = bivectorA.e3_no + rotorB.e3_no;
	this->e3_ni = bivectorA.e3_ni + rotorB.e3_ni;
	this->no_ni = bivectorA.no_ni + rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 + trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no + trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni + trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no + trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni + trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni + trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_e3 = multivectorB.e1_e3;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_e3 = multivectorB.e2_e3;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->e3_no = multivectorB.e3_no;
	this->e3_ni = multivectorB.e3_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 + multivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no + multivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + multivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no + multivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni + multivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + multivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no + multivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni + multivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + multivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni + multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Trivector& trivectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no + quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni + quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni + quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni + quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni + quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Quadvector& quadvectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_e3 = multivectorB.e1_e3;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_e3 = multivectorB.e2_e3;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->e3_no = multivectorB.e3_no;
	this->e3_ni = multivectorB.e3_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no + multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni + multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni + multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni + multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni + multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Quadvector& quadvectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni + psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_e3 = multivectorB.e1_e3;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_e3 = multivectorB.e2_e3;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->e3_no = multivectorB.e3_no;
	this->e3_ni = multivectorB.e3_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni + multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 + scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 + vectorB.e1;
	this->e2 = multivectorA.e2 + vectorB.e2;
	this->e3 = multivectorA.e3 + vectorB.e3;
	this->no = multivectorA.no + vectorB.no;
	this->ni = multivectorA.ni + vectorB.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 + bivectorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 + bivectorB.e1_e3;
	this->e1_no = multivectorA.e1_no + bivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni + bivectorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 + bivectorB.e2_e3;
	this->e2_no = multivectorA.e2_no + bivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni + bivectorB.e2_ni;
	this->e3_no = multivectorA.e3_no + bivectorB.e3_no;
	this->e3_ni = multivectorA.e3_ni + bivectorB.e3_ni;
	this->no_ni = multivectorA.no_ni + bivectorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 + trivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no + trivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni + trivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no + trivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni + trivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni + trivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni + trivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Quadvector& quadvectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no + quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni + quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni + quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni + quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni + quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni + psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 + multivectorB._1;
	this->e1 = multivectorA.e1 + multivectorB.e1;
	this->e2 = multivectorA.e2 + multivectorB.e2;
	this->e3 = multivectorA.e3 + multivectorB.e3;
	this->no = multivectorA.no + multivectorB.no;
	this->ni = multivectorA.ni + multivectorB.ni;
	this->e1_e2 = multivectorA.e1_e2 + multivectorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 + multivectorB.e1_e3;
	this->e1_no = multivectorA.e1_no + multivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni + multivectorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 + multivectorB.e2_e3;
	this->e2_no = multivectorA.e2_no + multivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni + multivectorB.e2_ni;
	this->e3_no = multivectorA.e3_no + multivectorB.e3_no;
	this->e3_ni = multivectorA.e3_ni + multivectorB.e3_ni;
	this->no_ni = multivectorA.no_ni + multivectorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 + multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no + multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni + multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no + multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni + multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni + multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no + multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni + multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni + multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni + multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no + multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni + multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni + multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni + multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni + multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni + multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 + rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 + rotorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 + rotorB.e1_e3;
	this->e1_no = multivectorA.e1_no + rotorB.e1_no;
	this->e1_ni = multivectorA.e1_ni + rotorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 + rotorB.e2_e3;
	this->e2_no = multivectorA.e2_no + rotorB.e2_no;
	this->e2_ni = multivectorA.e2_ni + rotorB.e2_ni;
	this->e3_no = multivectorA.e3_no + rotorB.e3_no;
	this->e3_ni = multivectorA.e3_ni + rotorB.e3_ni;
	this->no_ni = multivectorA.no_ni + rotorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->e3 = vectorB.e3;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 + bivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 + bivectorB.e1_e3;
	this->e1_no = rotorA.e1_no + bivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni + bivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 + bivectorB.e2_e3;
	this->e2_no = rotorA.e2_no + bivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni + bivectorB.e2_ni;
	this->e3_no = rotorA.e3_no + bivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni + bivectorB.e3_ni;
	this->no_ni = rotorA.no_ni + bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Trivector& trivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const Quadvector& quadvectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Add(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->e3 = multivectorB.e3;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = rotorA.e1_e2 + multivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 + multivectorB.e1_e3;
	this->e1_no = rotorA.e1_no + multivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni + multivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 + multivectorB.e2_e3;
	this->e2_no = rotorA.e2_no + multivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni + multivectorB.e2_ni;
	this->e3_no = rotorA.e3_no + multivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni + multivectorB.e3_ni;
	this->no_ni = rotorA.no_ni + multivectorB.no_ni;
	this->e1_e2_e3 = multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 + rotorB.e1_e3;
	this->e1_no = rotorA.e1_no + rotorB.e1_no;
	this->e1_ni = rotorA.e1_ni + rotorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 + rotorB.e2_e3;
	this->e2_no = rotorA.e2_no + rotorB.e2_no;
	this->e2_ni = rotorA.e2_ni + rotorB.e2_ni;
	this->e3_no = rotorA.e3_no + rotorB.e3_no;
	this->e3_ni = rotorA.e3_ni + rotorB.e3_ni;
	this->no_ni = rotorA.no_ni + rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 - multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_e3 = -multivectorB.e1_e3;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->e3_no = -multivectorB.e3_no;
	this->e3_ni = -multivectorB.e3_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->e3 = vectorA.e3 - vectorB.e3;
	this->no = vectorA.no - vectorB.no;
	this->ni = vectorA.ni - vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = vectorA.e1 - multivectorB.e1;
	this->e2 = vectorA.e2 - multivectorB.e2;
	this->e3 = vectorA.e3 - multivectorB.e3;
	this->no = vectorA.no - multivectorB.no;
	this->ni = vectorA.ni - multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_e3 = -multivectorB.e1_e3;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->e3_no = -multivectorB.e3_no;
	this->e3_ni = -multivectorB.e3_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->e3 = vectorA.e3;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 - bivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no - bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - bivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no - bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - bivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no - bivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni - bivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni - bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 - multivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 - multivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no - multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - multivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 - multivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no - multivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - multivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no - multivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni - multivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni - multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - rotorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 - rotorB.e1_e3;
	this->e1_no = bivectorA.e1_no - rotorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - rotorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 - rotorB.e2_e3;
	this->e2_no = bivectorA.e2_no - rotorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - rotorB.e2_ni;
	this->e3_no = bivectorA.e3_no - rotorB.e3_no;
	this->e3_ni = bivectorA.e3_ni - rotorB.e3_ni;
	this->no_ni = bivectorA.no_ni - rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 - trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no - trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni - trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no - trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni - trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni - trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_e3 = -multivectorB.e1_e3;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->e3_no = -multivectorB.e3_no;
	this->e3_ni = -multivectorB.e3_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 - multivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no - multivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - multivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no - multivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni - multivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - multivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no - multivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni - multivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - multivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni - multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Trivector& trivectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
	this->e1_e2_e3 = trivectorA.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no - quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni - quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni - quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni - quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni - quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_e3 = -multivectorB.e1_e3;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->e3_no = -multivectorB.e3_no;
	this->e3_ni = -multivectorB.e3_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no - multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni - multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni - multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni - multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni - multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Quadvector& quadvectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni - psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_e3 = -multivectorB.e1_e3;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_e3 = -multivectorB.e2_e3;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->e3_no = -multivectorB.e3_no;
	this->e3_ni = -multivectorB.e3_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni - multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 - scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 - vectorB.e1;
	this->e2 = multivectorA.e2 - vectorB.e2;
	this->e3 = multivectorA.e3 - vectorB.e3;
	this->no = multivectorA.no - vectorB.no;
	this->ni = multivectorA.ni - vectorB.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 - bivectorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 - bivectorB.e1_e3;
	this->e1_no = multivectorA.e1_no - bivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni - bivectorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 - bivectorB.e2_e3;
	this->e2_no = multivectorA.e2_no - bivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni - bivectorB.e2_ni;
	this->e3_no = multivectorA.e3_no - bivectorB.e3_no;
	this->e3_ni = multivectorA.e3_ni - bivectorB.e3_ni;
	this->no_ni = multivectorA.no_ni - bivectorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 - trivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no - trivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni - trivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no - trivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni - trivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni - trivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni - trivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Quadvector& quadvectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no - quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni - quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni - quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni - quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni - quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_e3 = multivectorA.e1_e3;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_e3 = multivectorA.e2_e3;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->e3_no = multivectorA.e3_no;
	this->e3_ni = multivectorA.e3_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni - psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 - multivectorB._1;
	this->e1 = multivectorA.e1 - multivectorB.e1;
	this->e2 = multivectorA.e2 - multivectorB.e2;
	this->e3 = multivectorA.e3 - multivectorB.e3;
	this->no = multivectorA.no - multivectorB.no;
	this->ni = multivectorA.ni - multivectorB.ni;
	this->e1_e2 = multivectorA.e1_e2 - multivectorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 - multivectorB.e1_e3;
	this->e1_no = multivectorA.e1_no - multivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni - multivectorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 - multivectorB.e2_e3;
	this->e2_no = multivectorA.e2_no - multivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni - multivectorB.e2_ni;
	this->e3_no = multivectorA.e3_no - multivectorB.e3_no;
	this->e3_ni = multivectorA.e3_ni - multivectorB.e3_ni;
	this->no_ni = multivectorA.no_ni - multivectorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 - multivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no - multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni - multivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no - multivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni - multivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni - multivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no - multivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni - multivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni - multivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni - multivectorB.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no - multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni - multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni - multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni - multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni - multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni - multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 - rotorB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 - rotorB.e1_e2;
	this->e1_e3 = multivectorA.e1_e3 - rotorB.e1_e3;
	this->e1_no = multivectorA.e1_no - rotorB.e1_no;
	this->e1_ni = multivectorA.e1_ni - rotorB.e1_ni;
	this->e2_e3 = multivectorA.e2_e3 - rotorB.e2_e3;
	this->e2_no = multivectorA.e2_no - rotorB.e2_no;
	this->e2_ni = multivectorA.e2_ni - rotorB.e2_ni;
	this->e3_no = multivectorA.e3_no - rotorB.e3_no;
	this->e3_ni = multivectorA.e3_ni - rotorB.e3_ni;
	this->no_ni = multivectorA.no_ni - rotorB.no_ni;
	this->e1_e2_e3 = multivectorA.e1_e2_e3;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_e3_no = multivectorA.e1_e3_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_e3_no = multivectorA.e2_e3_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e3_no_ni = multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = rotorA._1;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->e3 = -vectorB.e3;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 - bivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 - bivectorB.e1_e3;
	this->e1_no = rotorA.e1_no - bivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni - bivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 - bivectorB.e2_e3;
	this->e2_no = rotorA.e2_no - bivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni - bivectorB.e2_ni;
	this->e3_no = rotorA.e3_no - bivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni - bivectorB.e3_ni;
	this->no_ni = rotorA.no_ni - bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Trivector& trivectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = -trivectorB.e1_e2_e3;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_e3_no = -trivectorB.e1_e3_no;
	this->e1_e3_ni = -trivectorB.e1_e3_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_e3_no = -trivectorB.e2_e3_no;
	this->e2_e3_ni = -trivectorB.e2_e3_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e3_no_ni = -trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const Quadvector& quadvectorB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = -quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Subtract(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = rotorA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = -psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 - multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->e3 = -multivectorB.e3;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = rotorA.e1_e2 - multivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 - multivectorB.e1_e3;
	this->e1_no = rotorA.e1_no - multivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni - multivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 - multivectorB.e2_e3;
	this->e2_no = rotorA.e2_no - multivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni - multivectorB.e2_ni;
	this->e3_no = rotorA.e3_no - multivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni - multivectorB.e3_ni;
	this->no_ni = rotorA.no_ni - multivectorB.no_ni;
	this->e1_e2_e3 = -multivectorB.e1_e2_e3;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_e3_no = -multivectorB.e1_e3_no;
	this->e1_e3_ni = -multivectorB.e1_e3_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_e3_no = -multivectorB.e2_e3_no;
	this->e2_e3_ni = -multivectorB.e2_e3_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e3_no_ni = -multivectorB.e3_no_ni;
	this->e1_e2_e3_no = -multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = -multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = -multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = -multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = -multivectorB.e1_e2_e3_no_ni;
}

void Multivector::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 - rotorB.e1_e3;
	this->e1_no = rotorA.e1_no - rotorB.e1_no;
	this->e1_ni = rotorA.e1_ni - rotorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 - rotorB.e2_e3;
	this->e2_no = rotorA.e2_no - rotorB.e2_no;
	this->e2_ni = rotorA.e2_ni - rotorB.e2_ni;
	this->e3_no = rotorA.e3_no - rotorB.e3_no;
	this->e3_ni = rotorA.e3_ni - rotorB.e3_ni;
	this->no_ni = rotorA.no_ni - rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * multivectorB.e1_e3;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->e3_no = scalarA._1 * multivectorB.e3_no;
	this->e3_ni = scalarA._1 * multivectorB.e3_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * multivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * multivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * multivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * multivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * multivectorB.e3_no_ni;
	this->e1_e2_e3_no = scalarA._1 * multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = scalarA._1 * multivectorB.e1_e2_e3_no_ni;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e1_e3 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->e3 = vectorA.e1 * bivectorB.e1_e3 + vectorA.e2 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e3_no + vectorA.no * bivectorB.e3_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.e3 * bivectorB.e3_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + vectorA.e3 * bivectorB.e3_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e3 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3 = (-1.0) * vectorA.e2 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_e3_ni;
	this->e1_no = (-1.0) * vectorA.e2 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e1_e3_ni + vectorA.ni * trivectorB.e1_no_ni;
	this->e2_e3 = vectorA.e1 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_e3_ni;
	this->e2_no = vectorA.e1 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e2_no_ni;
	this->e3_no = vectorA.e1 * trivectorB.e1_e3_no + vectorA.e2 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e3_no_ni;
	this->e3_ni = vectorA.e1 * trivectorB.e1_e3_ni + vectorA.e2 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e3_no_ni;
	this->no_ni = vectorA.e1 * trivectorB.e1_no_ni + vectorA.e2 * trivectorB.e2_no_ni + vectorA.e3 * trivectorB.e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.ni * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no = vectorA.e3 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e3_no_ni;
	this->e1_e3_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e3_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no = vectorA.e1 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e2_e3_no_ni;
	this->e2_e3_ni = vectorA.e1 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e2_e3_no_ni;
	this->e2_no_ni = vectorA.e1 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e2_e3_no_ni;
	this->e3_no_ni = vectorA.e1 * quadvectorB.e1_e3_no_ni + vectorA.e2 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = (-1.0) * vectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + vectorA.e3 * multivectorB.e3 + (-1.0) * vectorA.ni * multivectorB.no + (-1.0) * vectorA.no * multivectorB.ni;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + (-1.0) * vectorA.e3 * multivectorB.e1_e3 + vectorA.ni * multivectorB.e1_no + vectorA.no * multivectorB.e1_ni;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + (-1.0) * vectorA.e3 * multivectorB.e2_e3 + vectorA.ni * multivectorB.e2_no + vectorA.no * multivectorB.e2_ni;
	this->e3 = vectorA.e1 * multivectorB.e1_e3 + vectorA.e2 * multivectorB.e2_e3 + vectorA.e3 * multivectorB._1 + vectorA.ni * multivectorB.e3_no + vectorA.no * multivectorB.e3_ni;
	this->no = vectorA.e1 * multivectorB.e1_no + vectorA.e2 * multivectorB.e2_no + vectorA.e3 * multivectorB.e3_no + vectorA.no * multivectorB._1 + vectorA.no * multivectorB.no_ni;
	this->ni = vectorA.e1 * multivectorB.e1_ni + vectorA.e2 * multivectorB.e2_ni + vectorA.e3 * multivectorB.e3_ni + vectorA.ni * multivectorB._1 + (-1.0) * vectorA.ni * multivectorB.no_ni;
	this->e1_e2 = vectorA.e3 * multivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_ni;
	this->e1_e3 = (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * multivectorB.e1_e3_no + (-1.0) * vectorA.no * multivectorB.e1_e3_ni;
	this->e1_no = (-1.0) * vectorA.e2 * multivectorB.e1_e2_no + (-1.0) * vectorA.e3 * multivectorB.e1_e3_no + (-1.0) * vectorA.no * multivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * multivectorB.e1_e3_ni + vectorA.ni * multivectorB.e1_no_ni;
	this->e2_e3 = vectorA.e1 * multivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * multivectorB.e2_e3_no + (-1.0) * vectorA.no * multivectorB.e2_e3_ni;
	this->e2_no = vectorA.e1 * multivectorB.e1_e2_no + (-1.0) * vectorA.e3 * multivectorB.e2_e3_no + (-1.0) * vectorA.no * multivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * multivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * multivectorB.e2_e3_ni + vectorA.ni * multivectorB.e2_no_ni;
	this->e3_no = vectorA.e1 * multivectorB.e1_e3_no + vectorA.e2 * multivectorB.e2_e3_no + (-1.0) * vectorA.no * multivectorB.e3_no_ni;
	this->e3_ni = vectorA.e1 * multivectorB.e1_e3_ni + vectorA.e2 * multivectorB.e2_e3_ni + vectorA.ni * multivectorB.e3_no_ni;
	this->no_ni = vectorA.e1 * multivectorB.e1_no_ni + vectorA.e2 * multivectorB.e2_no_ni + vectorA.e3 * multivectorB.e3_no_ni;
	this->e1_e2_e3 = vectorA.ni * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no = vectorA.e3 * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e3 * multivectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e1_e3_no_ni;
	this->e1_e3_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * multivectorB.e1_e3_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * multivectorB.e1_e3_no_ni;
	this->e2_e3_no = vectorA.e1 * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e2_e3_no_ni;
	this->e2_e3_ni = vectorA.e1 * multivectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * multivectorB.e2_e3_no_ni;
	this->e2_no_ni = vectorA.e1 * multivectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * multivectorB.e2_e3_no_ni;
	this->e3_no_ni = vectorA.e1 * multivectorB.e1_e3_no_ni + vectorA.e2 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no = (-1.0) * vectorA.no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e3 * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = vectorA.e1 * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2 + (-1.0) * vectorA.e3 * rotorB.e1_e3 + vectorA.ni * rotorB.e1_no + vectorA.no * rotorB.e1_ni;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1 + (-1.0) * vectorA.e3 * rotorB.e2_e3 + vectorA.ni * rotorB.e2_no + vectorA.no * rotorB.e2_ni;
	this->e3 = vectorA.e1 * rotorB.e1_e3 + vectorA.e2 * rotorB.e2_e3 + vectorA.e3 * rotorB._1 + vectorA.ni * rotorB.e3_no + vectorA.no * rotorB.e3_ni;
	this->no = vectorA.e1 * rotorB.e1_no + vectorA.e2 * rotorB.e2_no + vectorA.e3 * rotorB.e3_no + vectorA.no * rotorB._1 + vectorA.no * rotorB.no_ni;
	this->ni = vectorA.e1 * rotorB.e1_ni + vectorA.e2 * rotorB.e2_ni + vectorA.e3 * rotorB.e3_ni + vectorA.ni * rotorB._1 + (-1.0) * vectorA.ni * rotorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + bivectorA.e1_e3 * vectorB.e3 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->e3 = (-1.0) * bivectorA.e1_e3 * vectorB.e1 + (-1.0) * bivectorA.e2_e3 * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.no + (-1.0) * bivectorA.e3_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.e3_no * vectorB.e3 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.e3 + bivectorA.no_ni * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * bivectorB.e1_e3 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.e3_ni * bivectorB.e3_no + bivectorA.e3_no * bivectorB.e3_ni + bivectorA.no_ni * bivectorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * bivectorA.e2_e3 * trivectorB.e1_e2_e3 + bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e1_e3_no + bivectorA.e3_no * trivectorB.e1_e3_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = bivectorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e2_e3_no + bivectorA.e3_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->e3 = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e3_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * bivectorA.e3_no * trivectorB.e3_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_ni + bivectorA.e2_ni * trivectorB.e2_no_ni + bivectorA.e3_ni * trivectorB.e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e3_ni * quadvectorB.e1_e2_e3_no + bivectorA.e3_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3 = (-1.0) * bivectorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_no = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_ni + bivectorA.e2_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = bivectorA.e1_ni * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e2_e3_no_ni;
	this->e2_no = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e3_no_ni + bivectorA.e2_no * quadvectorB.e2_e3_no_ni;
	this->e3_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_ni * quadvectorB.e2_e3_no_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = bivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = bivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = bivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * bivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = bivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = bivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3 + bivectorA.e1_ni * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3 + bivectorA.e2_ni * multivectorB.e2_no + bivectorA.e2_no * multivectorB.e2_ni + bivectorA.e3_ni * multivectorB.e3_no + bivectorA.e3_no * multivectorB.e3_ni + bivectorA.no_ni * multivectorB.no_ni;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + bivectorA.e1_e3 * multivectorB.e3 + (-1.0) * bivectorA.e1_ni * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3 + bivectorA.e2_ni * multivectorB.e1_e2_no + bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.e3_ni * multivectorB.e1_e3_no + bivectorA.e3_no * multivectorB.e1_e3_ni + bivectorA.no_ni * multivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + bivectorA.e1_e3 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_ni + bivectorA.e2_e3 * multivectorB.e3 + (-1.0) * bivectorA.e2_ni * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.ni + bivectorA.e3_ni * multivectorB.e2_e3_no + bivectorA.e3_no * multivectorB.e2_e3_ni + bivectorA.no_ni * multivectorB.e2_no_ni;
	this->e3 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_e3 * multivectorB.e1 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2 + (-1.0) * bivectorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.no + (-1.0) * bivectorA.e3_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e3_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e1 + (-1.0) * bivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e2 + (-1.0) * bivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e3 + (-1.0) * bivectorA.e3_no * multivectorB.e3_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.no;
	this->ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1 + bivectorA.e1_ni * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2 + bivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e3 + bivectorA.e3_ni * multivectorB.e3_no_ni + bivectorA.no_ni * multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1 + bivectorA.e3_ni * multivectorB.e1_e2_e3_no + bivectorA.e3_no * multivectorB.e1_e2_e3_ni + bivectorA.no_ni * multivectorB.e1_e2_no_ni;
	this->e1_e3 = bivectorA.e1_e3 * multivectorB._1 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_e3_ni + bivectorA.no_ni * multivectorB.e1_e3_no_ni;
	this->e1_no = bivectorA.e1_no * multivectorB._1 + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e1_e3_no_ni;
	this->e1_ni = bivectorA.e1_ni * multivectorB._1 + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_ni + bivectorA.e2_ni * multivectorB.e1_e2_no_ni + bivectorA.e3_ni * multivectorB.e1_e3_no_ni;
	this->e2_e3 = bivectorA.e1_ni * multivectorB.e1_e2_e3_no + bivectorA.e1_no * multivectorB.e1_e2_e3_ni + bivectorA.e2_e3 * multivectorB._1 + bivectorA.no_ni * multivectorB.e2_e3_no_ni;
	this->e2_no = bivectorA.e1_e3 * multivectorB.e1_e2_e3_no + bivectorA.e1_no * multivectorB.e1_e2_no_ni + bivectorA.e2_no * multivectorB._1 + (-1.0) * bivectorA.e3_no * multivectorB.e2_e3_no_ni;
	this->e2_ni = bivectorA.e1_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no_ni + bivectorA.e2_ni * multivectorB._1 + bivectorA.e3_ni * multivectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_no + bivectorA.e1_no * multivectorB.e1_e3_no_ni + bivectorA.e2_no * multivectorB.e2_e3_no_ni + bivectorA.e3_no * multivectorB._1;
	this->e3_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2_e3_no_ni + bivectorA.e3_ni * multivectorB._1;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_no_ni + bivectorA.no_ni * multivectorB._1;
	this->e1_e2_e3 = bivectorA.no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e3_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_ni = bivectorA.e3_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_no = bivectorA.e2_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3_ni = bivectorA.e1_ni * multivectorB.e1_e2_e3_no_ni;
	this->e2_no_ni = bivectorA.e1_e3 * multivectorB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * rotorB.e1_e3 + bivectorA.e1_ni * rotorB.e1_no + bivectorA.e1_no * rotorB.e1_ni + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + bivectorA.e2_ni * rotorB.e2_no + bivectorA.e2_no * rotorB.e2_ni + bivectorA.e3_ni * rotorB.e3_no + bivectorA.e3_no * rotorB.e3_ni + bivectorA.no_ni * rotorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e1_e3 = bivectorA.e1_e3 * rotorB._1;
	this->e1_no = bivectorA.e1_no * rotorB._1;
	this->e1_ni = bivectorA.e1_ni * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e2_no = bivectorA.e2_no * rotorB._1;
	this->e2_ni = bivectorA.e2_ni * rotorB._1;
	this->e3_no = bivectorA.e3_no * rotorB._1;
	this->e3_ni = bivectorA.e3_ni * rotorB._1;
	this->no_ni = bivectorA.no_ni * rotorB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * trivectorA.e1_e2_ni * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_e3 * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.no + (-1.0) * trivectorA.e1_e3_no * vectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * vectorB.e2 + (-1.0) * trivectorA.e1_e3_no * vectorB.e3 + (-1.0) * trivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.e3 + trivectorA.e1_no_ni * vectorB.ni;
	this->e2_e3 = trivectorA.e1_e2_e3 * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.no + (-1.0) * trivectorA.e2_e3_no * vectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * vectorB.e1 + (-1.0) * trivectorA.e2_e3_no * vectorB.e3 + (-1.0) * trivectorA.e2_no_ni * vectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e3 + trivectorA.e2_no_ni * vectorB.ni;
	this->e3_no = trivectorA.e1_e3_no * vectorB.e1 + trivectorA.e2_e3_no * vectorB.e2 + (-1.0) * trivectorA.e3_no_ni * vectorB.no;
	this->e3_ni = trivectorA.e1_e3_ni * vectorB.e1 + trivectorA.e2_e3_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e2_e3 + trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_e3_ni * bivectorB.e3_no + trivectorA.e1_e3_no * bivectorB.e3_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = trivectorA.e1_e2_e3 * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_e3_ni * bivectorB.e3_no + trivectorA.e2_e3_no * bivectorB.e3_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_e3 + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no + (-1.0) * trivectorA.e3_no_ni * bivectorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_e3 + trivectorA.e1_no_ni * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_e3 + trivectorA.e2_no_ni * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_e3_ni * trivectorB.e1_e3_no + trivectorA.e1_e3_no * trivectorB.e1_e3_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_e3_ni * trivectorB.e2_e3_no + trivectorA.e2_e3_no * trivectorB.e2_e3_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni + trivectorA.e3_no_ni * trivectorB.e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e2 = trivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + trivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_no_ni * quadvectorB.e2_e3_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e2_e3_no_ni;
	this->ni = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_ni + trivectorA.e1_e2_ni * quadvectorB.e1_e2_no_ni + trivectorA.e1_e3_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_e3_ni * quadvectorB.e2_e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = trivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * trivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * trivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = trivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = trivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no + trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_e3_ni * multivectorB.e1_e3_no + trivectorA.e1_e3_no * multivectorB.e1_e3_ni + trivectorA.e1_no_ni * multivectorB.e1_no_ni + trivectorA.e2_e3_ni * multivectorB.e2_e3_no + trivectorA.e2_e3_no * multivectorB.e2_e3_ni + trivectorA.e2_no_ni * multivectorB.e2_no_ni + trivectorA.e3_no_ni * multivectorB.e3_no_ni;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_e3 + trivectorA.e1_e2_ni * multivectorB.e2_no + trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_e3_ni * multivectorB.e3_no + trivectorA.e1_e3_no * multivectorB.e3_ni + trivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e3_no_ni;
	this->e2 = trivectorA.e1_e2_e3 * multivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + trivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + trivectorA.e2_e3_ni * multivectorB.e3_no + trivectorA.e2_e3_no * multivectorB.e3_ni + trivectorA.e2_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_ni + trivectorA.e2_no_ni * multivectorB.e2_e3_no_ni + trivectorA.e3_no_ni * multivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e3 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_e3 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e2_no + (-1.0) * trivectorA.e3_no_ni * multivectorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e3 + trivectorA.e1_e3_ni * multivectorB.e1_e3_no_ni + trivectorA.e1_no_ni * multivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_e3 + trivectorA.e2_e3_ni * multivectorB.e2_e3_no_ni + trivectorA.e2_no_ni * multivectorB.e2_ni + trivectorA.e3_no_ni * multivectorB.e3_ni;
	this->e1_e2 = trivectorA.e1_e2_e3 * multivectorB.e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.no + (-1.0) * trivectorA.e1_e3_no * multivectorB.ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e3 + (-1.0) * trivectorA.e1_no_ni * multivectorB.no + trivectorA.e2_e3_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e3 + trivectorA.e1_no_ni * multivectorB.ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3 = trivectorA.e1_e2_e3 * multivectorB.e1 + trivectorA.e1_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.no + (-1.0) * trivectorA.e2_e3_no * multivectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * multivectorB.e1 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_no * multivectorB.e3 + (-1.0) * trivectorA.e2_no_ni * multivectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * multivectorB.e1 + trivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e3 + trivectorA.e2_no_ni * multivectorB.ni;
	this->e3_no = trivectorA.e1_e2_no * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_e3_no * multivectorB.e1 + trivectorA.e2_e3_no * multivectorB.e2 + (-1.0) * trivectorA.e3_no_ni * multivectorB.no;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_e3_ni * multivectorB.e1 + trivectorA.e2_e3_ni * multivectorB.e2 + trivectorA.e3_no_ni * multivectorB.ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_no_ni * multivectorB.e1 + trivectorA.e2_no_ni * multivectorB.e2 + trivectorA.e3_no_ni * multivectorB.e3;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * multivectorB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * multivectorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * multivectorB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * multivectorB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * multivectorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * multivectorB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * multivectorB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * multivectorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * multivectorB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e2_e3 + trivectorA.e1_e2_ni * rotorB.e2_no + trivectorA.e1_e2_no * rotorB.e2_ni + trivectorA.e1_e3_ni * rotorB.e3_no + trivectorA.e1_e3_no * rotorB.e3_ni + trivectorA.e1_no_ni * rotorB.no_ni;
	this->e2 = trivectorA.e1_e2_e3 * rotorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e1_ni + trivectorA.e2_e3_ni * rotorB.e3_no + trivectorA.e2_e3_no * rotorB.e3_ni + trivectorA.e2_no_ni * rotorB.no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * rotorB.e1_no + (-1.0) * trivectorA.e1_e3_no * rotorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * rotorB.e2_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e2_ni + trivectorA.e3_no_ni * rotorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_no * rotorB.e1_e3 + (-1.0) * trivectorA.e1_no_ni * rotorB.e1_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e2_e3 + (-1.0) * trivectorA.e2_no_ni * rotorB.e2_no + (-1.0) * trivectorA.e3_no_ni * rotorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * rotorB.e1_e3 + trivectorA.e1_no_ni * rotorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * rotorB.e2_e3 + trivectorA.e2_no_ni * rotorB.e2_ni + trivectorA.e3_no_ni * rotorB.e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * rotorB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * rotorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * rotorB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * rotorB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * rotorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * rotorB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * rotorB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * rotorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * rotorB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * rotorB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e3 + (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e3 + quadvectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * vectorB.e2 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.no;
	this->e1_e3_ni = quadvectorA.e1_e2_e3_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.ni;
	this->e1_no_ni = quadvectorA.e1_e2_no_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.no;
	this->e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.e3;
	this->e3_no_ni = (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * bivectorB.e3_no + quadvectorA.e1_e2_e3_no * bivectorB.e3_ni + quadvectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * bivectorB.e1_no + quadvectorA.e1_e2_e3_no * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * bivectorB.e1_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e1_e2 + quadvectorA.e1_e3_no_ni * bivectorB.e1_no + quadvectorA.e2_e3_no_ni * bivectorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = quadvectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + quadvectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * trivectorB.e2_no_ni + quadvectorA.e1_e3_no_ni * trivectorB.e3_no_ni;
	this->e2 = (-1.0) * quadvectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_no_ni + quadvectorA.e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e3 = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_e3 + quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_no + quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_no + quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_no;
	this->ni = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * quadvectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = quadvectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * quadvectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * quadvectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e1 = quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e2 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no_ni + quadvectorA.e2_e3_no_ni * multivectorB.e3_no_ni;
	this->e3 = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3 + quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_no + quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_no + quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_no;
	this->ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_ni;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * multivectorB.e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e3_ni + quadvectorA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_ni + quadvectorA.e1_e3_no_ni * multivectorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3 + quadvectorA.e1_e2_no_ni * multivectorB.e2_ni + quadvectorA.e1_e3_no_ni * multivectorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * multivectorB.e1_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_ni + quadvectorA.e2_e3_no_ni * multivectorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * multivectorB.e1_e3 + quadvectorA.e1_e2_no_ni * multivectorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_ni + quadvectorA.e2_e3_no_ni * multivectorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2 + quadvectorA.e1_e3_no_ni * multivectorB.e1_no + quadvectorA.e2_e3_no_ni * multivectorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3;
	this->e1_e2_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e3 + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e3 + quadvectorA.e1_e2_no_ni * multivectorB.ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * multivectorB.e2 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.no;
	this->e1_e3_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e2 + quadvectorA.e1_e3_no_ni * multivectorB.ni;
	this->e1_no_ni = quadvectorA.e1_e2_no_ni * multivectorB.e2 + quadvectorA.e1_e3_no_ni * multivectorB.e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.no;
	this->e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1 + quadvectorA.e2_e3_no_ni * multivectorB.ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1 + quadvectorA.e2_e3_no_ni * multivectorB.e3;
	this->e3_no_ni = (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * multivectorB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * multivectorB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * multivectorB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * multivectorB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Quadvector& quadvectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * rotorB.e3_no + quadvectorA.e1_e2_e3_no * rotorB.e3_ni + quadvectorA.e1_e2_no_ni * rotorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e2_ni + quadvectorA.e1_e3_no_ni * rotorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e2_e3 + quadvectorA.e1_e2_no_ni * rotorB.e2_ni + quadvectorA.e1_e3_no_ni * rotorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * rotorB.e1_no + quadvectorA.e1_e2_e3_no * rotorB.e1_ni + quadvectorA.e2_e3_no_ni * rotorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * rotorB.e1_e3 + quadvectorA.e1_e2_no_ni * rotorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * rotorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e1_ni + quadvectorA.e2_e3_no_ni * rotorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e1_e2 + quadvectorA.e1_e3_no_ni * rotorB.e1_no + quadvectorA.e2_e3_no_ni * rotorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * rotorB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * rotorB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * rotorB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * rotorB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * rotorB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_ni;
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2;
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * rotorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = multivectorA.e1_e3 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->e3_no = multivectorA.e3_no * scalarB._1;
	this->e3_ni = multivectorA.e3_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = multivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = multivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = multivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = multivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = multivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e2 * vectorB.e2 + multivectorA.e1 * vectorB.e1 + multivectorA.e3 * vectorB.e3 + (-1.0) * multivectorA.ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.ni;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e3 * vectorB.e3 + (-1.0) * multivectorA.e1_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.ni + multivectorA.e1_e2 * vectorB.e2;
	this->e2 = multivectorA._1 * vectorB.e2 + multivectorA.e2_e3 * vectorB.e3 + (-1.0) * multivectorA.e2_ni * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.ni + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->e3 = multivectorA._1 * vectorB.e3 + (-1.0) * multivectorA.e1_e3 * vectorB.e1 + (-1.0) * multivectorA.e2_e3 * vectorB.e2 + (-1.0) * multivectorA.e3_ni * vectorB.no + (-1.0) * multivectorA.e3_no * vectorB.ni;
	this->no = multivectorA._1 * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e1 + (-1.0) * multivectorA.e2_no * vectorB.e2 + (-1.0) * multivectorA.e3_no * vectorB.e3 + (-1.0) * multivectorA.no_ni * vectorB.no;
	this->ni = multivectorA._1 * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e1 + (-1.0) * multivectorA.e2_ni * vectorB.e2 + (-1.0) * multivectorA.e3_ni * vectorB.e3 + multivectorA.no_ni * vectorB.ni;
	this->e1_e2 = multivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3 = (-1.0) * multivectorA.e1_e3_ni * vectorB.no + (-1.0) * multivectorA.e1_e3_no * vectorB.ni + (-1.0) * multivectorA.e1_e2_e3 * vectorB.e2;
	this->e1_no = (-1.0) * multivectorA.e1_e3_no * vectorB.e3 + (-1.0) * multivectorA.e1_no_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.e2;
	this->e1_ni = (-1.0) * multivectorA.e1_e3_ni * vectorB.e3 + multivectorA.e1_no_ni * vectorB.ni + (-1.0) * multivectorA.e1_e2_ni * vectorB.e2;
	this->e2_e3 = (-1.0) * multivectorA.e2_e3_ni * vectorB.no + (-1.0) * multivectorA.e2_e3_no * vectorB.ni + multivectorA.e1_e2_e3 * vectorB.e1;
	this->e2_no = (-1.0) * multivectorA.e2_e3_no * vectorB.e3 + (-1.0) * multivectorA.e2_no_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.e1;
	this->e2_ni = (-1.0) * multivectorA.e2_e3_ni * vectorB.e3 + multivectorA.e2_no_ni * vectorB.ni + multivectorA.e1_e2_ni * vectorB.e1;
	this->e3_no = multivectorA.e1_e3_no * vectorB.e1 + multivectorA.e2_e3_no * vectorB.e2 + (-1.0) * multivectorA.e3_no_ni * vectorB.no;
	this->e3_ni = multivectorA.e1_e3_ni * vectorB.e1 + multivectorA.e2_e3_ni * vectorB.e2 + multivectorA.e3_no_ni * vectorB.ni;
	this->no_ni = multivectorA.e1_no_ni * vectorB.e1 + multivectorA.e2_no_ni * vectorB.e2 + multivectorA.e3_no_ni * vectorB.e3;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * vectorB.ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e2_e3_no * vectorB.e3 + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.e3 + multivectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_e3_no = (-1.0) * multivectorA.e1_e3_no_ni * vectorB.no + multivectorA.e1_e2_e3_no * vectorB.e2;
	this->e1_e3_ni = multivectorA.e1_e3_no_ni * vectorB.ni + multivectorA.e1_e2_e3_ni * vectorB.e2;
	this->e1_no_ni = multivectorA.e1_e3_no_ni * vectorB.e3 + multivectorA.e1_e2_no_ni * vectorB.e2;
	this->e2_e3_no = (-1.0) * multivectorA.e2_e3_no_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * vectorB.e1;
	this->e2_e3_ni = multivectorA.e2_e3_no_ni * vectorB.ni + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.e1;
	this->e2_no_ni = multivectorA.e2_e3_no_ni * vectorB.e3 + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.e1;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * vectorB.e1 + (-1.0) * multivectorA.e2_e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e1_e2_e3_no_ni * vectorB.no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_no_ni * vectorB.ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_e3_no_ni * vectorB.e3;
	this->e1_e3_no_ni = (-1.0) * multivectorA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni * vectorB.e1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e3 * bivectorB.e1_e3 + multivectorA.e1_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_ni + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_e3 + multivectorA.e2_ni * bivectorB.e2_no + multivectorA.e2_no * bivectorB.e2_ni + multivectorA.e3_ni * bivectorB.e3_no + multivectorA.e3_no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + multivectorA.no_ni * bivectorB.no_ni;
	this->e1 = multivectorA.e1_e3_ni * bivectorB.e3_no + multivectorA.e1_e3_no * bivectorB.e3_ni + multivectorA.e1_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_e2 + (-1.0) * multivectorA.e3 * bivectorB.e1_e3 + multivectorA.ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_e3 + multivectorA.e1_e2_ni * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.e2_ni;
	this->e2 = multivectorA.e2_e3_ni * bivectorB.e3_no + multivectorA.e1 * bivectorB.e1_e2 + multivectorA.e2_e3_no * bivectorB.e3_ni + multivectorA.e2_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e3 * bivectorB.e2_e3 + multivectorA.ni * bivectorB.e2_no + multivectorA.no * bivectorB.e2_ni + multivectorA.e1_e2_e3 * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e2_no + multivectorA.e1 * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * bivectorB.e2_ni + multivectorA.e3_no_ni * bivectorB.no_ni + multivectorA.ni * bivectorB.e3_no + multivectorA.no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e1_e2;
	this->no = (-1.0) * multivectorA.e1_e3_no * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_no_ni * bivectorB.e1_no + multivectorA.e2 * bivectorB.e2_no + multivectorA.e1 * bivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e2_no_ni * bivectorB.e2_no + multivectorA.e3 * bivectorB.e3_no + (-1.0) * multivectorA.e3_no_ni * bivectorB.e3_no + multivectorA.no * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_e2;
	this->ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e1_e3 + multivectorA.e1_no_ni * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e2_e3 + multivectorA.e1 * bivectorB.e1_ni + multivectorA.e2_no_ni * bivectorB.e2_ni + multivectorA.e3 * bivectorB.e3_ni + multivectorA.e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.ni * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_e2;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2 + multivectorA.e1_e2_e3_ni * bivectorB.e3_no + multivectorA.e1_e2_e3_no * bivectorB.e3_ni + multivectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_e3 = multivectorA._1 * bivectorB.e1_e3 + multivectorA.e1_e3_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e2_ni;
	this->e1_no = multivectorA._1 * bivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e2_no;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni + multivectorA.e1_e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e2_e3 + multivectorA.e1_e2_no_ni * bivectorB.e2_ni;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3 + multivectorA.e2_e3_no_ni * bivectorB.no_ni + multivectorA.e1_e2_e3_ni * bivectorB.e1_no + multivectorA.e1_e2_e3_no * bivectorB.e1_ni;
	this->e2_no = multivectorA._1 * bivectorB.e2_no + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e3_no + multivectorA.e1_e2_e3_no * bivectorB.e1_e3 + multivectorA.e1_e2_no_ni * bivectorB.e1_no;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni + multivectorA.e2_e3_no_ni * bivectorB.e3_ni + multivectorA.e1_e2_e3_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_ni;
	this->e3_no = multivectorA._1 * bivectorB.e3_no + multivectorA.e1_e3_no_ni * bivectorB.e1_no + multivectorA.e2_e3_no_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e1_e2;
	this->e3_ni = multivectorA._1 * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e1_e2;
	this->no_ni = multivectorA._1 * bivectorB.no_ni + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3 = multivectorA.e1_e2_e3_no_ni * bivectorB.no_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e3_no;
	this->e1_e2_ni = multivectorA.e1_e2_e3_no_ni * bivectorB.e3_ni;
	this->e1_e3_no = multivectorA.e1_e2_e3_no_ni * bivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e1_no;
	this->e2_e3_ni = multivectorA.e1_e2_e3_no_ni * bivectorB.e1_ni;
	this->e2_no_ni = multivectorA.e1_e2_e3_no_ni * bivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA.e1_e3_ni * trivectorB.e1_e3_no + multivectorA.e1_e3_no * trivectorB.e1_e3_ni + multivectorA.e1_no_ni * trivectorB.e1_no_ni + multivectorA.e2_e3_ni * trivectorB.e2_e3_no + multivectorA.e2_e3_no * trivectorB.e2_e3_ni + multivectorA.e2_no_ni * trivectorB.e2_no_ni + multivectorA.e3_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_e2_ni;
	this->e1 = multivectorA.e1_e3_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e1_e2_e3 + multivectorA.e2_ni * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.e3_ni * trivectorB.e1_e3_no + multivectorA.e3_no * trivectorB.e1_e3_ni + multivectorA.no_ni * trivectorB.e1_no_ni + multivectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + multivectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + multivectorA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = multivectorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e2_ni + multivectorA.e2_e3_no_ni * trivectorB.e3_no_ni + multivectorA.e3_ni * trivectorB.e2_e3_no + multivectorA.e3_no * trivectorB.e2_e3_ni + multivectorA.no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_e3 + multivectorA.no_ni * trivectorB.e3_no_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * trivectorB.e1_e2_ni;
	this->no = (-1.0) * multivectorA.e1_e3 * trivectorB.e1_e3_no + multivectorA.e1_e3_no_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e2_e3_no + multivectorA.e2_e3_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e3_no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * trivectorB.e1_e2_e3 + multivectorA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * multivectorA.e1_e3 * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e1_e3_ni + multivectorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e2_e3_ni + multivectorA.e2_ni * trivectorB.e2_no_ni + multivectorA.e3_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e2_ni;
	this->e1_e2 = multivectorA.e3 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * multivectorA.e2 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e2_no_ni;
	this->e1_no = (-1.0) * multivectorA.e2 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e3 * trivectorB.e1_e3_no + (-1.0) * multivectorA.no * trivectorB.e1_no_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * multivectorA.e2 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e3 * trivectorB.e1_e3_ni + multivectorA.ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e2_e3 = multivectorA.e1 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.no * trivectorB.e2_e3_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e2_no = multivectorA.e1 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e3 * trivectorB.e2_e3_no + (-1.0) * multivectorA.no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e2_ni = multivectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e3 * trivectorB.e2_e3_ni + multivectorA.ni * trivectorB.e2_no_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e3_no = multivectorA.e2 * trivectorB.e2_e3_no + multivectorA.e1 * trivectorB.e1_e3_no + (-1.0) * multivectorA.no * trivectorB.e3_no_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e3_ni = multivectorA.e2 * trivectorB.e2_e3_ni + multivectorA.e1 * trivectorB.e1_e3_ni + multivectorA.ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = multivectorA.e2 * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_no_ni + multivectorA.e3 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3 = multivectorA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = multivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + multivectorA.e1_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no_ni * quadvectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = multivectorA.e1_no_ni * quadvectorB.e1_e3_no_ni + multivectorA.e2_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni;
	this->no = (-1.0) * multivectorA.e1_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * quadvectorB.e1_e2_no_ni;
	this->ni = multivectorA.e1_e3_ni * quadvectorB.e1_e3_no_ni + multivectorA.e2_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni + multivectorA.e1_e2_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e2 = multivectorA.e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e3_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3 = (-1.0) * multivectorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_no = (-1.0) * multivectorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * multivectorA.e2_e3 * quadvectorB.e1_e2_e3_ni + multivectorA.e2_ni * quadvectorB.e1_e2_no_ni + multivectorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = multivectorA.e1_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e2_e3_no_ni;
	this->e2_no = multivectorA.e1_e3 * quadvectorB.e1_e2_e3_no + multivectorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = multivectorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_ni * quadvectorB.e1_e2_no_ni + multivectorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = multivectorA.e1_no * quadvectorB.e1_e3_no_ni + multivectorA.e2_no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_e3_no;
	this->e3_ni = (-1.0) * multivectorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_e3_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3 * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_no_ni;
	this->e1_e2_e3 = multivectorA.ni * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no = multivectorA.e3 * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_ni = multivectorA.e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e3_no_ni;
	this->e1_e3_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e1_e3_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no = multivectorA.e1 * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e2_e3_no_ni;
	this->e2_e3_ni = multivectorA.e1 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e2_e3_no_ni;
	this->e2_no_ni = multivectorA.e1 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * quadvectorB.e2_e3_no_ni;
	this->e3_no_ni = multivectorA.e2 * quadvectorB.e2_e3_no_ni + multivectorA.e1 * quadvectorB.e1_e3_no_ni;
	this->e1_e2_e3_no = multivectorA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = multivectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * multivectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = multivectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * multivectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2 = multivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * multivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = multivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * multivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = multivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * multivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = multivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = multivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * multivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3 = multivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = multivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = multivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * multivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * multivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = multivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = multivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = (-1.0) * multivectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = multivectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = multivectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e3_no + multivectorA.e1_e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3_no_ni + multivectorA.e1_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1_no_ni + multivectorA.e2 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3 + multivectorA.e2_e3_ni * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1 + multivectorA.e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e2_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2_no_ni + multivectorA.e3 * multivectorB.e3 + multivectorA.e3_ni * multivectorB.e3_no + multivectorA.e3_no * multivectorB.e3_ni + multivectorA.e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1_e3 * multivectorB.e3 + multivectorA.e1_e3_ni * multivectorB.e3_no + multivectorA.e1_e3_no * multivectorB.e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1 * multivectorB._1 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_ni * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3 + multivectorA.e3_ni * multivectorB.e1_e3_no + multivectorA.e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e3_no_ni + multivectorA.ni * multivectorB.e1_no + multivectorA.e1_e2 * multivectorB.e2 + multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3 + multivectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_ni * multivectorB.e2_no + multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_no_ni;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1_e3 * multivectorB.e1_e2_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e2 * multivectorB._1 + multivectorA.e2_e3 * multivectorB.e3 + multivectorA.e2_e3_ni * multivectorB.e3_no + multivectorA.e1 * multivectorB.e1_e2 + multivectorA.e2_e3_no * multivectorB.e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e3 * multivectorB.e2_e3 + multivectorA.e3_ni * multivectorB.e2_e3_no + multivectorA.e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2_no_ni + multivectorA.e1_e2_e3 * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_no_ni;
	this->e3 = multivectorA._1 * multivectorB.e3 + (-1.0) * multivectorA.e1_e3 * multivectorB.e1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e3_no_ni + multivectorA.e2 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_no + multivectorA.e1 * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e2_e3_ni + multivectorA.e2_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e3 * multivectorB._1 + (-1.0) * multivectorA.e3_ni * multivectorB.no + (-1.0) * multivectorA.e3_no * multivectorB.ni + multivectorA.e3_no_ni * multivectorB.no_ni + multivectorA.ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3 + multivectorA.no * multivectorB.e3_ni + multivectorA.no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2 + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->no = multivectorA._1 * multivectorB.no + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1 + (-1.0) * multivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_no + multivectorA.e2 * multivectorB.e2_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_e3_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e2 + (-1.0) * multivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e2_no + multivectorA.e3 * multivectorB.e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e3 + (-1.0) * multivectorA.e3_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no + multivectorA.no * multivectorB._1 + multivectorA.no * multivectorB.no_ni + (-1.0) * multivectorA.no_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no;
	this->ni = multivectorA._1 * multivectorB.ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1 + multivectorA.e1_ni * multivectorB.e1_no_ni + multivectorA.e1_no_ni * multivectorB.e1_ni + multivectorA.e2 * multivectorB.e2_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_e3 + multivectorA.e2_e3_ni * multivectorB.e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2 + multivectorA.e2_ni * multivectorB.e2_no_ni + multivectorA.e2_no_ni * multivectorB.e2_ni + multivectorA.e3 * multivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e3 + multivectorA.e3_ni * multivectorB.e3_no_ni + multivectorA.e3_no_ni * multivectorB.e3_ni + multivectorA.ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_ni;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e3 * multivectorB.e1_e2_e3 + multivectorA.e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_e3 * multivectorB.e3 + multivectorA.e1_e2_e3_ni * multivectorB.e3_no + multivectorA.e1_e2_e3_no * multivectorB.e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_e3 = multivectorA._1 * multivectorB.e1_e3 + multivectorA.e1_e3 * multivectorB._1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.no + (-1.0) * multivectorA.e1_e3_no * multivectorB.ni + multivectorA.e1_e3_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.no * multivectorB.e1_e3_ni + multivectorA.no_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_no_ni;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e3_no + multivectorA.e1_no * multivectorB._1 + (-1.0) * multivectorA.e1_no_ni * multivectorB.no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_no + multivectorA.e2_e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_e3 + multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e2_no;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e3 + multivectorA.e1_e3_no_ni * multivectorB.e3_ni + multivectorA.e1_ni * multivectorB._1 + multivectorA.e1_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_ni + multivectorA.e3_ni * multivectorB.e1_e3_no_ni + multivectorA.ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2 + multivectorA.e1_e2_no_ni * multivectorB.e2_ni;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e1_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.no + multivectorA.e1 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.ni + multivectorA.e2_e3_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.no * multivectorB.e2_e3_ni + multivectorA.no_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_e3 * multivectorB.e1 + multivectorA.e1_e2_e3_ni * multivectorB.e1_no + multivectorA.e1_e2_e3_no * multivectorB.e1_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_no_ni;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e1_e3 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_no * multivectorB.e1_e2_no_ni + multivectorA.e1 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e3_no + multivectorA.e2_no * multivectorB._1 + (-1.0) * multivectorA.e2_no_ni * multivectorB.no + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.no * multivectorB.e2_no_ni + multivectorA.e1_e2_e3_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_no + multivectorA.e1_e2_no * multivectorB.e1 + multivectorA.e1_e2_no_ni * multivectorB.e1_no;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e1_e3 * multivectorB.e1_e2_e3_ni + multivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e3 + multivectorA.e1 * multivectorB.e1_e2_ni + multivectorA.e2_e3_no_ni * multivectorB.e3_ni + multivectorA.e2_ni * multivectorB._1 + multivectorA.e2_no_ni * multivectorB.ni + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_ni + multivectorA.e3_ni * multivectorB.e2_e3_no_ni + multivectorA.ni * multivectorB.e2_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_e3 + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_ni + multivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_ni;
	this->e3_no = multivectorA._1 * multivectorB.e3_no + multivectorA.e1_e3_no * multivectorB.e1 + multivectorA.e1_e3_no_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_e3_no_ni + multivectorA.e2 * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1_e3_no + multivectorA.e2_e3_no * multivectorB.e2 + multivectorA.e2_e3_no_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_e3_no_ni + multivectorA.e3_no * multivectorB._1 + (-1.0) * multivectorA.e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2 + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_e3_no_ni;
	this->e3_ni = multivectorA._1 * multivectorB.e3_ni + multivectorA.e1_e3_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e3_no_ni + multivectorA.e2 * multivectorB.e2_e3_ni + multivectorA.e2_e3_ni * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2_e3_no_ni + multivectorA.e3_ni * multivectorB._1 + multivectorA.e3_no_ni * multivectorB.ni + multivectorA.ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no_ni;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3 + multivectorA.e1_no_ni * multivectorB.e1 + multivectorA.e2 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3 + multivectorA.e2_no_ni * multivectorB.e2 + multivectorA.e3 * multivectorB.e3_no_ni + multivectorA.e3_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no_ni + multivectorA.no_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + multivectorA.ni * multivectorB.e1_e2_e3_no + multivectorA.no * multivectorB.e1_e2_e3_ni + multivectorA.no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.ni + multivectorA.e1_e2_e3_no_ni * multivectorB.no_ni;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + multivectorA.e3 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e2_e3_no_ni + multivectorA.no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e3_no + multivectorA.e1_e2_no * multivectorB._1 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + multivectorA.e3 * multivectorB.e1_e2_e3_ni + multivectorA.e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e3 + multivectorA.e1_e2_e3_no_ni * multivectorB.e3_ni + multivectorA.e1_e2_ni * multivectorB._1 + multivectorA.e1_e2_no_ni * multivectorB.ni;
	this->e1_e3_no = multivectorA._1 * multivectorB.e1_e3_no + multivectorA.e1_e3_no * multivectorB._1 + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_no + multivectorA.e2_no * multivectorB.e1_e2_e3_no_ni + multivectorA.no * multivectorB.e1_e3_no_ni + multivectorA.e1_e2_e3_no * multivectorB.e2 + multivectorA.e1_e2_e3_no_ni * multivectorB.e2_no;
	this->e1_e3_ni = multivectorA._1 * multivectorB.e1_e3_ni + multivectorA.e1_e3_ni * multivectorB._1 + multivectorA.e1_e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_ni;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e3 + multivectorA.e1_no_ni * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3 + multivectorA.e1_e2_no_ni * multivectorB.e2;
	this->e2_e3_no = multivectorA._1 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_e2_e3_no + multivectorA.e2_e3_no * multivectorB._1 + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.no + multivectorA.no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_no;
	this->e2_e3_ni = multivectorA._1 * multivectorB.e2_e3_ni + multivectorA.e1_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_e3_ni * multivectorB._1 + multivectorA.e1 * multivectorB.e1_e2_e3_ni + multivectorA.e2_e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1 + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_ni;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + multivectorA.e1_e3 * multivectorB.e1_e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_e2_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e3 + multivectorA.e2_no_ni * multivectorB._1 + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1;
	this->e3_no_ni = multivectorA._1 * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1 + multivectorA.e2 * multivectorB.e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2 + multivectorA.e3_no_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2;
	this->e1_e2_e3_no = multivectorA._1 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_no * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.no;
	this->e1_e2_e3_ni = multivectorA._1 * multivectorB.e1_e2_e3_ni + multivectorA.ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_ni * multivectorB._1 + multivectorA.e1_e2_e3_no_ni * multivectorB.ni;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + multivectorA.e3 * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e3 + multivectorA.e1_e2_no_ni * multivectorB._1;
	this->e1_e3_no_ni = multivectorA._1 * multivectorB.e1_e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2;
	this->e2_e3_no_ni = multivectorA._1 * multivectorB.e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_e3_no_ni * multivectorB._1 + multivectorA.e1_e2_e3_no_ni * multivectorB.e1;
	this->e1_e2_e3_no_ni = multivectorA._1 * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e3 * rotorB.e1_e3 + multivectorA.e1_ni * rotorB.e1_no + multivectorA.e1_no * rotorB.e1_ni + (-1.0) * multivectorA.e2_e3 * rotorB.e2_e3 + multivectorA.e2_ni * rotorB.e2_no + multivectorA.e2_no * rotorB.e2_ni + multivectorA.e3_ni * rotorB.e3_no + multivectorA.e3_no * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2 + multivectorA.no_ni * rotorB.no_ni;
	this->e1 = multivectorA.e1_e3_ni * rotorB.e3_no + multivectorA.e1_e3_no * rotorB.e3_ni + multivectorA.e1_no_ni * rotorB.no_ni + (-1.0) * multivectorA.e2 * rotorB.e1_e2 + multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e1_e3 + multivectorA.ni * rotorB.e1_no + multivectorA.no * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_e3 + multivectorA.e1_e2_ni * rotorB.e2_no + multivectorA.e1_e2_no * rotorB.e2_ni;
	this->e2 = multivectorA.e2 * rotorB._1 + multivectorA.e2_e3_ni * rotorB.e3_no + multivectorA.e1 * rotorB.e1_e2 + multivectorA.e2_e3_no * rotorB.e3_ni + multivectorA.e2_no_ni * rotorB.no_ni + (-1.0) * multivectorA.e3 * rotorB.e2_e3 + multivectorA.ni * rotorB.e2_no + multivectorA.no * rotorB.e2_ni + multivectorA.e1_e2_e3 * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e1_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e3_no * rotorB.e1_ni + multivectorA.e2 * rotorB.e2_e3 + (-1.0) * multivectorA.e2_e3_ni * rotorB.e2_no + multivectorA.e1 * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * rotorB.e2_ni + multivectorA.e3 * rotorB._1 + multivectorA.e3_no_ni * rotorB.no_ni + multivectorA.ni * rotorB.e3_no + multivectorA.no * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e1_e2;
	this->no = (-1.0) * multivectorA.e1_e3_no * rotorB.e1_e3 + (-1.0) * multivectorA.e1_no_ni * rotorB.e1_no + multivectorA.e2 * rotorB.e2_no + multivectorA.e1 * rotorB.e1_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e2_no_ni * rotorB.e2_no + multivectorA.e3 * rotorB.e3_no + (-1.0) * multivectorA.e3_no_ni * rotorB.e3_no + multivectorA.no * rotorB._1 + multivectorA.no * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_no * rotorB.e1_e2;
	this->ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e1_e3 + multivectorA.e1_no_ni * rotorB.e1_ni + multivectorA.e2 * rotorB.e2_ni + (-1.0) * multivectorA.e2_e3_ni * rotorB.e2_e3 + multivectorA.e1 * rotorB.e1_ni + multivectorA.e2_no_ni * rotorB.e2_ni + multivectorA.e3 * rotorB.e3_ni + multivectorA.e3_no_ni * rotorB.e3_ni + multivectorA.ni * rotorB._1 + (-1.0) * multivectorA.ni * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_e2;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1 + multivectorA.e1_e2_e3_ni * rotorB.e3_no + multivectorA.e1_e2_e3_no * rotorB.e3_ni + multivectorA.e1_e2_no_ni * rotorB.no_ni;
	this->e1_e3 = multivectorA._1 * rotorB.e1_e3 + multivectorA.e1_e3 * rotorB._1 + multivectorA.e1_e3_no_ni * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e2_ni;
	this->e1_no = multivectorA._1 * rotorB.e1_no + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e3_no + multivectorA.e1_no * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e2_no;
	this->e1_ni = multivectorA._1 * rotorB.e1_ni + multivectorA.e1_e3_no_ni * rotorB.e3_ni + multivectorA.e1_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e2_e3 + multivectorA.e1_e2_no_ni * rotorB.e2_ni;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB._1 + multivectorA.e2_e3_no_ni * rotorB.no_ni + multivectorA.e1_e2_e3_ni * rotorB.e1_no + multivectorA.e1_e2_e3_no * rotorB.e1_ni;
	this->e2_no = multivectorA._1 * rotorB.e2_no + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e3_no + multivectorA.e2_no * rotorB._1 + multivectorA.e1_e2_e3_no * rotorB.e1_e3 + multivectorA.e1_e2_no_ni * rotorB.e1_no;
	this->e2_ni = multivectorA._1 * rotorB.e2_ni + multivectorA.e2_e3_no_ni * rotorB.e3_ni + multivectorA.e2_ni * rotorB._1 + multivectorA.e1_e2_e3_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e1_ni;
	this->e3_no = multivectorA._1 * rotorB.e3_no + multivectorA.e1_e3_no_ni * rotorB.e1_no + multivectorA.e2_e3_no_ni * rotorB.e2_no + multivectorA.e3_no * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e1_e2;
	this->e3_ni = multivectorA._1 * rotorB.e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e2_ni + multivectorA.e3_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e1_e2;
	this->no_ni = multivectorA._1 * rotorB.no_ni + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e2_e3 + multivectorA.no_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e1_e2;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * rotorB._1 + multivectorA.e1_e2_e3_no_ni * rotorB.no_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e3_no + multivectorA.e1_e2_no * rotorB._1;
	this->e1_e2_ni = multivectorA.e1_e2_e3_no_ni * rotorB.e3_ni + multivectorA.e1_e2_ni * rotorB._1;
	this->e1_e3_no = multivectorA.e1_e3_no * rotorB._1 + multivectorA.e1_e2_e3_no_ni * rotorB.e2_no;
	this->e1_e3_ni = multivectorA.e1_e3_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e2_e3;
	this->e2_e3_no = multivectorA.e2_e3_no * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e1_no;
	this->e2_e3_ni = multivectorA.e2_e3_ni * rotorB._1 + multivectorA.e1_e2_e3_no_ni * rotorB.e1_ni;
	this->e2_no_ni = multivectorA.e2_no_ni * rotorB._1 + multivectorA.e1_e2_e3_no_ni * rotorB.e1_e3;
	this->e3_no_ni = multivectorA.e3_no_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e1_e2;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no * rotorB._1;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni * rotorB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * rotorB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni * rotorB._1;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni * rotorB._1;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni * rotorB._1;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2 + rotorA.e1_e3 * vectorB.e3 + (-1.0) * rotorA.e1_ni * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.ni;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1 + rotorA.e2_e3 * vectorB.e3 + (-1.0) * rotorA.e2_ni * vectorB.no + (-1.0) * rotorA.e2_no * vectorB.ni;
	this->e3 = rotorA._1 * vectorB.e3 + (-1.0) * rotorA.e1_e3 * vectorB.e1 + (-1.0) * rotorA.e2_e3 * vectorB.e2 + (-1.0) * rotorA.e3_ni * vectorB.no + (-1.0) * rotorA.e3_no * vectorB.ni;
	this->no = rotorA._1 * vectorB.no + (-1.0) * rotorA.no_ni * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e1 + (-1.0) * rotorA.e2_no * vectorB.e2 + (-1.0) * rotorA.e3_no * vectorB.e3;
	this->ni = rotorA._1 * vectorB.ni + rotorA.no_ni * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e1 + (-1.0) * rotorA.e2_ni * vectorB.e2 + (-1.0) * rotorA.e3_ni * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA.no_ni * bivectorB.no_ni + (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * bivectorB.e1_e3 + rotorA.e1_ni * bivectorB.e1_no + rotorA.e1_no * bivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + rotorA.e2_ni * bivectorB.e2_no + rotorA.e2_no * bivectorB.e2_ni + rotorA.e3_ni * bivectorB.e3_no + rotorA.e3_no * bivectorB.e3_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e1_e3 = rotorA._1 * bivectorB.e1_e3;
	this->e1_no = rotorA._1 * bivectorB.e1_no;
	this->e1_ni = rotorA._1 * bivectorB.e1_ni;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e2_no = rotorA._1 * bivectorB.e2_no;
	this->e2_ni = rotorA._1 * bivectorB.e2_ni;
	this->e3_no = rotorA._1 * bivectorB.e3_no;
	this->e3_ni = rotorA._1 * bivectorB.e3_ni;
	this->no_ni = rotorA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA.no_ni * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e1_e2_e3 + rotorA.e2_ni * trivectorB.e1_e2_no + rotorA.e2_no * trivectorB.e1_e2_ni + rotorA.e3_ni * trivectorB.e1_e3_no + rotorA.e3_no * trivectorB.e1_e3_ni;
	this->e2 = rotorA.no_ni * trivectorB.e2_no_ni + rotorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * trivectorB.e1_e2_ni + rotorA.e3_ni * trivectorB.e2_e3_no + rotorA.e3_no * trivectorB.e2_e3_ni;
	this->e3 = rotorA.no_ni * trivectorB.e3_no_ni + (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e2_e3_ni;
	this->no = (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_e3 * trivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e2_no_ni + (-1.0) * rotorA.e3_no * trivectorB.e3_no_ni;
	this->ni = (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e1_e3_ni + rotorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e2_e3_ni + rotorA.e2_ni * trivectorB.e2_no_ni + rotorA.e3_ni * trivectorB.e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = rotorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = rotorA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = rotorA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = rotorA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = rotorA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = rotorA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = rotorA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = rotorA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = rotorA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.no_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e1_e2_e3_no + rotorA.e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e3 = rotorA.no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * quadvectorB.e1_e2_e3_ni;
	this->e1_no = (-1.0) * rotorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * rotorA.e2_e3 * quadvectorB.e1_e2_e3_ni + rotorA.e2_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = rotorA.no_ni * quadvectorB.e2_e3_no_ni + rotorA.e1_ni * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e2_e3_ni;
	this->e2_no = rotorA.e1_e3 * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = rotorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e3_no_ni + rotorA.e2_no * quadvectorB.e2_e3_no_ni;
	this->e3_ni = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * quadvectorB.e2_e3_no_ni;
	this->no_ni = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_e3 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = rotorA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = rotorA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = rotorA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = rotorA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::InnerProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * rotorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = rotorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = rotorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * rotorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * rotorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * rotorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = rotorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = rotorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = rotorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + rotorA.no_ni * multivectorB.no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3 + rotorA.e1_ni * multivectorB.e1_no + rotorA.e1_no * multivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3 + rotorA.e2_ni * multivectorB.e2_no + rotorA.e2_no * multivectorB.e2_ni + rotorA.e3_ni * multivectorB.e3_no + rotorA.e3_no * multivectorB.e3_ni;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.no_ni * multivectorB.e1_no_ni + rotorA.e1_e2 * multivectorB.e2 + rotorA.e1_e3 * multivectorB.e3 + (-1.0) * rotorA.e1_ni * multivectorB.no + (-1.0) * rotorA.e1_no * multivectorB.ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3 + rotorA.e2_ni * multivectorB.e1_e2_no + rotorA.e2_no * multivectorB.e1_e2_ni + rotorA.e3_ni * multivectorB.e1_e3_no + rotorA.e3_no * multivectorB.e1_e3_ni;
	this->e2 = rotorA._1 * multivectorB.e2 + rotorA.no_ni * multivectorB.e2_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1 + rotorA.e1_e3 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_ni + rotorA.e2_e3 * multivectorB.e3 + (-1.0) * rotorA.e2_ni * multivectorB.no + (-1.0) * rotorA.e2_no * multivectorB.ni + rotorA.e3_ni * multivectorB.e2_e3_no + rotorA.e3_no * multivectorB.e2_e3_ni;
	this->e3 = rotorA._1 * multivectorB.e3 + rotorA.no_ni * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_e3 * multivectorB.e1 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2 + (-1.0) * rotorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.no + (-1.0) * rotorA.e3_no * multivectorB.ni;
	this->no = rotorA._1 * multivectorB.no + (-1.0) * rotorA.no_ni * multivectorB.no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1 + (-1.0) * rotorA.e1_no * multivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e2 + (-1.0) * rotorA.e2_no * multivectorB.e2_no_ni + (-1.0) * rotorA.e3_no * multivectorB.e3 + (-1.0) * rotorA.e3_no * multivectorB.e3_no_ni;
	this->ni = rotorA._1 * multivectorB.ni + rotorA.no_ni * multivectorB.ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1 + rotorA.e1_ni * multivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * rotorA.e2_ni * multivectorB.e2 + rotorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * rotorA.e3_ni * multivectorB.e3 + rotorA.e3_ni * multivectorB.e3_no_ni;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.no_ni * multivectorB.e1_e2_no_ni + rotorA.e1_e2 * multivectorB._1 + rotorA.e3_ni * multivectorB.e1_e2_e3_no + rotorA.e3_no * multivectorB.e1_e2_e3_ni;
	this->e1_e3 = rotorA._1 * multivectorB.e1_e3 + rotorA.no_ni * multivectorB.e1_e3_no_ni + rotorA.e1_e3 * multivectorB._1 + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e2_e3_ni;
	this->e1_no = rotorA._1 * multivectorB.e1_no + rotorA.e1_no * multivectorB._1 + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * multivectorB.e1_e3_no_ni;
	this->e1_ni = rotorA._1 * multivectorB.e1_ni + rotorA.e1_ni * multivectorB._1 + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_ni + rotorA.e2_ni * multivectorB.e1_e2_no_ni + rotorA.e3_ni * multivectorB.e1_e3_no_ni;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.no_ni * multivectorB.e2_e3_no_ni + rotorA.e1_ni * multivectorB.e1_e2_e3_no + rotorA.e1_no * multivectorB.e1_e2_e3_ni + rotorA.e2_e3 * multivectorB._1;
	this->e2_no = rotorA._1 * multivectorB.e2_no + rotorA.e1_e3 * multivectorB.e1_e2_e3_no + rotorA.e1_no * multivectorB.e1_e2_no_ni + rotorA.e2_no * multivectorB._1 + (-1.0) * rotorA.e3_no * multivectorB.e2_e3_no_ni;
	this->e2_ni = rotorA._1 * multivectorB.e2_ni + rotorA.e1_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_no_ni + rotorA.e2_ni * multivectorB._1 + rotorA.e3_ni * multivectorB.e2_e3_no_ni;
	this->e3_no = rotorA._1 * multivectorB.e3_no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_no + rotorA.e1_no * multivectorB.e1_e3_no_ni + rotorA.e2_no * multivectorB.e2_e3_no_ni + rotorA.e3_no * multivectorB._1;
	this->e3_ni = rotorA._1 * multivectorB.e3_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * multivectorB.e2_e3_no_ni + rotorA.e3_ni * multivectorB._1;
	this->no_ni = rotorA._1 * multivectorB.no_ni + rotorA.no_ni * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3 + rotorA.no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_no = rotorA._1 * multivectorB.e1_e2_no + (-1.0) * rotorA.e3_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_ni = rotorA._1 * multivectorB.e1_e2_ni + rotorA.e3_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_no = rotorA._1 * multivectorB.e1_e3_no + rotorA.e2_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_ni = rotorA._1 * multivectorB.e1_e3_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_no_ni = rotorA._1 * multivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3_no = rotorA._1 * multivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_e3_no_ni;
	this->e2_e3_ni = rotorA._1 * multivectorB.e2_e3_ni + rotorA.e1_ni * multivectorB.e1_e2_e3_no_ni;
	this->e2_no_ni = rotorA._1 * multivectorB.e2_no_ni + rotorA.e1_e3 * multivectorB.e1_e2_e3_no_ni;
	this->e3_no_ni = rotorA._1 * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = rotorA._1 * multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = rotorA._1 * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = rotorA._1 * multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = rotorA._1 * multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = rotorA._1 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = rotorA._1 * multivectorB.e1_e2_e3_no_ni;
}

void Multivector::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + rotorA.no_ni * rotorB.no_ni + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e1_e3 * rotorB.e1_e3 + rotorA.e1_ni * rotorB.e1_no + rotorA.e1_no * rotorB.e1_ni + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + rotorA.e2_ni * rotorB.e2_no + rotorA.e2_no * rotorB.e2_ni + rotorA.e3_ni * rotorB.e3_no + rotorA.e3_no * rotorB.e3_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e1_e3 = rotorA._1 * rotorB.e1_e3 + rotorA.e1_e3 * rotorB._1;
	this->e1_no = rotorA._1 * rotorB.e1_no + rotorA.e1_no * rotorB._1;
	this->e1_ni = rotorA._1 * rotorB.e1_ni + rotorA.e1_ni * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e2_no = rotorA._1 * rotorB.e2_no + rotorA.e2_no * rotorB._1;
	this->e2_ni = rotorA._1 * rotorB.e2_ni + rotorA.e2_ni * rotorB._1;
	this->e3_no = rotorA._1 * rotorB.e3_no + rotorA.e3_no * rotorB._1;
	this->e3_ni = rotorA._1 * rotorB.e3_ni + rotorA.e3_ni * rotorB._1;
	this->no_ni = rotorA._1 * rotorB.no_ni + rotorA.no_ni * rotorB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * multivectorB.e1_e3;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->e3_no = scalarA._1 * multivectorB.e3_no;
	this->e3_ni = scalarA._1 * multivectorB.e3_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * multivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * multivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * multivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * multivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * multivectorB.e3_no_ni;
	this->e1_e2_e3_no = scalarA._1 * multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = scalarA._1 * multivectorB.e1_e2_e3_no_ni;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e1_e3 = vectorA.e1 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e1;
	this->e1_no = vectorA.e1 * vectorB.no + (-1.0) * vectorA.no * vectorB.e1;
	this->e1_ni = vectorA.e1 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e2_no = vectorA.e2 * vectorB.no + (-1.0) * vectorA.no * vectorB.e2;
	this->e2_ni = vectorA.e2 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e2;
	this->e3_no = vectorA.e3 * vectorB.no + (-1.0) * vectorA.no * vectorB.e3;
	this->e3_ni = vectorA.e3 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e3;
	this->no_ni = (-1.0) * vectorA.ni * vectorB.no + vectorA.no * vectorB.ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + (-1.0) * vectorA.e2 * bivectorB.e1_e3 + vectorA.e3 * bivectorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e2_no + vectorA.no * bivectorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e2_ni + vectorA.ni * bivectorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * bivectorB.no_ni + vectorA.ni * bivectorB.e3_no + (-1.0) * vectorA.no * bivectorB.e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = vectorA.e1 * trivectorB.e2_e3_no + (-1.0) * vectorA.e2 * trivectorB.e1_e3_no + vectorA.e3 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_e3;
	this->e1_e2_e3_ni = vectorA.e1 * trivectorB.e2_e3_ni + (-1.0) * vectorA.e2 * trivectorB.e1_e3_ni + vectorA.e3 * trivectorB.e1_e2_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_e3;
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3_no_ni = vectorA.e1 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + vectorA.no * trivectorB.e1_e3_ni;
	this->e2_e3_no_ni = vectorA.e2 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e2_no_ni + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + vectorA.no * trivectorB.e2_e3_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = vectorA.e1 * quadvectorB.e2_e3_no_ni + (-1.0) * vectorA.e2 * quadvectorB.e1_e3_no_ni + vectorA.e3 * quadvectorB.e1_e2_no_ni + vectorA.ni * quadvectorB.e1_e2_e3_no + (-1.0) * vectorA.no * quadvectorB.e1_e2_e3_ni;
}

void Multivector::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * multivectorB._1;
	this->e2 = vectorA.e2 * multivectorB._1;
	this->e3 = vectorA.e3 * multivectorB._1;
	this->no = vectorA.no * multivectorB._1;
	this->ni = vectorA.ni * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1;
	this->e1_e3 = vectorA.e1 * multivectorB.e3 + (-1.0) * vectorA.e3 * multivectorB.e1;
	this->e1_no = vectorA.e1 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e1;
	this->e1_ni = vectorA.e1 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e1;
	this->e2_e3 = vectorA.e2 * multivectorB.e3 + (-1.0) * vectorA.e3 * multivectorB.e2;
	this->e2_no = vectorA.e2 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e2;
	this->e2_ni = vectorA.e2 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e2;
	this->e3_no = vectorA.e3 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e3;
	this->e3_ni = vectorA.e3 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e3;
	this->no_ni = (-1.0) * vectorA.ni * multivectorB.no + vectorA.no * multivectorB.ni;
	this->e1_e2_e3 = vectorA.e1 * multivectorB.e2_e3 + (-1.0) * vectorA.e2 * multivectorB.e1_e3 + vectorA.e3 * multivectorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * multivectorB.e2_no + (-1.0) * vectorA.e2 * multivectorB.e1_no + vectorA.no * multivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * multivectorB.e2_ni + (-1.0) * vectorA.e2 * multivectorB.e1_ni + vectorA.ni * multivectorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * multivectorB.e3_no + (-1.0) * vectorA.e3 * multivectorB.e1_no + vectorA.no * multivectorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * multivectorB.e3_ni + (-1.0) * vectorA.e3 * multivectorB.e1_ni + vectorA.ni * multivectorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * multivectorB.no_ni + vectorA.ni * multivectorB.e1_no + (-1.0) * vectorA.no * multivectorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * multivectorB.e3_no + (-1.0) * vectorA.e3 * multivectorB.e2_no + vectorA.no * multivectorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * multivectorB.e3_ni + (-1.0) * vectorA.e3 * multivectorB.e2_ni + vectorA.ni * multivectorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * multivectorB.no_ni + vectorA.ni * multivectorB.e2_no + (-1.0) * vectorA.no * multivectorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * multivectorB.no_ni + vectorA.ni * multivectorB.e3_no + (-1.0) * vectorA.no * multivectorB.e3_ni;
	this->e1_e2_e3_no = vectorA.e1 * multivectorB.e2_e3_no + (-1.0) * vectorA.e2 * multivectorB.e1_e3_no + vectorA.e3 * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_e3;
	this->e1_e2_e3_ni = vectorA.e1 * multivectorB.e2_e3_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e3_ni + vectorA.e3 * multivectorB.e1_e2_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_e3;
	this->e1_e2_no_ni = vectorA.e1 * multivectorB.e2_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + vectorA.no * multivectorB.e1_e2_ni;
	this->e1_e3_no_ni = vectorA.e1 * multivectorB.e3_no_ni + (-1.0) * vectorA.e3 * multivectorB.e1_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e3_no + vectorA.no * multivectorB.e1_e3_ni;
	this->e2_e3_no_ni = vectorA.e2 * multivectorB.e3_no_ni + (-1.0) * vectorA.e3 * multivectorB.e2_no_ni + (-1.0) * vectorA.ni * multivectorB.e2_e3_no + vectorA.no * multivectorB.e2_e3_ni;
	this->e1_e2_e3_no_ni = vectorA.e1 * multivectorB.e2_e3_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e3_no_ni + vectorA.e3 * multivectorB.e1_e2_no_ni + vectorA.ni * multivectorB.e1_e2_e3_no + (-1.0) * vectorA.no * multivectorB.e1_e2_e3_ni;
}

void Multivector::OuterProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1;
	this->e2 = vectorA.e2 * rotorB._1;
	this->e3 = vectorA.e3 * rotorB._1;
	this->no = vectorA.no * rotorB._1;
	this->ni = vectorA.ni * rotorB._1;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.e1 * rotorB.e2_e3 + (-1.0) * vectorA.e2 * rotorB.e1_e3 + vectorA.e3 * rotorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * rotorB.e2_no + (-1.0) * vectorA.e2 * rotorB.e1_no + vectorA.no * rotorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * rotorB.e2_ni + (-1.0) * vectorA.e2 * rotorB.e1_ni + vectorA.ni * rotorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * rotorB.e3_no + (-1.0) * vectorA.e3 * rotorB.e1_no + vectorA.no * rotorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * rotorB.e3_ni + (-1.0) * vectorA.e3 * rotorB.e1_ni + vectorA.ni * rotorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * rotorB.no_ni + vectorA.ni * rotorB.e1_no + (-1.0) * vectorA.no * rotorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * rotorB.e3_no + (-1.0) * vectorA.e3 * rotorB.e2_no + vectorA.no * rotorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * rotorB.e3_ni + (-1.0) * vectorA.e3 * rotorB.e2_ni + vectorA.ni * rotorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * rotorB.no_ni + vectorA.ni * rotorB.e2_no + (-1.0) * vectorA.no * rotorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * rotorB.no_ni + vectorA.ni * rotorB.e3_no + (-1.0) * vectorA.no * rotorB.e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + (-1.0) * bivectorA.e1_e3 * vectorB.e2 + bivectorA.e2_e3 * vectorB.e1;
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_e3_no = bivectorA.e1_e3 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e3 + bivectorA.e3_no * vectorB.e1;
	this->e1_e3_ni = bivectorA.e1_e3 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_e3_no = bivectorA.e2_e3 * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.e3 + bivectorA.e3_no * vectorB.e2;
	this->e2_e3_ni = bivectorA.e2_e3 * vectorB.ni + (-1.0) * bivectorA.e2_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
	this->e3_no_ni = (-1.0) * bivectorA.e3_ni * vectorB.no + bivectorA.e3_no * vectorB.ni + bivectorA.no_ni * vectorB.e3;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = bivectorA.e1_e2 * bivectorB.e3_no + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_no + bivectorA.e1_no * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_no + (-1.0) * bivectorA.e2_no * bivectorB.e1_e3 + bivectorA.e3_no * bivectorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * bivectorB.e3_ni + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_ni + bivectorA.e1_ni * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_e3 + bivectorA.e3_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e3_no + (-1.0) * bivectorA.e1_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e1_no + bivectorA.e3_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * bivectorB.no_ni + bivectorA.e2_ni * bivectorB.e3_no + (-1.0) * bivectorA.e2_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e2_no + bivectorA.e3_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.e2_e3;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = bivectorA.e1_e2 * trivectorB.e3_no_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e2_e3_no + bivectorA.e1_no * trivectorB.e2_e3_ni + bivectorA.e2_e3 * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e1_e2_no + bivectorA.e3_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_e2_e3;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1;
	this->e1_e3 = bivectorA.e1_e3 * multivectorB._1;
	this->e1_no = bivectorA.e1_no * multivectorB._1;
	this->e1_ni = bivectorA.e1_ni * multivectorB._1;
	this->e2_e3 = bivectorA.e2_e3 * multivectorB._1;
	this->e2_no = bivectorA.e2_no * multivectorB._1;
	this->e2_ni = bivectorA.e2_ni * multivectorB._1;
	this->e3_no = bivectorA.e3_no * multivectorB._1;
	this->e3_ni = bivectorA.e3_ni * multivectorB._1;
	this->no_ni = bivectorA.no_ni * multivectorB._1;
	this->e1_e2_e3 = bivectorA.e1_e2 * multivectorB.e3 + (-1.0) * bivectorA.e1_e3 * multivectorB.e2 + bivectorA.e2_e3 * multivectorB.e1;
	this->e1_e2_no = bivectorA.e1_e2 * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.e2 + bivectorA.e2_no * multivectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * multivectorB.ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2 + bivectorA.e2_ni * multivectorB.e1;
	this->e1_e3_no = bivectorA.e1_e3 * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.e3 + bivectorA.e3_no * multivectorB.e1;
	this->e1_e3_ni = bivectorA.e1_e3 * multivectorB.ni + (-1.0) * bivectorA.e1_ni * multivectorB.e3 + bivectorA.e3_ni * multivectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * multivectorB.no + bivectorA.e1_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e1;
	this->e2_e3_no = bivectorA.e2_e3 * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.e3 + bivectorA.e3_no * multivectorB.e2;
	this->e2_e3_ni = bivectorA.e2_e3 * multivectorB.ni + (-1.0) * bivectorA.e2_ni * multivectorB.e3 + bivectorA.e3_ni * multivectorB.e2;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * multivectorB.no + bivectorA.e2_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e2;
	this->e3_no_ni = (-1.0) * bivectorA.e3_ni * multivectorB.no + bivectorA.e3_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e3;
	this->e1_e2_e3_no = bivectorA.e1_e2 * multivectorB.e3_no + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_no + bivectorA.e1_no * multivectorB.e2_e3 + bivectorA.e2_e3 * multivectorB.e1_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e3 + bivectorA.e3_no * multivectorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * multivectorB.e3_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_ni + bivectorA.e1_ni * multivectorB.e2_e3 + bivectorA.e2_e3 * multivectorB.e1_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e3 + bivectorA.e3_ni * multivectorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * multivectorB.no_ni + bivectorA.e1_ni * multivectorB.e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + bivectorA.e2_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * multivectorB.no_ni + bivectorA.e1_ni * multivectorB.e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_no + bivectorA.e3_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * multivectorB.no_ni + bivectorA.e2_ni * multivectorB.e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e2_no + bivectorA.e3_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB.e2_e3;
	this->e1_e2_e3_no_ni = bivectorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2_e3_no + bivectorA.e1_no * multivectorB.e2_e3_ni + bivectorA.e2_e3 * multivectorB.e1_no_ni + bivectorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e2_no + bivectorA.e3_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1_e2_e3;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e1_e3 = bivectorA.e1_e3 * rotorB._1;
	this->e1_no = bivectorA.e1_no * rotorB._1;
	this->e1_ni = bivectorA.e1_ni * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e2_no = bivectorA.e2_no * rotorB._1;
	this->e2_ni = bivectorA.e2_ni * rotorB._1;
	this->e3_no = bivectorA.e3_no * rotorB._1;
	this->e3_ni = bivectorA.e3_ni * rotorB._1;
	this->no_ni = bivectorA.no_ni * rotorB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = bivectorA.e1_e2 * rotorB.e3_no + (-1.0) * bivectorA.e1_e3 * rotorB.e2_no + bivectorA.e1_no * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_no + (-1.0) * bivectorA.e2_no * rotorB.e1_e3 + bivectorA.e3_no * rotorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * rotorB.e3_ni + (-1.0) * bivectorA.e1_e3 * rotorB.e2_ni + bivectorA.e1_ni * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_ni + (-1.0) * bivectorA.e2_ni * rotorB.e1_e3 + bivectorA.e3_ni * rotorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * rotorB.no_ni + bivectorA.e1_ni * rotorB.e2_no + (-1.0) * bivectorA.e1_no * rotorB.e2_ni + (-1.0) * bivectorA.e2_ni * rotorB.e1_no + bivectorA.e2_no * rotorB.e1_ni + bivectorA.no_ni * rotorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * rotorB.no_ni + bivectorA.e1_ni * rotorB.e3_no + (-1.0) * bivectorA.e1_no * rotorB.e3_ni + (-1.0) * bivectorA.e3_ni * rotorB.e1_no + bivectorA.e3_no * rotorB.e1_ni + bivectorA.no_ni * rotorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * rotorB.no_ni + bivectorA.e2_ni * rotorB.e3_no + (-1.0) * bivectorA.e2_no * rotorB.e3_ni + (-1.0) * bivectorA.e3_ni * rotorB.e2_no + bivectorA.e3_no * rotorB.e2_ni + bivectorA.no_ni * rotorB.e2_e3;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = trivectorA.e1_e2_e3 * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.e3 + trivectorA.e1_e3_no * vectorB.e2 + (-1.0) * trivectorA.e2_e3_no * vectorB.e1;
	this->e1_e2_e3_ni = trivectorA.e1_e2_e3 * vectorB.ni + (-1.0) * trivectorA.e1_e2_ni * vectorB.e3 + trivectorA.e1_e3_ni * vectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * vectorB.no + trivectorA.e1_e3_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e1;
	this->e2_e3_no_ni = (-1.0) * trivectorA.e2_e3_ni * vectorB.no + trivectorA.e2_e3_no * vectorB.ni + trivectorA.e2_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * bivectorB.no_ni + trivectorA.e1_e2_ni * bivectorB.e3_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e2_no + trivectorA.e1_e3_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.e2_e3 + trivectorA.e2_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_e3 + trivectorA.e3_no_ni * bivectorB.e1_e2;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * multivectorB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * multivectorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * multivectorB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * multivectorB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * multivectorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * multivectorB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * multivectorB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * multivectorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * multivectorB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no = trivectorA.e1_e2_e3 * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e3 + trivectorA.e1_e3_no * multivectorB.e2 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1;
	this->e1_e2_e3_ni = trivectorA.e1_e2_e3 * multivectorB.ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e3 + trivectorA.e1_e3_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * multivectorB.no + trivectorA.e1_e3_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e3 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1;
	this->e2_e3_no_ni = (-1.0) * trivectorA.e2_e3_ni * multivectorB.no + trivectorA.e2_e3_no * multivectorB.ni + trivectorA.e2_no_ni * multivectorB.e3 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * multivectorB.no_ni + trivectorA.e1_e2_ni * multivectorB.e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e2_no + trivectorA.e1_e3_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB.e2_e3 + trivectorA.e2_e3_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e3 + trivectorA.e3_no_ni * multivectorB.e1_e2;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * rotorB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * rotorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * rotorB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * rotorB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * rotorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * rotorB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * rotorB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * rotorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * rotorB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * rotorB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * rotorB.no_ni + trivectorA.e1_e2_ni * rotorB.e3_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * rotorB.e2_no + trivectorA.e1_e3_no * rotorB.e2_ni + trivectorA.e1_no_ni * rotorB.e2_e3 + trivectorA.e2_e3_ni * rotorB.e1_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * rotorB.e1_e3 + trivectorA.e3_no_ni * rotorB.e1_e2;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + quadvectorA.e1_e2_e3_no * vectorB.ni + quadvectorA.e1_e2_no_ni * vectorB.e3 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e2 + quadvectorA.e2_e3_no_ni * vectorB.e1;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * multivectorB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * multivectorB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * multivectorB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * multivectorB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.no + quadvectorA.e1_e2_e3_no * multivectorB.ni + quadvectorA.e1_e2_no_ni * multivectorB.e3 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2 + quadvectorA.e2_e3_no_ni * multivectorB.e1;
}

void Multivector::OuterProduct(const Quadvector& quadvectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * rotorB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * rotorB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * rotorB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * rotorB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * rotorB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = multivectorA.e1_e3 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->e3_no = multivectorA.e3_no * scalarB._1;
	this->e3_ni = multivectorA.e3_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = multivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = multivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = multivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = multivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = multivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = multivectorA._1 * vectorB.e1;
	this->e2 = multivectorA._1 * vectorB.e2;
	this->e3 = multivectorA._1 * vectorB.e3;
	this->no = multivectorA._1 * vectorB.no;
	this->ni = multivectorA._1 * vectorB.ni;
	this->e1_e2 = (-1.0) * multivectorA.e2 * vectorB.e1 + multivectorA.e1 * vectorB.e2;
	this->e1_e3 = multivectorA.e1 * vectorB.e3 + (-1.0) * multivectorA.e3 * vectorB.e1;
	this->e1_no = multivectorA.e1 * vectorB.no + (-1.0) * multivectorA.no * vectorB.e1;
	this->e1_ni = multivectorA.e1 * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e1;
	this->e2_e3 = multivectorA.e2 * vectorB.e3 + (-1.0) * multivectorA.e3 * vectorB.e2;
	this->e2_no = multivectorA.e2 * vectorB.no + (-1.0) * multivectorA.no * vectorB.e2;
	this->e2_ni = multivectorA.e2 * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e2;
	this->e3_no = multivectorA.e3 * vectorB.no + (-1.0) * multivectorA.no * vectorB.e3;
	this->e3_ni = multivectorA.e3 * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e3;
	this->no_ni = (-1.0) * multivectorA.ni * vectorB.no + multivectorA.no * vectorB.ni;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e3 * vectorB.e2 + multivectorA.e2_e3 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e3;
	this->e1_e2_no = (-1.0) * multivectorA.e1_no * vectorB.e2 + multivectorA.e2_no * vectorB.e1 + multivectorA.e1_e2 * vectorB.no;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_ni * vectorB.e2 + multivectorA.e2_ni * vectorB.e1 + multivectorA.e1_e2 * vectorB.ni;
	this->e1_e3_no = multivectorA.e1_e3 * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e3 + multivectorA.e3_no * vectorB.e1;
	this->e1_e3_ni = multivectorA.e1_e3 * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e3 + multivectorA.e3_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * multivectorA.e1_ni * vectorB.no + multivectorA.e1_no * vectorB.ni + multivectorA.no_ni * vectorB.e1;
	this->e2_e3_no = multivectorA.e2_e3 * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.e3 + multivectorA.e3_no * vectorB.e2;
	this->e2_e3_ni = multivectorA.e2_e3 * vectorB.ni + (-1.0) * multivectorA.e2_ni * vectorB.e3 + multivectorA.e3_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * multivectorA.e2_ni * vectorB.no + multivectorA.e2_no * vectorB.ni + multivectorA.no_ni * vectorB.e2;
	this->e3_no_ni = (-1.0) * multivectorA.e3_ni * vectorB.no + multivectorA.e3_no * vectorB.ni + multivectorA.no_ni * vectorB.e3;
	this->e1_e2_e3_no = multivectorA.e1_e3_no * vectorB.e2 + (-1.0) * multivectorA.e2_e3_no * vectorB.e1 + multivectorA.e1_e2_e3 * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.e3;
	this->e1_e2_e3_ni = multivectorA.e1_e3_ni * vectorB.e2 + (-1.0) * multivectorA.e2_e3_ni * vectorB.e1 + multivectorA.e1_e2_e3 * vectorB.ni + (-1.0) * multivectorA.e1_e2_ni * vectorB.e3;
	this->e1_e2_no_ni = multivectorA.e1_no_ni * vectorB.e2 + (-1.0) * multivectorA.e2_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * vectorB.no + multivectorA.e1_e3_no * vectorB.ni + multivectorA.e1_no_ni * vectorB.e3 + (-1.0) * multivectorA.e3_no_ni * vectorB.e1;
	this->e2_e3_no_ni = (-1.0) * multivectorA.e2_e3_ni * vectorB.no + multivectorA.e2_e3_no * vectorB.ni + multivectorA.e2_no_ni * vectorB.e3 + (-1.0) * multivectorA.e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * vectorB.e2 + multivectorA.e2_e3_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.no + multivectorA.e1_e2_e3_no * vectorB.ni + multivectorA.e1_e2_no_ni * vectorB.e3;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2;
	this->e1_e3 = multivectorA._1 * bivectorB.e1_e3;
	this->e1_no = multivectorA._1 * bivectorB.e1_no;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3;
	this->e2_no = multivectorA._1 * bivectorB.e2_no;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni;
	this->e3_no = multivectorA._1 * bivectorB.e3_no;
	this->e3_ni = multivectorA._1 * bivectorB.e3_ni;
	this->no_ni = multivectorA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = (-1.0) * multivectorA.e2 * bivectorB.e1_e3 + multivectorA.e1 * bivectorB.e2_e3 + multivectorA.e3 * bivectorB.e1_e2;
	this->e1_e2_no = (-1.0) * multivectorA.e2 * bivectorB.e1_no + multivectorA.e1 * bivectorB.e2_no + multivectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = (-1.0) * multivectorA.e2 * bivectorB.e1_ni + multivectorA.e1 * bivectorB.e2_ni + multivectorA.ni * bivectorB.e1_e2;
	this->e1_e3_no = multivectorA.e1 * bivectorB.e3_no + (-1.0) * multivectorA.e3 * bivectorB.e1_no + multivectorA.no * bivectorB.e1_e3;
	this->e1_e3_ni = multivectorA.e1 * bivectorB.e3_ni + (-1.0) * multivectorA.e3 * bivectorB.e1_ni + multivectorA.ni * bivectorB.e1_e3;
	this->e1_no_ni = multivectorA.e1 * bivectorB.no_ni + multivectorA.ni * bivectorB.e1_no + (-1.0) * multivectorA.no * bivectorB.e1_ni;
	this->e2_e3_no = multivectorA.e2 * bivectorB.e3_no + (-1.0) * multivectorA.e3 * bivectorB.e2_no + multivectorA.no * bivectorB.e2_e3;
	this->e2_e3_ni = multivectorA.e2 * bivectorB.e3_ni + (-1.0) * multivectorA.e3 * bivectorB.e2_ni + multivectorA.ni * bivectorB.e2_e3;
	this->e2_no_ni = multivectorA.e2 * bivectorB.no_ni + multivectorA.ni * bivectorB.e2_no + (-1.0) * multivectorA.no * bivectorB.e2_ni;
	this->e3_no_ni = multivectorA.e3 * bivectorB.no_ni + multivectorA.ni * bivectorB.e3_no + (-1.0) * multivectorA.no * bivectorB.e3_ni;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e1_e3 * bivectorB.e2_no + multivectorA.e1_no * bivectorB.e2_e3 + multivectorA.e2_e3 * bivectorB.e1_no + (-1.0) * multivectorA.e2_no * bivectorB.e1_e3 + multivectorA.e3_no * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.e3_no;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e1_e3 * bivectorB.e2_ni + multivectorA.e1_ni * bivectorB.e2_e3 + multivectorA.e2_e3 * bivectorB.e1_ni + (-1.0) * multivectorA.e2_ni * bivectorB.e1_e3 + multivectorA.e3_ni * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_no * bivectorB.e2_ni + (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + multivectorA.e2_no * bivectorB.e1_ni + multivectorA.e1_e2 * bivectorB.no_ni + multivectorA.no_ni * bivectorB.e1_e2;
	this->e1_e3_no_ni = multivectorA.e1_e3 * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_no * bivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * bivectorB.e1_no + multivectorA.e3_no * bivectorB.e1_ni + multivectorA.no_ni * bivectorB.e1_e3;
	this->e2_e3_no_ni = multivectorA.e2_e3 * bivectorB.no_ni + multivectorA.e2_ni * bivectorB.e3_no + (-1.0) * multivectorA.e2_no * bivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * bivectorB.e2_no + multivectorA.e3_no * bivectorB.e2_ni + multivectorA.no_ni * bivectorB.e2_e3;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e2_no + multivectorA.e1_e3_no * bivectorB.e2_ni + multivectorA.e1_no_ni * bivectorB.e2_e3 + multivectorA.e2_e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_e3 + multivectorA.e3_no_ni * bivectorB.e1_e2 + multivectorA.e1_e2_e3 * bivectorB.no_ni + multivectorA.e1_e2_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e3_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = multivectorA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = multivectorA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = multivectorA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = multivectorA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = multivectorA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = multivectorA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e2 * trivectorB.e1_e3_no + multivectorA.e1 * trivectorB.e2_e3_no + multivectorA.e3 * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_e3;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e2 * trivectorB.e1_e3_ni + multivectorA.e1 * trivectorB.e2_e3_ni + multivectorA.e3 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e2_e3;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e2 * trivectorB.e1_no_ni + multivectorA.e1 * trivectorB.e2_no_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + multivectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3_no_ni = multivectorA.e1 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * trivectorB.e1_no_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e3_no + multivectorA.no * trivectorB.e1_e3_ni;
	this->e2_e3_no_ni = multivectorA.e2 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.ni * trivectorB.e2_e3_no + multivectorA.no * trivectorB.e2_e3_ni;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e2_e3_no + multivectorA.e1_no * trivectorB.e2_e3_ni + multivectorA.e2_e3 * trivectorB.e1_no_ni + multivectorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_ni * trivectorB.e1_e2_no + multivectorA.e3_no * trivectorB.e1_e2_ni + multivectorA.e1_e2 * trivectorB.e3_no_ni + multivectorA.no_ni * trivectorB.e1_e2_e3;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = multivectorA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e3_no_ni + multivectorA.e1 * quadvectorB.e2_e3_no_ni + multivectorA.e3 * quadvectorB.e1_e2_no_ni + multivectorA.ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.no * quadvectorB.e1_e2_e3_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e2 * multivectorB._1;
	this->e3 = multivectorA._1 * multivectorB.e3 + multivectorA.e3 * multivectorB._1;
	this->no = multivectorA._1 * multivectorB.no + multivectorA.no * multivectorB._1;
	this->ni = multivectorA._1 * multivectorB.ni + multivectorA.ni * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2 * multivectorB.e1 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1;
	this->e1_e3 = multivectorA._1 * multivectorB.e1_e3 + multivectorA.e1_e3 * multivectorB._1 + multivectorA.e1 * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e1;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + multivectorA.e1_no * multivectorB._1 + multivectorA.e1 * multivectorB.no + (-1.0) * multivectorA.no * multivectorB.e1;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + multivectorA.e1_ni * multivectorB._1 + multivectorA.e1 * multivectorB.ni + (-1.0) * multivectorA.ni * multivectorB.e1;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e2 * multivectorB.e3 + multivectorA.e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e3 * multivectorB.e2;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e2 * multivectorB.no + multivectorA.e2_no * multivectorB._1 + (-1.0) * multivectorA.no * multivectorB.e2;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e2 * multivectorB.ni + multivectorA.e2_ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.e2;
	this->e3_no = multivectorA._1 * multivectorB.e3_no + multivectorA.e3 * multivectorB.no + multivectorA.e3_no * multivectorB._1 + (-1.0) * multivectorA.no * multivectorB.e3;
	this->e3_ni = multivectorA._1 * multivectorB.e3_ni + multivectorA.e3 * multivectorB.ni + multivectorA.e3_ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.e3;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + (-1.0) * multivectorA.ni * multivectorB.no + multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB._1;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e3 * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_e3 + multivectorA.e2_e3 * multivectorB.e1 + multivectorA.e1 * multivectorB.e2_e3 + multivectorA.e3 * multivectorB.e1_e2 + multivectorA.e1_e2 * multivectorB.e3 + multivectorA.e1_e2_e3 * multivectorB._1;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e1 + multivectorA.e1_e2 * multivectorB.no + multivectorA.no * multivectorB.e1_e2 + multivectorA.e1_e2_no * multivectorB._1;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_ni + multivectorA.e1 * multivectorB.e2_ni + multivectorA.e2_ni * multivectorB.e1 + multivectorA.ni * multivectorB.e1_e2 + multivectorA.e1_e2 * multivectorB.ni + multivectorA.e1_e2_ni * multivectorB._1;
	this->e1_e3_no = multivectorA._1 * multivectorB.e1_e3_no + multivectorA.e1_e3 * multivectorB.no + multivectorA.e1_e3_no * multivectorB._1 + (-1.0) * multivectorA.e1_no * multivectorB.e3 + multivectorA.e1 * multivectorB.e3_no + (-1.0) * multivectorA.e3 * multivectorB.e1_no + multivectorA.e3_no * multivectorB.e1 + multivectorA.no * multivectorB.e1_e3;
	this->e1_e3_ni = multivectorA._1 * multivectorB.e1_e3_ni + multivectorA.e1_e3 * multivectorB.ni + multivectorA.e1_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e1_ni * multivectorB.e3 + multivectorA.e1 * multivectorB.e3_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_ni + multivectorA.e3_ni * multivectorB.e1 + multivectorA.ni * multivectorB.e1_e3;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB._1 + multivectorA.e1 * multivectorB.no_ni + multivectorA.ni * multivectorB.e1_no + (-1.0) * multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1;
	this->e2_e3_no = multivectorA._1 * multivectorB.e2_e3_no + multivectorA.e2 * multivectorB.e3_no + multivectorA.e2_e3 * multivectorB.no + multivectorA.e2_e3_no * multivectorB._1 + (-1.0) * multivectorA.e2_no * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_no + multivectorA.e3_no * multivectorB.e2 + multivectorA.no * multivectorB.e2_e3;
	this->e2_e3_ni = multivectorA._1 * multivectorB.e2_e3_ni + multivectorA.e2 * multivectorB.e3_ni + multivectorA.e2_e3 * multivectorB.ni + multivectorA.e2_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e2_ni * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_ni + multivectorA.e3_ni * multivectorB.e2 + multivectorA.ni * multivectorB.e2_e3;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + multivectorA.e2 * multivectorB.no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.no + multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB._1 + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2;
	this->e3_no_ni = multivectorA._1 * multivectorB.e3_no_ni + multivectorA.e3 * multivectorB.no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.no + multivectorA.e3_no * multivectorB.ni + multivectorA.e3_no_ni * multivectorB._1 + multivectorA.ni * multivectorB.e3_no + (-1.0) * multivectorA.no * multivectorB.e3_ni + multivectorA.no_ni * multivectorB.e3;
	this->e1_e2_e3_no = multivectorA._1 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_no + multivectorA.e1_e3_no * multivectorB.e2 + multivectorA.e1_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_no + multivectorA.e2_e3 * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1 + (-1.0) * multivectorA.e2_no * multivectorB.e1_e3 + multivectorA.e3 * multivectorB.e1_e2_no + multivectorA.e3_no * multivectorB.e1_e2 + multivectorA.e1_e2 * multivectorB.e3_no + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3 * multivectorB.no + multivectorA.e1_e2_e3_no * multivectorB._1 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e3;
	this->e1_e2_e3_ni = multivectorA._1 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_ni + multivectorA.e1_e3_ni * multivectorB.e2 + multivectorA.e1_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_ni + multivectorA.e2_e3 * multivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1 + multivectorA.e1 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e3 + multivectorA.e3 * multivectorB.e1_e2_ni + multivectorA.e3_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_e3 + multivectorA.e1_e2 * multivectorB.e3_ni + multivectorA.e1_e2_e3 * multivectorB.ni + multivectorA.e1_e2_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e3;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + multivectorA.e1_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no_ni + multivectorA.e1 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.e1_e2 * multivectorB.no_ni + multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB._1;
	this->e1_e3_no_ni = multivectorA._1 * multivectorB.e1_e3_no_ni + multivectorA.e1_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.no + multivectorA.e1_e3_no * multivectorB.ni + multivectorA.e1_e3_no_ni * multivectorB._1 + multivectorA.e1_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e3_ni + multivectorA.e1_no_ni * multivectorB.e3 + multivectorA.e1 * multivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_no + multivectorA.e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1 + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no + multivectorA.no * multivectorB.e1_e3_ni + multivectorA.no_ni * multivectorB.e1_e3;
	this->e2_e3_no_ni = multivectorA._1 * multivectorB.e2_e3_no_ni + multivectorA.e2 * multivectorB.e3_no_ni + multivectorA.e2_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.no + multivectorA.e2_e3_no * multivectorB.ni + multivectorA.e2_e3_no_ni * multivectorB._1 + multivectorA.e2_ni * multivectorB.e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e3_ni + multivectorA.e2_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e2_no + multivectorA.e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no + multivectorA.no * multivectorB.e2_e3_ni + multivectorA.no_ni * multivectorB.e2_e3;
	this->e1_e2_e3_no_ni = multivectorA._1 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e2_no + multivectorA.e1_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_ni * multivectorB.e2_e3_no + multivectorA.e1_no * multivectorB.e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_no_ni + multivectorA.e2_e3 * multivectorB.e1_no_ni + multivectorA.e2_e3_ni * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_ni + multivectorA.e2_e3_no_ni * multivectorB.e1 + multivectorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e3 + multivectorA.e3 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e2_no + multivectorA.e3_no * multivectorB.e1_e2_ni + multivectorA.e3_no_ni * multivectorB.e1_e2 + multivectorA.ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3_ni + multivectorA.no_ni * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.no + multivectorA.e1_e2_e3_no * multivectorB.ni + multivectorA.e1_e2_e3_no_ni * multivectorB._1 + multivectorA.e1_e2_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e3_ni + multivectorA.e1_e2_no_ni * multivectorB.e3;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1;
	this->e1 = multivectorA.e1 * rotorB._1;
	this->e2 = multivectorA.e2 * rotorB._1;
	this->e3 = multivectorA.e3 * rotorB._1;
	this->no = multivectorA.no * rotorB._1;
	this->ni = multivectorA.ni * rotorB._1;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB._1;
	this->e1_e3 = multivectorA._1 * rotorB.e1_e3 + multivectorA.e1_e3 * rotorB._1;
	this->e1_no = multivectorA._1 * rotorB.e1_no + multivectorA.e1_no * rotorB._1;
	this->e1_ni = multivectorA._1 * rotorB.e1_ni + multivectorA.e1_ni * rotorB._1;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB._1;
	this->e2_no = multivectorA._1 * rotorB.e2_no + multivectorA.e2_no * rotorB._1;
	this->e2_ni = multivectorA._1 * rotorB.e2_ni + multivectorA.e2_ni * rotorB._1;
	this->e3_no = multivectorA._1 * rotorB.e3_no + multivectorA.e3_no * rotorB._1;
	this->e3_ni = multivectorA._1 * rotorB.e3_ni + multivectorA.e3_ni * rotorB._1;
	this->no_ni = multivectorA._1 * rotorB.no_ni + multivectorA.no_ni * rotorB._1;
	this->e1_e2_e3 = (-1.0) * multivectorA.e2 * rotorB.e1_e3 + multivectorA.e1 * rotorB.e2_e3 + multivectorA.e3 * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB._1;
	this->e1_e2_no = (-1.0) * multivectorA.e2 * rotorB.e1_no + multivectorA.e1 * rotorB.e2_no + multivectorA.no * rotorB.e1_e2 + multivectorA.e1_e2_no * rotorB._1;
	this->e1_e2_ni = (-1.0) * multivectorA.e2 * rotorB.e1_ni + multivectorA.e1 * rotorB.e2_ni + multivectorA.ni * rotorB.e1_e2 + multivectorA.e1_e2_ni * rotorB._1;
	this->e1_e3_no = multivectorA.e1_e3_no * rotorB._1 + multivectorA.e1 * rotorB.e3_no + (-1.0) * multivectorA.e3 * rotorB.e1_no + multivectorA.no * rotorB.e1_e3;
	this->e1_e3_ni = multivectorA.e1_e3_ni * rotorB._1 + multivectorA.e1 * rotorB.e3_ni + (-1.0) * multivectorA.e3 * rotorB.e1_ni + multivectorA.ni * rotorB.e1_e3;
	this->e1_no_ni = multivectorA.e1_no_ni * rotorB._1 + multivectorA.e1 * rotorB.no_ni + multivectorA.ni * rotorB.e1_no + (-1.0) * multivectorA.no * rotorB.e1_ni;
	this->e2_e3_no = multivectorA.e2 * rotorB.e3_no + multivectorA.e2_e3_no * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e2_no + multivectorA.no * rotorB.e2_e3;
	this->e2_e3_ni = multivectorA.e2 * rotorB.e3_ni + multivectorA.e2_e3_ni * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e2_ni + multivectorA.ni * rotorB.e2_e3;
	this->e2_no_ni = multivectorA.e2 * rotorB.no_ni + multivectorA.e2_no_ni * rotorB._1 + multivectorA.ni * rotorB.e2_no + (-1.0) * multivectorA.no * rotorB.e2_ni;
	this->e3_no_ni = multivectorA.e3 * rotorB.no_ni + multivectorA.e3_no_ni * rotorB._1 + multivectorA.ni * rotorB.e3_no + (-1.0) * multivectorA.no * rotorB.e3_ni;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e1_e3 * rotorB.e2_no + multivectorA.e1_no * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB.e1_no + (-1.0) * multivectorA.e2_no * rotorB.e1_e3 + multivectorA.e3_no * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB.e3_no + multivectorA.e1_e2_e3_no * rotorB._1;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e1_e3 * rotorB.e2_ni + multivectorA.e1_ni * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB.e1_ni + (-1.0) * multivectorA.e2_ni * rotorB.e1_e3 + multivectorA.e3_ni * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB.e3_ni + multivectorA.e1_e2_e3_ni * rotorB._1;
	this->e1_e2_no_ni = multivectorA.e1_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_no * rotorB.e2_ni + (-1.0) * multivectorA.e2_ni * rotorB.e1_no + multivectorA.e2_no * rotorB.e1_ni + multivectorA.e1_e2 * rotorB.no_ni + multivectorA.no_ni * rotorB.e1_e2 + multivectorA.e1_e2_no_ni * rotorB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3 * rotorB.no_ni + multivectorA.e1_e3_no_ni * rotorB._1 + multivectorA.e1_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_no * rotorB.e3_ni + (-1.0) * multivectorA.e3_ni * rotorB.e1_no + multivectorA.e3_no * rotorB.e1_ni + multivectorA.no_ni * rotorB.e1_e3;
	this->e2_e3_no_ni = multivectorA.e2_e3 * rotorB.no_ni + multivectorA.e2_e3_no_ni * rotorB._1 + multivectorA.e2_ni * rotorB.e3_no + (-1.0) * multivectorA.e2_no * rotorB.e3_ni + (-1.0) * multivectorA.e3_ni * rotorB.e2_no + multivectorA.e3_no * rotorB.e2_ni + multivectorA.no_ni * rotorB.e2_e3;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e2_no + multivectorA.e1_e3_no * rotorB.e2_ni + multivectorA.e1_no_ni * rotorB.e2_e3 + multivectorA.e2_e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * rotorB.e1_e3 + multivectorA.e3_no_ni * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB.no_ni + multivectorA.e1_e2_e3_no_ni * rotorB._1 + multivectorA.e1_e2_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e3_ni;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1;
	this->e2 = rotorA._1 * vectorB.e2;
	this->e3 = rotorA._1 * vectorB.e3;
	this->no = rotorA._1 * vectorB.no;
	this->ni = rotorA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA.e1_e2 * vectorB.e3 + (-1.0) * rotorA.e1_e3 * vectorB.e2 + rotorA.e2_e3 * vectorB.e1;
	this->e1_e2_no = rotorA.e1_e2 * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e2 + rotorA.e2_no * vectorB.e1;
	this->e1_e2_ni = rotorA.e1_e2 * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e2 + rotorA.e2_ni * vectorB.e1;
	this->e1_e3_no = rotorA.e1_e3 * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e3 + rotorA.e3_no * vectorB.e1;
	this->e1_e3_ni = rotorA.e1_e3 * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e3 + rotorA.e3_ni * vectorB.e1;
	this->e1_no_ni = rotorA.no_ni * vectorB.e1 + (-1.0) * rotorA.e1_ni * vectorB.no + rotorA.e1_no * vectorB.ni;
	this->e2_e3_no = rotorA.e2_e3 * vectorB.no + (-1.0) * rotorA.e2_no * vectorB.e3 + rotorA.e3_no * vectorB.e2;
	this->e2_e3_ni = rotorA.e2_e3 * vectorB.ni + (-1.0) * rotorA.e2_ni * vectorB.e3 + rotorA.e3_ni * vectorB.e2;
	this->e2_no_ni = rotorA.no_ni * vectorB.e2 + (-1.0) * rotorA.e2_ni * vectorB.no + rotorA.e2_no * vectorB.ni;
	this->e3_no_ni = rotorA.no_ni * vectorB.e3 + (-1.0) * rotorA.e3_ni * vectorB.no + rotorA.e3_no * vectorB.ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e1_e3 = rotorA._1 * bivectorB.e1_e3;
	this->e1_no = rotorA._1 * bivectorB.e1_no;
	this->e1_ni = rotorA._1 * bivectorB.e1_ni;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e2_no = rotorA._1 * bivectorB.e2_no;
	this->e2_ni = rotorA._1 * bivectorB.e2_ni;
	this->e3_no = rotorA._1 * bivectorB.e3_no;
	this->e3_ni = rotorA._1 * bivectorB.e3_ni;
	this->no_ni = rotorA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA.e1_e2 * bivectorB.e3_no + (-1.0) * rotorA.e1_e3 * bivectorB.e2_no + rotorA.e1_no * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_no + (-1.0) * rotorA.e2_no * bivectorB.e1_e3 + rotorA.e3_no * bivectorB.e1_e2;
	this->e1_e2_e3_ni = rotorA.e1_e2 * bivectorB.e3_ni + (-1.0) * rotorA.e1_e3 * bivectorB.e2_ni + rotorA.e1_ni * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_ni + (-1.0) * rotorA.e2_ni * bivectorB.e1_e3 + rotorA.e3_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = rotorA.no_ni * bivectorB.e1_e2 + rotorA.e1_e2 * bivectorB.no_ni + rotorA.e1_ni * bivectorB.e2_no + (-1.0) * rotorA.e1_no * bivectorB.e2_ni + (-1.0) * rotorA.e2_ni * bivectorB.e1_no + rotorA.e2_no * bivectorB.e1_ni;
	this->e1_e3_no_ni = rotorA.no_ni * bivectorB.e1_e3 + rotorA.e1_e3 * bivectorB.no_ni + rotorA.e1_ni * bivectorB.e3_no + (-1.0) * rotorA.e1_no * bivectorB.e3_ni + (-1.0) * rotorA.e3_ni * bivectorB.e1_no + rotorA.e3_no * bivectorB.e1_ni;
	this->e2_e3_no_ni = rotorA.no_ni * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.no_ni + rotorA.e2_ni * bivectorB.e3_no + (-1.0) * rotorA.e2_no * bivectorB.e3_ni + (-1.0) * rotorA.e3_ni * bivectorB.e2_no + rotorA.e3_no * bivectorB.e2_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = rotorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = rotorA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = rotorA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = rotorA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = rotorA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = rotorA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = rotorA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = rotorA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = rotorA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = rotorA.no_ni * trivectorB.e1_e2_e3 + rotorA.e1_e2 * trivectorB.e3_no_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * rotorA.e1_ni * trivectorB.e2_e3_no + rotorA.e1_no * trivectorB.e2_e3_ni + rotorA.e2_e3 * trivectorB.e1_no_ni + rotorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * trivectorB.e1_e2_no + rotorA.e3_no * trivectorB.e1_e2_ni;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = rotorA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = rotorA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = rotorA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = rotorA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = rotorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1;
	this->e1 = rotorA._1 * multivectorB.e1;
	this->e2 = rotorA._1 * multivectorB.e2;
	this->e3 = rotorA._1 * multivectorB.e3;
	this->no = rotorA._1 * multivectorB.no;
	this->ni = rotorA._1 * multivectorB.ni;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB._1;
	this->e1_e3 = rotorA._1 * multivectorB.e1_e3 + rotorA.e1_e3 * multivectorB._1;
	this->e1_no = rotorA._1 * multivectorB.e1_no + rotorA.e1_no * multivectorB._1;
	this->e1_ni = rotorA._1 * multivectorB.e1_ni + rotorA.e1_ni * multivectorB._1;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB._1;
	this->e2_no = rotorA._1 * multivectorB.e2_no + rotorA.e2_no * multivectorB._1;
	this->e2_ni = rotorA._1 * multivectorB.e2_ni + rotorA.e2_ni * multivectorB._1;
	this->e3_no = rotorA._1 * multivectorB.e3_no + rotorA.e3_no * multivectorB._1;
	this->e3_ni = rotorA._1 * multivectorB.e3_ni + rotorA.e3_ni * multivectorB._1;
	this->no_ni = rotorA._1 * multivectorB.no_ni + rotorA.no_ni * multivectorB._1;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3 + rotorA.e1_e2 * multivectorB.e3 + (-1.0) * rotorA.e1_e3 * multivectorB.e2 + rotorA.e2_e3 * multivectorB.e1;
	this->e1_e2_no = rotorA._1 * multivectorB.e1_e2_no + rotorA.e1_e2 * multivectorB.no + (-1.0) * rotorA.e1_no * multivectorB.e2 + rotorA.e2_no * multivectorB.e1;
	this->e1_e2_ni = rotorA._1 * multivectorB.e1_e2_ni + rotorA.e1_e2 * multivectorB.ni + (-1.0) * rotorA.e1_ni * multivectorB.e2 + rotorA.e2_ni * multivectorB.e1;
	this->e1_e3_no = rotorA._1 * multivectorB.e1_e3_no + rotorA.e1_e3 * multivectorB.no + (-1.0) * rotorA.e1_no * multivectorB.e3 + rotorA.e3_no * multivectorB.e1;
	this->e1_e3_ni = rotorA._1 * multivectorB.e1_e3_ni + rotorA.e1_e3 * multivectorB.ni + (-1.0) * rotorA.e1_ni * multivectorB.e3 + rotorA.e3_ni * multivectorB.e1;
	this->e1_no_ni = rotorA._1 * multivectorB.e1_no_ni + rotorA.no_ni * multivectorB.e1 + (-1.0) * rotorA.e1_ni * multivectorB.no + rotorA.e1_no * multivectorB.ni;
	this->e2_e3_no = rotorA._1 * multivectorB.e2_e3_no + rotorA.e2_e3 * multivectorB.no + (-1.0) * rotorA.e2_no * multivectorB.e3 + rotorA.e3_no * multivectorB.e2;
	this->e2_e3_ni = rotorA._1 * multivectorB.e2_e3_ni + rotorA.e2_e3 * multivectorB.ni + (-1.0) * rotorA.e2_ni * multivectorB.e3 + rotorA.e3_ni * multivectorB.e2;
	this->e2_no_ni = rotorA._1 * multivectorB.e2_no_ni + rotorA.no_ni * multivectorB.e2 + (-1.0) * rotorA.e2_ni * multivectorB.no + rotorA.e2_no * multivectorB.ni;
	this->e3_no_ni = rotorA._1 * multivectorB.e3_no_ni + rotorA.no_ni * multivectorB.e3 + (-1.0) * rotorA.e3_ni * multivectorB.no + rotorA.e3_no * multivectorB.ni;
	this->e1_e2_e3_no = rotorA._1 * multivectorB.e1_e2_e3_no + rotorA.e1_e2 * multivectorB.e3_no + (-1.0) * rotorA.e1_e3 * multivectorB.e2_no + rotorA.e1_no * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB.e1_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e3 + rotorA.e3_no * multivectorB.e1_e2;
	this->e1_e2_e3_ni = rotorA._1 * multivectorB.e1_e2_e3_ni + rotorA.e1_e2 * multivectorB.e3_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_ni + rotorA.e1_ni * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB.e1_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_e3 + rotorA.e3_ni * multivectorB.e1_e2;
	this->e1_e2_no_ni = rotorA._1 * multivectorB.e1_e2_no_ni + rotorA.no_ni * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB.no_ni + rotorA.e1_ni * multivectorB.e2_no + (-1.0) * rotorA.e1_no * multivectorB.e2_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_no + rotorA.e2_no * multivectorB.e1_ni;
	this->e1_e3_no_ni = rotorA._1 * multivectorB.e1_e3_no_ni + rotorA.no_ni * multivectorB.e1_e3 + rotorA.e1_e3 * multivectorB.no_ni + rotorA.e1_ni * multivectorB.e3_no + (-1.0) * rotorA.e1_no * multivectorB.e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_no + rotorA.e3_no * multivectorB.e1_ni;
	this->e2_e3_no_ni = rotorA._1 * multivectorB.e2_e3_no_ni + rotorA.no_ni * multivectorB.e2_e3 + rotorA.e2_e3 * multivectorB.no_ni + rotorA.e2_ni * multivectorB.e3_no + (-1.0) * rotorA.e2_no * multivectorB.e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e2_no + rotorA.e3_no * multivectorB.e2_ni;
	this->e1_e2_e3_no_ni = rotorA._1 * multivectorB.e1_e2_e3_no_ni + rotorA.no_ni * multivectorB.e1_e2_e3 + rotorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * rotorA.e1_ni * multivectorB.e2_e3_no + rotorA.e1_no * multivectorB.e2_e3_ni + rotorA.e2_e3 * multivectorB.e1_no_ni + rotorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_e2_no + rotorA.e3_no * multivectorB.e1_e2_ni;
}

void Multivector::OuterProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e1_e3 = rotorA._1 * rotorB.e1_e3 + rotorA.e1_e3 * rotorB._1;
	this->e1_no = rotorA._1 * rotorB.e1_no + rotorA.e1_no * rotorB._1;
	this->e1_ni = rotorA._1 * rotorB.e1_ni + rotorA.e1_ni * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e2_no = rotorA._1 * rotorB.e2_no + rotorA.e2_no * rotorB._1;
	this->e2_ni = rotorA._1 * rotorB.e2_ni + rotorA.e2_ni * rotorB._1;
	this->e3_no = rotorA._1 * rotorB.e3_no + rotorA.e3_no * rotorB._1;
	this->e3_ni = rotorA._1 * rotorB.e3_ni + rotorA.e3_ni * rotorB._1;
	this->no_ni = rotorA._1 * rotorB.no_ni + rotorA.no_ni * rotorB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA.e1_e2 * rotorB.e3_no + (-1.0) * rotorA.e1_e3 * rotorB.e2_no + rotorA.e1_no * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_no + (-1.0) * rotorA.e2_no * rotorB.e1_e3 + rotorA.e3_no * rotorB.e1_e2;
	this->e1_e2_e3_ni = rotorA.e1_e2 * rotorB.e3_ni + (-1.0) * rotorA.e1_e3 * rotorB.e2_ni + rotorA.e1_ni * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_ni + (-1.0) * rotorA.e2_ni * rotorB.e1_e3 + rotorA.e3_ni * rotorB.e1_e2;
	this->e1_e2_no_ni = rotorA.no_ni * rotorB.e1_e2 + rotorA.e1_e2 * rotorB.no_ni + rotorA.e1_ni * rotorB.e2_no + (-1.0) * rotorA.e1_no * rotorB.e2_ni + (-1.0) * rotorA.e2_ni * rotorB.e1_no + rotorA.e2_no * rotorB.e1_ni;
	this->e1_e3_no_ni = rotorA.no_ni * rotorB.e1_e3 + rotorA.e1_e3 * rotorB.no_ni + rotorA.e1_ni * rotorB.e3_no + (-1.0) * rotorA.e1_no * rotorB.e3_ni + (-1.0) * rotorA.e3_ni * rotorB.e1_no + rotorA.e3_no * rotorB.e1_ni;
	this->e2_e3_no_ni = rotorA.no_ni * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.no_ni + rotorA.e2_ni * rotorB.e3_no + (-1.0) * rotorA.e2_no * rotorB.e3_ni + (-1.0) * rotorA.e3_ni * rotorB.e2_no + rotorA.e3_no * rotorB.e2_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->e3 = scalarA._1 * multivectorB.e3;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * multivectorB.e1_e3;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * multivectorB.e2_e3;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->e3_no = scalarA._1 * multivectorB.e3_no;
	this->e3_ni = scalarA._1 * multivectorB.e3_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_e3 = scalarA._1 * multivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * multivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * multivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * multivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * multivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * multivectorB.e3_no_ni;
	this->e1_e2_e3_no = scalarA._1 * multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * multivectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * multivectorB.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = scalarA._1 * multivectorB.e1_e2_e3_no_ni;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e1_e3 = vectorA.e1 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e1;
	this->e1_no = vectorA.e1 * vectorB.no + (-1.0) * vectorA.no * vectorB.e1;
	this->e1_ni = vectorA.e1 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e2_no = vectorA.e2 * vectorB.no + (-1.0) * vectorA.no * vectorB.e2;
	this->e2_ni = vectorA.e2 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e2;
	this->e3_no = vectorA.e3 * vectorB.no + (-1.0) * vectorA.no * vectorB.e3;
	this->e3_ni = vectorA.e3 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e3;
	this->no_ni = (-1.0) * vectorA.ni * vectorB.no + vectorA.no * vectorB.ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e1_e3 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->e3 = vectorA.e1 * bivectorB.e1_e3 + vectorA.e2 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e3_no + vectorA.no * bivectorB.e3_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.e3 * bivectorB.e3_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + vectorA.e3 * bivectorB.e3_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + (-1.0) * vectorA.e2 * bivectorB.e1_e3 + vectorA.e3 * bivectorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e2_no + vectorA.no * bivectorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e2_ni + vectorA.ni * bivectorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * bivectorB.no_ni + vectorA.ni * bivectorB.e3_no + (-1.0) * vectorA.no * bivectorB.e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e3 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3 = (-1.0) * vectorA.e2 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_e3_ni;
	this->e1_no = (-1.0) * vectorA.e2 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e1_e3_ni + vectorA.ni * trivectorB.e1_no_ni;
	this->e2_e3 = vectorA.e1 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_e3_ni;
	this->e2_no = vectorA.e1 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e2_no_ni;
	this->e3_no = vectorA.e1 * trivectorB.e1_e3_no + vectorA.e2 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e3_no_ni;
	this->e3_ni = vectorA.e1 * trivectorB.e1_e3_ni + vectorA.e2 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e3_no_ni;
	this->no_ni = vectorA.e1 * trivectorB.e1_no_ni + vectorA.e2 * trivectorB.e2_no_ni + vectorA.e3 * trivectorB.e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = vectorA.e1 * trivectorB.e2_e3_no + (-1.0) * vectorA.e2 * trivectorB.e1_e3_no + vectorA.e3 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_e3;
	this->e1_e2_e3_ni = vectorA.e1 * trivectorB.e2_e3_ni + (-1.0) * vectorA.e2 * trivectorB.e1_e3_ni + vectorA.e3 * trivectorB.e1_e2_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_e3;
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3_no_ni = vectorA.e1 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + vectorA.no * trivectorB.e1_e3_ni;
	this->e2_e3_no_ni = vectorA.e2 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e2_no_ni + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + vectorA.no * trivectorB.e2_e3_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.ni * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no = vectorA.e3 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e3_no_ni;
	this->e1_e3_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e3_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no = vectorA.e1 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e2_e3_no_ni;
	this->e2_e3_ni = vectorA.e1 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e2_e3_no_ni;
	this->e2_no_ni = vectorA.e1 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e2_e3_no_ni;
	this->e3_no_ni = vectorA.e1 * quadvectorB.e1_e3_no_ni + vectorA.e2 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = vectorA.e1 * quadvectorB.e2_e3_no_ni + (-1.0) * vectorA.e2 * quadvectorB.e1_e3_no_ni + vectorA.e3 * quadvectorB.e1_e2_no_ni + vectorA.ni * quadvectorB.e1_e2_e3_no + (-1.0) * vectorA.no * quadvectorB.e1_e2_e3_ni;
}

void Multivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = (-1.0) * vectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + vectorA.e3 * multivectorB.e3 + (-1.0) * vectorA.ni * multivectorB.no + (-1.0) * vectorA.no * multivectorB.ni;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + (-1.0) * vectorA.e3 * multivectorB.e1_e3 + vectorA.ni * multivectorB.e1_no + vectorA.no * multivectorB.e1_ni;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + (-1.0) * vectorA.e3 * multivectorB.e2_e3 + vectorA.ni * multivectorB.e2_no + vectorA.no * multivectorB.e2_ni;
	this->e3 = vectorA.e1 * multivectorB.e1_e3 + vectorA.e2 * multivectorB.e2_e3 + vectorA.e3 * multivectorB._1 + vectorA.ni * multivectorB.e3_no + vectorA.no * multivectorB.e3_ni;
	this->no = vectorA.e1 * multivectorB.e1_no + vectorA.e2 * multivectorB.e2_no + vectorA.e3 * multivectorB.e3_no + vectorA.no * multivectorB._1 + vectorA.no * multivectorB.no_ni;
	this->ni = vectorA.e1 * multivectorB.e1_ni + vectorA.e2 * multivectorB.e2_ni + vectorA.e3 * multivectorB.e3_ni + vectorA.ni * multivectorB._1 + (-1.0) * vectorA.ni * multivectorB.no_ni;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1 + vectorA.e3 * multivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_ni;
	this->e1_e3 = vectorA.e1 * multivectorB.e3 + (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3 + (-1.0) * vectorA.e3 * multivectorB.e1 + (-1.0) * vectorA.ni * multivectorB.e1_e3_no + (-1.0) * vectorA.no * multivectorB.e1_e3_ni;
	this->e1_no = vectorA.e1 * multivectorB.no + (-1.0) * vectorA.e2 * multivectorB.e1_e2_no + (-1.0) * vectorA.e3 * multivectorB.e1_e3_no + (-1.0) * vectorA.no * multivectorB.e1 + (-1.0) * vectorA.no * multivectorB.e1_no_ni;
	this->e1_ni = vectorA.e1 * multivectorB.ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * multivectorB.e1_e3_ni + (-1.0) * vectorA.ni * multivectorB.e1 + vectorA.ni * multivectorB.e1_no_ni;
	this->e2_e3 = vectorA.e1 * multivectorB.e1_e2_e3 + vectorA.e2 * multivectorB.e3 + (-1.0) * vectorA.e3 * multivectorB.e2 + (-1.0) * vectorA.ni * multivectorB.e2_e3_no + (-1.0) * vectorA.no * multivectorB.e2_e3_ni;
	this->e2_no = vectorA.e1 * multivectorB.e1_e2_no + vectorA.e2 * multivectorB.no + (-1.0) * vectorA.e3 * multivectorB.e2_e3_no + (-1.0) * vectorA.no * multivectorB.e2 + (-1.0) * vectorA.no * multivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * multivectorB.e1_e2_ni + vectorA.e2 * multivectorB.ni + (-1.0) * vectorA.e3 * multivectorB.e2_e3_ni + (-1.0) * vectorA.ni * multivectorB.e2 + vectorA.ni * multivectorB.e2_no_ni;
	this->e3_no = vectorA.e1 * multivectorB.e1_e3_no + vectorA.e2 * multivectorB.e2_e3_no + vectorA.e3 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e3 + (-1.0) * vectorA.no * multivectorB.e3_no_ni;
	this->e3_ni = vectorA.e1 * multivectorB.e1_e3_ni + vectorA.e2 * multivectorB.e2_e3_ni + vectorA.e3 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e3 + vectorA.ni * multivectorB.e3_no_ni;
	this->no_ni = vectorA.e1 * multivectorB.e1_no_ni + vectorA.e2 * multivectorB.e2_no_ni + vectorA.e3 * multivectorB.e3_no_ni + (-1.0) * vectorA.ni * multivectorB.no + vectorA.no * multivectorB.ni;
	this->e1_e2_e3 = vectorA.e1 * multivectorB.e2_e3 + (-1.0) * vectorA.e2 * multivectorB.e1_e3 + vectorA.e3 * multivectorB.e1_e2 + vectorA.ni * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no = vectorA.e1 * multivectorB.e2_no + (-1.0) * vectorA.e2 * multivectorB.e1_no + vectorA.e3 * multivectorB.e1_e2_e3_no + vectorA.no * multivectorB.e1_e2 + vectorA.no * multivectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e1 * multivectorB.e2_ni + (-1.0) * vectorA.e2 * multivectorB.e1_ni + vectorA.e3 * multivectorB.e1_e2_e3_ni + vectorA.ni * multivectorB.e1_e2 + (-1.0) * vectorA.ni * multivectorB.e1_e2_no_ni;
	this->e1_e3_no = vectorA.e1 * multivectorB.e3_no + (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_no + (-1.0) * vectorA.e3 * multivectorB.e1_no + vectorA.no * multivectorB.e1_e3 + vectorA.no * multivectorB.e1_e3_no_ni;
	this->e1_e3_ni = vectorA.e1 * multivectorB.e3_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_ni + (-1.0) * vectorA.e3 * multivectorB.e1_ni + vectorA.ni * multivectorB.e1_e3 + (-1.0) * vectorA.ni * multivectorB.e1_e3_no_ni;
	this->e1_no_ni = vectorA.e1 * multivectorB.no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * multivectorB.e1_e3_no_ni + vectorA.ni * multivectorB.e1_no + (-1.0) * vectorA.no * multivectorB.e1_ni;
	this->e2_e3_no = vectorA.e1 * multivectorB.e1_e2_e3_no + vectorA.e2 * multivectorB.e3_no + (-1.0) * vectorA.e3 * multivectorB.e2_no + vectorA.no * multivectorB.e2_e3 + vectorA.no * multivectorB.e2_e3_no_ni;
	this->e2_e3_ni = vectorA.e1 * multivectorB.e1_e2_e3_ni + vectorA.e2 * multivectorB.e3_ni + (-1.0) * vectorA.e3 * multivectorB.e2_ni + vectorA.ni * multivectorB.e2_e3 + (-1.0) * vectorA.ni * multivectorB.e2_e3_no_ni;
	this->e2_no_ni = vectorA.e1 * multivectorB.e1_e2_no_ni + vectorA.e2 * multivectorB.no_ni + (-1.0) * vectorA.e3 * multivectorB.e2_e3_no_ni + vectorA.ni * multivectorB.e2_no + (-1.0) * vectorA.no * multivectorB.e2_ni;
	this->e3_no_ni = vectorA.e1 * multivectorB.e1_e3_no_ni + vectorA.e2 * multivectorB.e2_e3_no_ni + vectorA.e3 * multivectorB.no_ni + vectorA.ni * multivectorB.e3_no + (-1.0) * vectorA.no * multivectorB.e3_ni;
	this->e1_e2_e3_no = vectorA.e1 * multivectorB.e2_e3_no + (-1.0) * vectorA.e2 * multivectorB.e1_e3_no + vectorA.e3 * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_e3 + (-1.0) * vectorA.no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.e1 * multivectorB.e2_e3_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e3_ni + vectorA.e3 * multivectorB.e1_e2_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_e3 + vectorA.ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e1 * multivectorB.e2_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_no_ni + vectorA.e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + vectorA.no * multivectorB.e1_e2_ni;
	this->e1_e3_no_ni = vectorA.e1 * multivectorB.e3_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * vectorA.e3 * multivectorB.e1_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e3_no + vectorA.no * multivectorB.e1_e3_ni;
	this->e2_e3_no_ni = vectorA.e1 * multivectorB.e1_e2_e3_no_ni + vectorA.e2 * multivectorB.e3_no_ni + (-1.0) * vectorA.e3 * multivectorB.e2_no_ni + (-1.0) * vectorA.ni * multivectorB.e2_e3_no + vectorA.no * multivectorB.e2_e3_ni;
	this->e1_e2_e3_no_ni = vectorA.e1 * multivectorB.e2_e3_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e3_no_ni + vectorA.e3 * multivectorB.e1_e2_no_ni + vectorA.ni * multivectorB.e1_e2_e3_no + (-1.0) * vectorA.no * multivectorB.e1_e2_e3_ni;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2 + (-1.0) * vectorA.e3 * rotorB.e1_e3 + vectorA.ni * rotorB.e1_no + vectorA.no * rotorB.e1_ni;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1 + (-1.0) * vectorA.e3 * rotorB.e2_e3 + vectorA.ni * rotorB.e2_no + vectorA.no * rotorB.e2_ni;
	this->e3 = vectorA.e1 * rotorB.e1_e3 + vectorA.e2 * rotorB.e2_e3 + vectorA.e3 * rotorB._1 + vectorA.ni * rotorB.e3_no + vectorA.no * rotorB.e3_ni;
	this->no = vectorA.e1 * rotorB.e1_no + vectorA.e2 * rotorB.e2_no + vectorA.e3 * rotorB.e3_no + vectorA.no * rotorB._1 + vectorA.no * rotorB.no_ni;
	this->ni = vectorA.e1 * rotorB.e1_ni + vectorA.e2 * rotorB.e2_ni + vectorA.e3 * rotorB.e3_ni + vectorA.ni * rotorB._1 + (-1.0) * vectorA.ni * rotorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = vectorA.e1 * rotorB.e2_e3 + (-1.0) * vectorA.e2 * rotorB.e1_e3 + vectorA.e3 * rotorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * rotorB.e2_no + (-1.0) * vectorA.e2 * rotorB.e1_no + vectorA.no * rotorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * rotorB.e2_ni + (-1.0) * vectorA.e2 * rotorB.e1_ni + vectorA.ni * rotorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * rotorB.e3_no + (-1.0) * vectorA.e3 * rotorB.e1_no + vectorA.no * rotorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * rotorB.e3_ni + (-1.0) * vectorA.e3 * rotorB.e1_ni + vectorA.ni * rotorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * rotorB.no_ni + vectorA.ni * rotorB.e1_no + (-1.0) * vectorA.no * rotorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * rotorB.e3_no + (-1.0) * vectorA.e3 * rotorB.e2_no + vectorA.no * rotorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * rotorB.e3_ni + (-1.0) * vectorA.e3 * rotorB.e2_ni + vectorA.ni * rotorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * rotorB.no_ni + vectorA.ni * rotorB.e2_no + (-1.0) * vectorA.no * rotorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * rotorB.no_ni + vectorA.ni * rotorB.e3_no + (-1.0) * vectorA.no * rotorB.e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + bivectorA.e1_e3 * vectorB.e3 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->e3 = (-1.0) * bivectorA.e1_e3 * vectorB.e1 + (-1.0) * bivectorA.e2_e3 * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.no + (-1.0) * bivectorA.e3_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.e3_no * vectorB.e3 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.e3 + bivectorA.no_ni * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + (-1.0) * bivectorA.e1_e3 * vectorB.e2 + bivectorA.e2_e3 * vectorB.e1;
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_e3_no = bivectorA.e1_e3 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e3 + bivectorA.e3_no * vectorB.e1;
	this->e1_e3_ni = bivectorA.e1_e3 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_e3_no = bivectorA.e2_e3 * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.e3 + bivectorA.e3_no * vectorB.e2;
	this->e2_e3_ni = bivectorA.e2_e3 * vectorB.ni + (-1.0) * bivectorA.e2_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
	this->e3_no_ni = (-1.0) * bivectorA.e3_ni * vectorB.no + bivectorA.e3_no * vectorB.ni + bivectorA.no_ni * vectorB.e3;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * bivectorB.e1_e3 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.e3_ni * bivectorB.e3_no + bivectorA.e3_no * bivectorB.e3_ni + bivectorA.no_ni * bivectorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * bivectorA.e1_e3 * bivectorB.e2_e3 + bivectorA.e1_ni * bivectorB.e2_no + bivectorA.e1_no * bivectorB.e2_ni + bivectorA.e2_e3 * bivectorB.e1_e3 + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + (-1.0) * bivectorA.e2_no * bivectorB.e1_ni;
	this->e1_e3 = bivectorA.e1_e2 * bivectorB.e2_e3 + bivectorA.e1_ni * bivectorB.e3_no + bivectorA.e1_no * bivectorB.e3_ni + (-1.0) * bivectorA.e2_e3 * bivectorB.e1_e2 + (-1.0) * bivectorA.e3_ni * bivectorB.e1_no + (-1.0) * bivectorA.e3_no * bivectorB.e1_ni;
	this->e1_no = bivectorA.e1_e2 * bivectorB.e2_no + bivectorA.e1_e3 * bivectorB.e3_no + bivectorA.e1_no * bivectorB.no_ni + (-1.0) * bivectorA.e2_no * bivectorB.e1_e2 + (-1.0) * bivectorA.e3_no * bivectorB.e1_e3 + (-1.0) * bivectorA.no_ni * bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_e2 * bivectorB.e2_ni + bivectorA.e1_e3 * bivectorB.e3_ni + (-1.0) * bivectorA.e1_ni * bivectorB.no_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_e2 + (-1.0) * bivectorA.e3_ni * bivectorB.e1_e3 + bivectorA.no_ni * bivectorB.e1_ni;
	this->e2_e3 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e3 + bivectorA.e1_e3 * bivectorB.e1_e2 + bivectorA.e2_ni * bivectorB.e3_no + bivectorA.e2_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e2_no + (-1.0) * bivectorA.e3_no * bivectorB.e2_ni;
	this->e2_no = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_e2 + bivectorA.e2_e3 * bivectorB.e3_no + bivectorA.e2_no * bivectorB.no_ni + (-1.0) * bivectorA.e3_no * bivectorB.e2_e3 + (-1.0) * bivectorA.no_ni * bivectorB.e2_no;
	this->e2_ni = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_ni + bivectorA.e1_ni * bivectorB.e1_e2 + bivectorA.e2_e3 * bivectorB.e3_ni + (-1.0) * bivectorA.e2_ni * bivectorB.no_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e2_e3 + bivectorA.no_ni * bivectorB.e2_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e3 * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_e3 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_e3 + bivectorA.e3_no * bivectorB.no_ni + (-1.0) * bivectorA.no_ni * bivectorB.e3_no;
	this->e3_ni = (-1.0) * bivectorA.e1_e3 * bivectorB.e1_ni + bivectorA.e1_ni * bivectorB.e1_e3 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_ni + bivectorA.e2_ni * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_ni * bivectorB.no_ni + bivectorA.no_ni * bivectorB.e3_ni;
	this->no_ni = bivectorA.e1_ni * bivectorB.e1_no + (-1.0) * bivectorA.e1_no * bivectorB.e1_ni + bivectorA.e2_ni * bivectorB.e2_no + (-1.0) * bivectorA.e2_no * bivectorB.e2_ni + bivectorA.e3_ni * bivectorB.e3_no + (-1.0) * bivectorA.e3_no * bivectorB.e3_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = bivectorA.e1_e2 * bivectorB.e3_no + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_no + bivectorA.e1_no * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_no + (-1.0) * bivectorA.e2_no * bivectorB.e1_e3 + bivectorA.e3_no * bivectorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * bivectorB.e3_ni + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_ni + bivectorA.e1_ni * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_e3 + bivectorA.e3_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e3_no + (-1.0) * bivectorA.e1_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e1_no + bivectorA.e3_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * bivectorB.no_ni + bivectorA.e2_ni * bivectorB.e3_no + (-1.0) * bivectorA.e2_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e2_no + bivectorA.e3_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.e2_e3;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * bivectorA.e2_e3 * trivectorB.e1_e2_e3 + bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e1_e3_no + bivectorA.e3_no * trivectorB.e1_e3_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = bivectorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e2_e3_no + bivectorA.e3_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->e3 = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e3_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * bivectorA.e3_no * trivectorB.e3_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_ni + bivectorA.e2_ni * trivectorB.e2_no_ni + bivectorA.e3_ni * trivectorB.e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = (-1.0) * bivectorA.e1_ni * trivectorB.e2_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e2_e3_ni + bivectorA.e2_ni * trivectorB.e1_e3_no + bivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e3_no * trivectorB.e1_e2_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e1_e3 * trivectorB.e2_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e2_no_ni + bivectorA.e2_e3 * trivectorB.e1_e3_no + bivectorA.e2_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e3_no * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.no_ni * trivectorB.e1_e2_no;
	this->e1_e2_ni = (-1.0) * bivectorA.e1_e3 * trivectorB.e2_e3_ni + bivectorA.e1_ni * trivectorB.e2_no_ni + bivectorA.e2_e3 * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e1_no_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e1_e2_e3 + bivectorA.no_ni * trivectorB.e1_e2_ni;
	this->e1_e3_no = bivectorA.e1_e2 * trivectorB.e2_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e3_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_e3 + bivectorA.e3_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.no_ni * trivectorB.e1_e3_no;
	this->e1_e3_ni = bivectorA.e1_e2 * trivectorB.e2_e3_ni + bivectorA.e1_ni * trivectorB.e3_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e1_e2_ni + bivectorA.e2_ni * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e3_ni * trivectorB.e1_no_ni + bivectorA.no_ni * trivectorB.e1_e3_ni;
	this->e1_no_ni = bivectorA.e1_e2 * trivectorB.e2_no_ni + bivectorA.e1_e3 * trivectorB.e3_no_ni + bivectorA.e2_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e3_no * trivectorB.e1_e3_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e3_no + bivectorA.e1_e3 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e2_no * trivectorB.e3_no_ni + bivectorA.e3_no * trivectorB.e2_no_ni + (-1.0) * bivectorA.no_ni * trivectorB.e2_e3_no;
	this->e2_e3_ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e3_ni + bivectorA.e1_e3 * trivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_e3 + bivectorA.e2_ni * trivectorB.e3_no_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e2_no_ni + bivectorA.no_ni * trivectorB.e2_e3_ni;
	this->e2_no_ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.e2_e3 * trivectorB.e3_no_ni + bivectorA.e3_ni * trivectorB.e2_e3_no + (-1.0) * bivectorA.e3_no * trivectorB.e2_e3_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e3 * trivectorB.e1_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e3_no + bivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_no_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e2_e3_no + bivectorA.e2_no * trivectorB.e2_e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = bivectorA.e1_e2 * trivectorB.e3_no_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e2_e3_no + bivectorA.e1_no * trivectorB.e2_e3_ni + bivectorA.e2_e3 * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e1_e2_no + bivectorA.e3_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e3_ni * quadvectorB.e1_e2_e3_no + bivectorA.e3_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3 = (-1.0) * bivectorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_no = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_ni + bivectorA.e2_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = bivectorA.e1_ni * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e2_e3_no_ni;
	this->e2_no = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e3_no_ni + bivectorA.e2_no * quadvectorB.e2_e3_no_ni;
	this->e3_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_ni * quadvectorB.e2_e3_no_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = bivectorA.e1_no * quadvectorB.e2_e3_no_ni + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e3_no_ni + bivectorA.e3_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = (-1.0) * bivectorA.e1_ni * quadvectorB.e2_e3_no_ni + bivectorA.e2_ni * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e3_ni * quadvectorB.e1_e2_no_ni + bivectorA.no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = (-1.0) * bivectorA.e1_e3 * quadvectorB.e2_e3_no_ni + bivectorA.e2_e3 * quadvectorB.e1_e3_no_ni + bivectorA.e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e3_no_ni = bivectorA.e1_e2 * quadvectorB.e2_e3_no_ni + (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e2_ni * quadvectorB.e1_e2_e3_no + bivectorA.e2_no * quadvectorB.e1_e2_e3_ni;
	this->e2_e3_no_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e3_no_ni + bivectorA.e1_e3 * quadvectorB.e1_e2_no_ni + bivectorA.e1_ni * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e1_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = bivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = bivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = bivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * bivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = bivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = bivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3 + bivectorA.e1_ni * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3 + bivectorA.e2_ni * multivectorB.e2_no + bivectorA.e2_no * multivectorB.e2_ni + bivectorA.e3_ni * multivectorB.e3_no + bivectorA.e3_no * multivectorB.e3_ni + bivectorA.no_ni * multivectorB.no_ni;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + bivectorA.e1_e3 * multivectorB.e3 + (-1.0) * bivectorA.e1_ni * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3 + bivectorA.e2_ni * multivectorB.e1_e2_no + bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.e3_ni * multivectorB.e1_e3_no + bivectorA.e3_no * multivectorB.e1_e3_ni + bivectorA.no_ni * multivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + bivectorA.e1_e3 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_ni + bivectorA.e2_e3 * multivectorB.e3 + (-1.0) * bivectorA.e2_ni * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.ni + bivectorA.e3_ni * multivectorB.e2_e3_no + bivectorA.e3_no * multivectorB.e2_e3_ni + bivectorA.no_ni * multivectorB.e2_no_ni;
	this->e3 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_e3 * multivectorB.e1 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2 + (-1.0) * bivectorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.no + (-1.0) * bivectorA.e3_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e3_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e1 + (-1.0) * bivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e2 + (-1.0) * bivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e3 + (-1.0) * bivectorA.e3_no * multivectorB.e3_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.no;
	this->ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1 + bivectorA.e1_ni * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2 + bivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e3 + bivectorA.e3_ni * multivectorB.e3_no_ni + bivectorA.no_ni * multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1 + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_e3 + bivectorA.e1_ni * multivectorB.e2_no + bivectorA.e1_no * multivectorB.e2_ni + bivectorA.e2_e3 * multivectorB.e1_e3 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_ni + bivectorA.e3_ni * multivectorB.e1_e2_e3_no + bivectorA.e3_no * multivectorB.e1_e2_e3_ni + bivectorA.no_ni * multivectorB.e1_e2_no_ni;
	this->e1_e3 = bivectorA.e1_e2 * multivectorB.e2_e3 + bivectorA.e1_e3 * multivectorB._1 + bivectorA.e1_ni * multivectorB.e3_no + bivectorA.e1_no * multivectorB.e3_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_no + (-1.0) * bivectorA.e3_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e3_no_ni;
	this->e1_no = bivectorA.e1_e2 * multivectorB.e2_no + bivectorA.e1_e3 * multivectorB.e3_no + bivectorA.e1_no * multivectorB._1 + bivectorA.e1_no * multivectorB.no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2 + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e1_e3 + (-1.0) * bivectorA.e3_no * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_e2 * multivectorB.e2_ni + bivectorA.e1_e3 * multivectorB.e3_ni + bivectorA.e1_ni * multivectorB._1 + (-1.0) * bivectorA.e1_ni * multivectorB.no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2 + bivectorA.e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e3 + bivectorA.e3_ni * multivectorB.e1_e3_no_ni + bivectorA.no_ni * multivectorB.e1_ni;
	this->e2_e3 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e3 + bivectorA.e1_e3 * multivectorB.e1_e2 + bivectorA.e1_ni * multivectorB.e1_e2_e3_no + bivectorA.e1_no * multivectorB.e1_e2_e3_ni + bivectorA.e2_e3 * multivectorB._1 + bivectorA.e2_ni * multivectorB.e3_no + bivectorA.e2_no * multivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e2_no + (-1.0) * bivectorA.e3_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB.e2_e3_no_ni;
	this->e2_no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_no + bivectorA.e1_e3 * multivectorB.e1_e2_e3_no + bivectorA.e1_no * multivectorB.e1_e2 + bivectorA.e1_no * multivectorB.e1_e2_no_ni + bivectorA.e2_e3 * multivectorB.e3_no + bivectorA.e2_no * multivectorB._1 + bivectorA.e2_no * multivectorB.no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e2_e3 + (-1.0) * bivectorA.e3_no * multivectorB.e2_e3_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e2_no;
	this->e2_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_ni + bivectorA.e1_e3 * multivectorB.e1_e2_e3_ni + bivectorA.e1_ni * multivectorB.e1_e2 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no_ni + bivectorA.e2_e3 * multivectorB.e3_ni + bivectorA.e2_ni * multivectorB._1 + (-1.0) * bivectorA.e2_ni * multivectorB.no_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e2_e3 + bivectorA.e3_ni * multivectorB.e2_e3_no_ni + bivectorA.no_ni * multivectorB.e2_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_e3 + bivectorA.e1_no * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_no + bivectorA.e2_no * multivectorB.e2_e3 + bivectorA.e2_no * multivectorB.e2_e3_no_ni + bivectorA.e3_no * multivectorB._1 + bivectorA.e3_no * multivectorB.no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e3_no;
	this->e3_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_ni + bivectorA.e1_ni * multivectorB.e1_e3 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_ni + bivectorA.e2_ni * multivectorB.e2_e3 + (-1.0) * bivectorA.e2_ni * multivectorB.e2_e3_no_ni + bivectorA.e3_ni * multivectorB._1 + (-1.0) * bivectorA.e3_ni * multivectorB.no_ni + bivectorA.no_ni * multivectorB.e3_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_e3_no_ni + bivectorA.e1_ni * multivectorB.e1_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_e3_no_ni + bivectorA.e2_ni * multivectorB.e2_no + (-1.0) * bivectorA.e2_no * multivectorB.e2_ni + bivectorA.e3_ni * multivectorB.e3_no + (-1.0) * bivectorA.e3_no * multivectorB.e3_ni + bivectorA.no_ni * multivectorB._1;
	this->e1_e2_e3 = bivectorA.e1_e2 * multivectorB.e3 + (-1.0) * bivectorA.e1_e3 * multivectorB.e2 + (-1.0) * bivectorA.e1_ni * multivectorB.e2_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e2_e3_ni + bivectorA.e2_e3 * multivectorB.e1 + bivectorA.e2_ni * multivectorB.e1_e3_no + bivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e3_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_no = bivectorA.e1_e2 * multivectorB.no + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e2 + (-1.0) * bivectorA.e1_no * multivectorB.e2_no_ni + bivectorA.e2_e3 * multivectorB.e1_e3_no + bivectorA.e2_no * multivectorB.e1 + bivectorA.e2_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.e3_no * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_e2_no;
	this->e1_e2_ni = bivectorA.e1_e2 * multivectorB.ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2 + bivectorA.e1_ni * multivectorB.e2_no_ni + bivectorA.e2_e3 * multivectorB.e1_e3_ni + bivectorA.e2_ni * multivectorB.e1 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e2_e3 + bivectorA.e3_ni * multivectorB.e1_e2_e3_no_ni + bivectorA.no_ni * multivectorB.e1_e2_ni;
	this->e1_e3_no = bivectorA.e1_e2 * multivectorB.e2_e3_no + bivectorA.e1_e3 * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.e3 + (-1.0) * bivectorA.e1_no * multivectorB.e3_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_no + bivectorA.e2_no * multivectorB.e1_e2_e3 + bivectorA.e2_no * multivectorB.e1_e2_e3_no_ni + bivectorA.e3_no * multivectorB.e1 + bivectorA.e3_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_e3_no;
	this->e1_e3_ni = bivectorA.e1_e2 * multivectorB.e2_e3_ni + bivectorA.e1_e3 * multivectorB.ni + (-1.0) * bivectorA.e1_ni * multivectorB.e3 + bivectorA.e1_ni * multivectorB.e3_no_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_ni + bivectorA.e2_ni * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2_e3_no_ni + bivectorA.e3_ni * multivectorB.e1 + (-1.0) * bivectorA.e3_ni * multivectorB.e1_no_ni + bivectorA.no_ni * multivectorB.e1_e3_ni;
	this->e1_no_ni = bivectorA.e1_e2 * multivectorB.e2_no_ni + bivectorA.e1_e3 * multivectorB.e3_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.no + bivectorA.e1_no * multivectorB.ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_e3_no_ni + bivectorA.e2_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.e3_ni * multivectorB.e1_e3_no + (-1.0) * bivectorA.e3_no * multivectorB.e1_e3_ni + bivectorA.no_ni * multivectorB.e1;
	this->e2_e3_no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e3_no + bivectorA.e1_e3 * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_e3_no_ni + bivectorA.e2_e3 * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.e3 + (-1.0) * bivectorA.e2_no * multivectorB.e3_no_ni + bivectorA.e3_no * multivectorB.e2 + bivectorA.e3_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e2_e3_no;
	this->e2_e3_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e3_ni + bivectorA.e1_e3 * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_e3 + bivectorA.e1_ni * multivectorB.e1_e2_e3_no_ni + bivectorA.e2_e3 * multivectorB.ni + (-1.0) * bivectorA.e2_ni * multivectorB.e3 + bivectorA.e2_ni * multivectorB.e3_no_ni + bivectorA.e3_ni * multivectorB.e2 + (-1.0) * bivectorA.e3_ni * multivectorB.e2_no_ni + bivectorA.no_ni * multivectorB.e2_e3_ni;
	this->e2_no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_no_ni + bivectorA.e1_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + bivectorA.e1_no * multivectorB.e1_e2_ni + bivectorA.e2_e3 * multivectorB.e3_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.no + bivectorA.e2_no * multivectorB.ni + bivectorA.e3_ni * multivectorB.e2_e3_no + (-1.0) * bivectorA.e3_no * multivectorB.e2_e3_ni + bivectorA.no_ni * multivectorB.e2;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e1_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e3_no + bivectorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e2_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2_e3_no + bivectorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.no + bivectorA.e3_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e3;
	this->e1_e2_e3_no = bivectorA.e1_e2 * multivectorB.e3_no + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_no + bivectorA.e1_no * multivectorB.e2_e3 + bivectorA.e1_no * multivectorB.e2_e3_no_ni + bivectorA.e2_e3 * multivectorB.e1_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e3 + (-1.0) * bivectorA.e2_no * multivectorB.e1_e3_no_ni + bivectorA.e3_no * multivectorB.e1_e2 + bivectorA.e3_no * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * multivectorB.e3_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_ni + bivectorA.e1_ni * multivectorB.e2_e3 + (-1.0) * bivectorA.e1_ni * multivectorB.e2_e3_no_ni + bivectorA.e2_e3 * multivectorB.e1_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e3 + bivectorA.e2_ni * multivectorB.e1_e3_no_ni + bivectorA.e3_ni * multivectorB.e1_e2 + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e2_no_ni + bivectorA.no_ni * multivectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = bivectorA.e1_e2 * multivectorB.no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_e3_no_ni + bivectorA.e1_ni * multivectorB.e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e2_ni + bivectorA.e2_e3 * multivectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + bivectorA.e2_no * multivectorB.e1_ni + bivectorA.e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e3_no * multivectorB.e1_e2_e3_ni + bivectorA.no_ni * multivectorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e2 * multivectorB.e2_e3_no_ni + bivectorA.e1_e3 * multivectorB.no_ni + bivectorA.e1_ni * multivectorB.e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e3_ni + (-1.0) * bivectorA.e2_e3 * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2_e3_no + bivectorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_no + bivectorA.e3_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e3;
	this->e2_e3_no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e3_no_ni + bivectorA.e1_e3 * multivectorB.e1_e2_no_ni + bivectorA.e1_ni * multivectorB.e1_e2_e3_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_e3_ni + bivectorA.e2_e3 * multivectorB.no_ni + bivectorA.e2_ni * multivectorB.e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e2_no + bivectorA.e3_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB.e2_e3;
	this->e1_e2_e3_no_ni = bivectorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * bivectorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2_e3_no + bivectorA.e1_no * multivectorB.e2_e3_ni + bivectorA.e2_e3 * multivectorB.e1_no_ni + bivectorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * multivectorB.e1_e2_no + bivectorA.e3_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * rotorB.e1_e3 + bivectorA.e1_ni * rotorB.e1_no + bivectorA.e1_no * rotorB.e1_ni + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + bivectorA.e2_ni * rotorB.e2_no + bivectorA.e2_no * rotorB.e2_ni + bivectorA.e3_ni * rotorB.e3_no + bivectorA.e3_no * rotorB.e3_ni + bivectorA.no_ni * rotorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1 + (-1.0) * bivectorA.e1_e3 * rotorB.e2_e3 + bivectorA.e1_ni * rotorB.e2_no + bivectorA.e1_no * rotorB.e2_ni + bivectorA.e2_e3 * rotorB.e1_e3 + (-1.0) * bivectorA.e2_ni * rotorB.e1_no + (-1.0) * bivectorA.e2_no * rotorB.e1_ni;
	this->e1_e3 = bivectorA.e1_e2 * rotorB.e2_e3 + bivectorA.e1_e3 * rotorB._1 + bivectorA.e1_ni * rotorB.e3_no + bivectorA.e1_no * rotorB.e3_ni + (-1.0) * bivectorA.e2_e3 * rotorB.e1_e2 + (-1.0) * bivectorA.e3_ni * rotorB.e1_no + (-1.0) * bivectorA.e3_no * rotorB.e1_ni;
	this->e1_no = bivectorA.e1_e2 * rotorB.e2_no + bivectorA.e1_e3 * rotorB.e3_no + bivectorA.e1_no * rotorB._1 + bivectorA.e1_no * rotorB.no_ni + (-1.0) * bivectorA.e2_no * rotorB.e1_e2 + (-1.0) * bivectorA.e3_no * rotorB.e1_e3 + (-1.0) * bivectorA.no_ni * rotorB.e1_no;
	this->e1_ni = bivectorA.e1_e2 * rotorB.e2_ni + bivectorA.e1_e3 * rotorB.e3_ni + bivectorA.e1_ni * rotorB._1 + (-1.0) * bivectorA.e1_ni * rotorB.no_ni + (-1.0) * bivectorA.e2_ni * rotorB.e1_e2 + (-1.0) * bivectorA.e3_ni * rotorB.e1_e3 + bivectorA.no_ni * rotorB.e1_ni;
	this->e2_e3 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e3 + bivectorA.e1_e3 * rotorB.e1_e2 + bivectorA.e2_e3 * rotorB._1 + bivectorA.e2_ni * rotorB.e3_no + bivectorA.e2_no * rotorB.e3_ni + (-1.0) * bivectorA.e3_ni * rotorB.e2_no + (-1.0) * bivectorA.e3_no * rotorB.e2_ni;
	this->e2_no = (-1.0) * bivectorA.e1_e2 * rotorB.e1_no + bivectorA.e1_no * rotorB.e1_e2 + bivectorA.e2_e3 * rotorB.e3_no + bivectorA.e2_no * rotorB._1 + bivectorA.e2_no * rotorB.no_ni + (-1.0) * bivectorA.e3_no * rotorB.e2_e3 + (-1.0) * bivectorA.no_ni * rotorB.e2_no;
	this->e2_ni = (-1.0) * bivectorA.e1_e2 * rotorB.e1_ni + bivectorA.e1_ni * rotorB.e1_e2 + bivectorA.e2_e3 * rotorB.e3_ni + bivectorA.e2_ni * rotorB._1 + (-1.0) * bivectorA.e2_ni * rotorB.no_ni + (-1.0) * bivectorA.e3_ni * rotorB.e2_e3 + bivectorA.no_ni * rotorB.e2_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e3 * rotorB.e1_no + bivectorA.e1_no * rotorB.e1_e3 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_no + bivectorA.e2_no * rotorB.e2_e3 + bivectorA.e3_no * rotorB._1 + bivectorA.e3_no * rotorB.no_ni + (-1.0) * bivectorA.no_ni * rotorB.e3_no;
	this->e3_ni = (-1.0) * bivectorA.e1_e3 * rotorB.e1_ni + bivectorA.e1_ni * rotorB.e1_e3 + (-1.0) * bivectorA.e2_e3 * rotorB.e2_ni + bivectorA.e2_ni * rotorB.e2_e3 + bivectorA.e3_ni * rotorB._1 + (-1.0) * bivectorA.e3_ni * rotorB.no_ni + bivectorA.no_ni * rotorB.e3_ni;
	this->no_ni = bivectorA.e1_ni * rotorB.e1_no + (-1.0) * bivectorA.e1_no * rotorB.e1_ni + bivectorA.e2_ni * rotorB.e2_no + (-1.0) * bivectorA.e2_no * rotorB.e2_ni + bivectorA.e3_ni * rotorB.e3_no + (-1.0) * bivectorA.e3_no * rotorB.e3_ni + bivectorA.no_ni * rotorB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = bivectorA.e1_e2 * rotorB.e3_no + (-1.0) * bivectorA.e1_e3 * rotorB.e2_no + bivectorA.e1_no * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_no + (-1.0) * bivectorA.e2_no * rotorB.e1_e3 + bivectorA.e3_no * rotorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * rotorB.e3_ni + (-1.0) * bivectorA.e1_e3 * rotorB.e2_ni + bivectorA.e1_ni * rotorB.e2_e3 + bivectorA.e2_e3 * rotorB.e1_ni + (-1.0) * bivectorA.e2_ni * rotorB.e1_e3 + bivectorA.e3_ni * rotorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * rotorB.no_ni + bivectorA.e1_ni * rotorB.e2_no + (-1.0) * bivectorA.e1_no * rotorB.e2_ni + (-1.0) * bivectorA.e2_ni * rotorB.e1_no + bivectorA.e2_no * rotorB.e1_ni + bivectorA.no_ni * rotorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * rotorB.no_ni + bivectorA.e1_ni * rotorB.e3_no + (-1.0) * bivectorA.e1_no * rotorB.e3_ni + (-1.0) * bivectorA.e3_ni * rotorB.e1_no + bivectorA.e3_no * rotorB.e1_ni + bivectorA.no_ni * rotorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * rotorB.no_ni + bivectorA.e2_ni * rotorB.e3_no + (-1.0) * bivectorA.e2_no * rotorB.e3_ni + (-1.0) * bivectorA.e3_ni * rotorB.e2_no + bivectorA.e3_no * rotorB.e2_ni + bivectorA.no_ni * rotorB.e2_e3;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * trivectorA.e1_e2_ni * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_e3 * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.no + (-1.0) * trivectorA.e1_e3_no * vectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * vectorB.e2 + (-1.0) * trivectorA.e1_e3_no * vectorB.e3 + (-1.0) * trivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.e3 + trivectorA.e1_no_ni * vectorB.ni;
	this->e2_e3 = trivectorA.e1_e2_e3 * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.no + (-1.0) * trivectorA.e2_e3_no * vectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * vectorB.e1 + (-1.0) * trivectorA.e2_e3_no * vectorB.e3 + (-1.0) * trivectorA.e2_no_ni * vectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e3 + trivectorA.e2_no_ni * vectorB.ni;
	this->e3_no = trivectorA.e1_e3_no * vectorB.e1 + trivectorA.e2_e3_no * vectorB.e2 + (-1.0) * trivectorA.e3_no_ni * vectorB.no;
	this->e3_ni = trivectorA.e1_e3_ni * vectorB.e1 + trivectorA.e2_e3_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = trivectorA.e1_e2_e3 * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.e3 + trivectorA.e1_e3_no * vectorB.e2 + (-1.0) * trivectorA.e2_e3_no * vectorB.e1;
	this->e1_e2_e3_ni = trivectorA.e1_e2_e3 * vectorB.ni + (-1.0) * trivectorA.e1_e2_ni * vectorB.e3 + trivectorA.e1_e3_ni * vectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * vectorB.no + trivectorA.e1_e3_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e1;
	this->e2_e3_no_ni = (-1.0) * trivectorA.e2_e3_ni * vectorB.no + trivectorA.e2_e3_no * vectorB.ni + trivectorA.e2_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e2_e3 + trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_e3_ni * bivectorB.e3_no + trivectorA.e1_e3_no * bivectorB.e3_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = trivectorA.e1_e2_e3 * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_e3_ni * bivectorB.e3_no + trivectorA.e2_e3_no * bivectorB.e3_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_e3 + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no + (-1.0) * trivectorA.e3_no_ni * bivectorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_e3 + trivectorA.e1_no_ni * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_e3 + trivectorA.e2_no_ni * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_ni * bivectorB.e3_no + trivectorA.e1_e2_no * bivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e2_no + (-1.0) * trivectorA.e1_e3_no * bivectorB.e2_ni + trivectorA.e2_e3_ni * bivectorB.e1_no + trivectorA.e2_e3_no * bivectorB.e1_ni;
	this->e1_e2_no = trivectorA.e1_e2_e3 * bivectorB.e3_no + trivectorA.e1_e2_no * bivectorB.no_ni + (-1.0) * trivectorA.e1_e3_no * bivectorB.e2_e3 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e2_no + trivectorA.e2_e3_no * bivectorB.e1_e3 + trivectorA.e2_no_ni * bivectorB.e1_no;
	this->e1_e2_ni = trivectorA.e1_e2_e3 * bivectorB.e3_ni + (-1.0) * trivectorA.e1_e2_ni * bivectorB.no_ni + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e2_e3 + trivectorA.e1_no_ni * bivectorB.e2_ni + trivectorA.e2_e3_ni * bivectorB.e1_e3 + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_ni;
	this->e1_e3_no = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_e3 + trivectorA.e1_e3_no * bivectorB.no_ni + (-1.0) * trivectorA.e1_no_ni * bivectorB.e3_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e1_e2 + trivectorA.e3_no_ni * bivectorB.e1_no;
	this->e1_e3_ni = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e2_ni + trivectorA.e1_e2_ni * bivectorB.e2_e3 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.no_ni + trivectorA.e1_no_ni * bivectorB.e3_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e3_no_ni * bivectorB.e1_ni;
	this->e1_no_ni = trivectorA.e1_e2_ni * bivectorB.e2_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_e3_ni * bivectorB.e3_no + (-1.0) * trivectorA.e1_e3_no * bivectorB.e3_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e3_no_ni * bivectorB.e1_e3;
	this->e2_e3_no = trivectorA.e1_e2_e3 * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e3 + trivectorA.e1_e3_no * bivectorB.e1_e2 + trivectorA.e2_e3_no * bivectorB.no_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e3_no + trivectorA.e3_no_ni * bivectorB.e2_no;
	this->e2_e3_ni = trivectorA.e1_e2_e3 * bivectorB.e1_ni + (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e3 + trivectorA.e1_e3_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e2_e3_ni * bivectorB.no_ni + trivectorA.e2_no_ni * bivectorB.e3_ni + (-1.0) * trivectorA.e3_no_ni * bivectorB.e2_ni;
	this->e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e1_no_ni * bivectorB.e1_e2 + trivectorA.e2_e3_ni * bivectorB.e3_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e3_ni + (-1.0) * trivectorA.e3_no_ni * bivectorB.e2_e3;
	this->e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_no + trivectorA.e1_e3_no * bivectorB.e1_ni + trivectorA.e1_no_ni * bivectorB.e1_e3 + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_no + trivectorA.e2_e3_no * bivectorB.e2_ni + trivectorA.e2_no_ni * bivectorB.e2_e3;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * bivectorB.no_ni + trivectorA.e1_e2_ni * bivectorB.e3_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e2_no + trivectorA.e1_e3_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.e2_e3 + trivectorA.e2_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_e3 + trivectorA.e3_no_ni * bivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_e3_ni * trivectorB.e1_e3_no + trivectorA.e1_e3_no * trivectorB.e1_e3_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_e3_ni * trivectorB.e2_e3_no + trivectorA.e2_e3_no * trivectorB.e2_e3_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni + trivectorA.e3_no_ni * trivectorB.e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e1_e3_ni * trivectorB.e2_e3_no + trivectorA.e1_e3_no * trivectorB.e2_e3_ni + trivectorA.e1_no_ni * trivectorB.e2_no_ni + (-1.0) * trivectorA.e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * trivectorA.e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_ni * trivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e2_no * trivectorB.e2_e3_ni + trivectorA.e1_no_ni * trivectorB.e3_no_ni + trivectorA.e2_e3_ni * trivectorB.e1_e2_no + trivectorA.e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * trivectorA.e3_no_ni * trivectorB.e1_no_ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e2_no * trivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e3_no * trivectorB.e3_no_ni + trivectorA.e2_e3_no * trivectorB.e1_e2_e3 + trivectorA.e2_no_ni * trivectorB.e1_e2_no + trivectorA.e3_no_ni * trivectorB.e1_e3_no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e2_e3_ni + trivectorA.e1_e2_ni * trivectorB.e2_no_ni + trivectorA.e1_e3_ni * trivectorB.e3_no_ni + trivectorA.e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_e2_ni + (-1.0) * trivectorA.e3_no_ni * trivectorB.e1_e3_ni;
	this->e2_e3 = trivectorA.e1_e2_ni * trivectorB.e1_e3_no + trivectorA.e1_e2_no * trivectorB.e1_e3_ni + (-1.0) * trivectorA.e1_e3_ni * trivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e3_no * trivectorB.e1_e2_ni + trivectorA.e2_no_ni * trivectorB.e3_no_ni + (-1.0) * trivectorA.e3_no_ni * trivectorB.e2_no_ni;
	this->e2_no = trivectorA.e1_e2_e3 * trivectorB.e1_e3_no + trivectorA.e1_e2_no * trivectorB.e1_no_ni + (-1.0) * trivectorA.e1_e3_no * trivectorB.e1_e2_e3 + (-1.0) * trivectorA.e1_no_ni * trivectorB.e1_e2_no + (-1.0) * trivectorA.e2_e3_no * trivectorB.e3_no_ni + trivectorA.e3_no_ni * trivectorB.e2_e3_no;
	this->e2_ni = trivectorA.e1_e2_e3 * trivectorB.e1_e3_ni + (-1.0) * trivectorA.e1_e2_ni * trivectorB.e1_no_ni + (-1.0) * trivectorA.e1_e3_ni * trivectorB.e1_e2_e3 + trivectorA.e1_no_ni * trivectorB.e1_e2_ni + trivectorA.e2_e3_ni * trivectorB.e3_no_ni + (-1.0) * trivectorA.e3_no_ni * trivectorB.e2_e3_ni;
	this->e3_no = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_e3 + trivectorA.e1_e3_no * trivectorB.e1_no_ni + (-1.0) * trivectorA.e1_no_ni * trivectorB.e1_e3_no + trivectorA.e2_e3_no * trivectorB.e2_no_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e2_e3_no;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_ni + trivectorA.e1_e2_ni * trivectorB.e1_e2_e3 + (-1.0) * trivectorA.e1_e3_ni * trivectorB.e1_no_ni + trivectorA.e1_no_ni * trivectorB.e1_e3_ni + (-1.0) * trivectorA.e2_e3_ni * trivectorB.e2_no_ni + trivectorA.e2_no_ni * trivectorB.e2_e3_ni;
	this->no_ni = trivectorA.e1_e2_ni * trivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_e3_ni * trivectorB.e1_e3_no + (-1.0) * trivectorA.e1_e3_no * trivectorB.e1_e3_ni + trivectorA.e2_e3_ni * trivectorB.e2_e3_no + (-1.0) * trivectorA.e2_e3_no * trivectorB.e2_e3_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = (-1.0) * trivectorA.e1_e2_no * trivectorB.e3_no_ni + trivectorA.e1_e3_no * trivectorB.e2_no_ni + (-1.0) * trivectorA.e1_no_ni * trivectorB.e2_e3_no + (-1.0) * trivectorA.e2_e3_no * trivectorB.e1_no_ni + trivectorA.e2_no_ni * trivectorB.e1_e3_no + (-1.0) * trivectorA.e3_no_ni * trivectorB.e1_e2_no;
	this->e1_e2_e3_ni = trivectorA.e1_e2_ni * trivectorB.e3_no_ni + (-1.0) * trivectorA.e1_e3_ni * trivectorB.e2_no_ni + trivectorA.e1_no_ni * trivectorB.e2_e3_ni + trivectorA.e2_e3_ni * trivectorB.e1_no_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_e3_ni + trivectorA.e3_no_ni * trivectorB.e1_e2_ni;
	this->e1_e2_no_ni = trivectorA.e1_e2_e3 * trivectorB.e3_no_ni + trivectorA.e1_e3_ni * trivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e3_no * trivectorB.e2_e3_ni + (-1.0) * trivectorA.e2_e3_ni * trivectorB.e1_e3_no + trivectorA.e2_e3_no * trivectorB.e1_e3_ni + trivectorA.e3_no_ni * trivectorB.e1_e2_e3;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e2_ni * trivectorB.e2_e3_no + trivectorA.e1_e2_no * trivectorB.e2_e3_ni + trivectorA.e2_e3_ni * trivectorB.e1_e2_no + (-1.0) * trivectorA.e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_e2_e3;
	this->e2_e3_no_ni = trivectorA.e1_e2_e3 * trivectorB.e1_no_ni + trivectorA.e1_e2_ni * trivectorB.e1_e3_no + (-1.0) * trivectorA.e1_e2_no * trivectorB.e1_e3_ni + (-1.0) * trivectorA.e1_e3_ni * trivectorB.e1_e2_no + trivectorA.e1_e3_no * trivectorB.e1_e2_ni + trivectorA.e1_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e2 = trivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + trivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_no_ni * quadvectorB.e2_e3_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e2_e3_no_ni;
	this->ni = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_ni + trivectorA.e1_e2_ni * quadvectorB.e1_e2_no_ni + trivectorA.e1_e3_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_e3_ni * quadvectorB.e2_e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_no_ni * quadvectorB.e1_e3_no_ni + trivectorA.e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e2_no = (-1.0) * trivectorA.e1_e3_no * quadvectorB.e2_e3_no_ni + trivectorA.e2_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_e2_ni = trivectorA.e1_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * quadvectorB.e1_e3_no_ni + trivectorA.e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_e3_no = trivectorA.e1_e2_no * quadvectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e1_e2_no_ni + trivectorA.e2_no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_e3_ni = (-1.0) * trivectorA.e1_e2_ni * quadvectorB.e2_e3_no_ni + trivectorA.e2_e3_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e2_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_no_ni = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + trivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni;
	this->e2_e3_no = (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e3_no_ni + trivectorA.e1_e3_no * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_no_ni * quadvectorB.e1_e2_e3_no;
	this->e2_e3_ni = trivectorA.e1_e2_ni * quadvectorB.e1_e3_no_ni + (-1.0) * trivectorA.e1_e3_ni * quadvectorB.e1_e2_no_ni + trivectorA.e1_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e2_no_ni = trivectorA.e1_e2_e3 * quadvectorB.e1_e3_no_ni + trivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni;
	this->e3_no_ni = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + trivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = trivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * trivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * trivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = trivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = trivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no + trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_e3_ni * multivectorB.e1_e3_no + trivectorA.e1_e3_no * multivectorB.e1_e3_ni + trivectorA.e1_no_ni * multivectorB.e1_no_ni + trivectorA.e2_e3_ni * multivectorB.e2_e3_no + trivectorA.e2_e3_no * multivectorB.e2_e3_ni + trivectorA.e2_no_ni * multivectorB.e2_no_ni + trivectorA.e3_no_ni * multivectorB.e3_no_ni;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_e3 + trivectorA.e1_e2_ni * multivectorB.e2_no + trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_e3_ni * multivectorB.e3_no + trivectorA.e1_e3_no * multivectorB.e3_ni + trivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e3_no_ni;
	this->e2 = trivectorA.e1_e2_e3 * multivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + trivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + trivectorA.e2_e3_ni * multivectorB.e3_no + trivectorA.e2_e3_no * multivectorB.e3_ni + trivectorA.e2_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_ni + trivectorA.e2_no_ni * multivectorB.e2_e3_no_ni + trivectorA.e3_no_ni * multivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e3 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_e3 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_e3_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e2_no + (-1.0) * trivectorA.e3_no_ni * multivectorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e3 + trivectorA.e1_e3_ni * multivectorB.e1_e3_no_ni + trivectorA.e1_no_ni * multivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_e3 + trivectorA.e2_e3_ni * multivectorB.e2_e3_no_ni + trivectorA.e2_no_ni * multivectorB.e2_ni + trivectorA.e3_no_ni * multivectorB.e3_ni;
	this->e1_e2 = trivectorA.e1_e2_e3 * multivectorB.e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_e3_ni * multivectorB.e2_e3_no + trivectorA.e1_e3_no * multivectorB.e2_e3_ni + trivectorA.e1_no_ni * multivectorB.e2_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e3_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_no_ni + trivectorA.e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.no + (-1.0) * trivectorA.e1_e3_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e3_no_ni + trivectorA.e2_e3_ni * multivectorB.e1_e2_no + trivectorA.e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_no_ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e3_no * multivectorB.e3 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e3_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.no + trivectorA.e2_e3_no * multivectorB.e1_e2_e3 + trivectorA.e2_e3_no * multivectorB.e1_e2_e3_no_ni + trivectorA.e2_no_ni * multivectorB.e1_e2_no + trivectorA.e3_no_ni * multivectorB.e1_e3_no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_e3_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2 + trivectorA.e1_e2_ni * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e3 + trivectorA.e1_e3_ni * multivectorB.e3_no_ni + trivectorA.e1_no_ni * multivectorB.ni + trivectorA.e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e3_ni;
	this->e2_e3 = trivectorA.e1_e2_e3 * multivectorB.e1 + trivectorA.e1_e2_ni * multivectorB.e1_e3_no + trivectorA.e1_e2_no * multivectorB.e1_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e2_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.no + (-1.0) * trivectorA.e2_e3_no * multivectorB.ni + trivectorA.e2_no_ni * multivectorB.e3_no_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_no_ni;
	this->e2_no = trivectorA.e1_e2_e3 * multivectorB.e1_e3_no + trivectorA.e1_e2_no * multivectorB.e1 + trivectorA.e1_e2_no * multivectorB.e1_no_ni + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e2_e3 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e3 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e3_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.no + trivectorA.e3_no_ni * multivectorB.e2_e3_no;
	this->e2_ni = trivectorA.e1_e2_e3 * multivectorB.e1_e3_ni + trivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e2_e3 + trivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e3 + trivectorA.e2_e3_ni * multivectorB.e3_no_ni + trivectorA.e2_no_ni * multivectorB.ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_e3_ni;
	this->e3_no = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_no + trivectorA.e1_e2_no * multivectorB.e1_e2_e3 + trivectorA.e1_e2_no * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_e3_no * multivectorB.e1 + trivectorA.e1_e3_no * multivectorB.e1_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_e3_no + trivectorA.e2_e3_no * multivectorB.e2 + trivectorA.e2_e3_no * multivectorB.e2_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e2_e3_no + (-1.0) * trivectorA.e3_no_ni * multivectorB.no;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_ni + trivectorA.e1_e2_ni * multivectorB.e1_e2_e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_e3_ni * multivectorB.e1 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_no_ni + trivectorA.e1_no_ni * multivectorB.e1_e3_ni + trivectorA.e2_e3_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_no_ni + trivectorA.e2_no_ni * multivectorB.e2_e3_ni + trivectorA.e3_no_ni * multivectorB.ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no_ni + trivectorA.e1_e2_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_e3_ni * multivectorB.e1_e3_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e3_ni + trivectorA.e1_no_ni * multivectorB.e1 + trivectorA.e2_e3_ni * multivectorB.e2_e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e2_e3_ni + trivectorA.e2_no_ni * multivectorB.e2 + trivectorA.e3_no_ni * multivectorB.e3;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * multivectorB._1 + trivectorA.e1_e2_ni * multivectorB.e3_no + trivectorA.e1_e2_no * multivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e2_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB.e2_e3_no_ni + trivectorA.e2_e3_ni * multivectorB.e1_no + trivectorA.e2_e3_no * multivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e3_no_ni + trivectorA.e3_no_ni * multivectorB.e1_e2_no_ni;
	this->e1_e2_no = trivectorA.e1_e2_e3 * multivectorB.e3_no + trivectorA.e1_e2_no * multivectorB._1 + trivectorA.e1_e2_no * multivectorB.no_ni + (-1.0) * trivectorA.e1_e3_no * multivectorB.e2_e3 + (-1.0) * trivectorA.e1_e3_no * multivectorB.e2_e3_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e2_no + trivectorA.e2_e3_no * multivectorB.e1_e3 + trivectorA.e2_e3_no * multivectorB.e1_e3_no_ni + trivectorA.e2_no_ni * multivectorB.e1_no + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e2_e3_no;
	this->e1_e2_ni = trivectorA.e1_e2_e3 * multivectorB.e3_ni + trivectorA.e1_e2_ni * multivectorB._1 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.no_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e2_e3 + trivectorA.e1_e3_ni * multivectorB.e2_e3_no_ni + trivectorA.e1_no_ni * multivectorB.e2_ni + trivectorA.e2_e3_ni * multivectorB.e1_e3 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_ni + trivectorA.e3_no_ni * multivectorB.e1_e2_e3_ni;
	this->e1_e3_no = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_no + trivectorA.e1_e2_no * multivectorB.e2_e3 + trivectorA.e1_e2_no * multivectorB.e2_e3_no_ni + trivectorA.e1_e3_no * multivectorB._1 + trivectorA.e1_e3_no * multivectorB.no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e2 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e2_no_ni + trivectorA.e2_no_ni * multivectorB.e1_e2_e3_no + trivectorA.e3_no_ni * multivectorB.e1_no;
	this->e1_e3_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_ni + trivectorA.e1_e2_ni * multivectorB.e2_e3 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2_e3_no_ni + trivectorA.e1_e3_ni * multivectorB._1 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.no_ni + trivectorA.e1_no_ni * multivectorB.e3_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2 + trivectorA.e2_e3_ni * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_ni;
	this->e1_no_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_e3_no_ni + trivectorA.e1_e2_ni * multivectorB.e2_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_e3_ni * multivectorB.e3_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e3_ni + trivectorA.e1_no_ni * multivectorB._1 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + trivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e3;
	this->e2_e3_no = trivectorA.e1_e2_e3 * multivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e3_no_ni + trivectorA.e1_e3_no * multivectorB.e1_e2 + trivectorA.e1_e3_no * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_e2_e3_no + trivectorA.e2_e3_no * multivectorB._1 + trivectorA.e2_e3_no * multivectorB.no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e3_no + trivectorA.e3_no_ni * multivectorB.e2_no;
	this->e2_e3_ni = trivectorA.e1_e2_e3 * multivectorB.e1_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e3 + trivectorA.e1_e2_ni * multivectorB.e1_e3_no_ni + trivectorA.e1_e3_ni * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e2_no_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_e3_ni + trivectorA.e2_e3_ni * multivectorB._1 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.no_ni + trivectorA.e2_no_ni * multivectorB.e3_ni + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_ni;
	this->e2_no_ni = trivectorA.e1_e2_e3 * multivectorB.e1_e3_no_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * multivectorB.e1_e2 + trivectorA.e2_e3_ni * multivectorB.e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e3_ni + trivectorA.e2_no_ni * multivectorB._1 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2_e3;
	this->e3_no_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + trivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_no + trivectorA.e1_e3_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e3 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e2_no + trivectorA.e2_e3_no * multivectorB.e2_ni + trivectorA.e2_no_ni * multivectorB.e2_e3 + trivectorA.e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no = trivectorA.e1_e2_e3 * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e3 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e3_no_ni + trivectorA.e1_e3_no * multivectorB.e2 + trivectorA.e1_e3_no * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e2_e3_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1 + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_no_ni + trivectorA.e2_no_ni * multivectorB.e1_e3_no + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1_e2_no;
	this->e1_e2_e3_ni = trivectorA.e1_e2_e3 * multivectorB.ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e3 + trivectorA.e1_e2_ni * multivectorB.e3_no_ni + trivectorA.e1_e3_ni * multivectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e2_no_ni + trivectorA.e1_no_ni * multivectorB.e2_e3_ni + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1 + trivectorA.e2_e3_ni * multivectorB.e1_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e3_ni + trivectorA.e3_no_ni * multivectorB.e1_e2_ni;
	this->e1_e2_no_ni = trivectorA.e1_e2_e3 * multivectorB.e3_no_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_e3_ni * multivectorB.e2_e3_no + (-1.0) * trivectorA.e1_e3_no * multivectorB.e2_e3_ni + trivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.e1_e3_no + trivectorA.e2_e3_no * multivectorB.e1_e3_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1 + trivectorA.e3_no_ni * multivectorB.e1_e2_e3;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e2_e3 * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2_e3_no + trivectorA.e1_e2_no * multivectorB.e2_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.no + trivectorA.e1_e3_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e3 + trivectorA.e2_e3_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_e3 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e1;
	this->e2_e3_no_ni = trivectorA.e1_e2_e3 * multivectorB.e1_no_ni + trivectorA.e1_e2_ni * multivectorB.e1_e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e1_e2_no + trivectorA.e1_e3_no * multivectorB.e1_e2_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_e3 + (-1.0) * trivectorA.e2_e3_ni * multivectorB.no + trivectorA.e2_e3_no * multivectorB.ni + trivectorA.e2_no_ni * multivectorB.e3 + (-1.0) * trivectorA.e3_no_ni * multivectorB.e2;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * multivectorB.no_ni + trivectorA.e1_e2_ni * multivectorB.e3_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * multivectorB.e2_no + trivectorA.e1_e3_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB.e2_e3 + trivectorA.e2_e3_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * multivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e3 + trivectorA.e3_no_ni * multivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e2_e3 + trivectorA.e1_e2_ni * rotorB.e2_no + trivectorA.e1_e2_no * rotorB.e2_ni + trivectorA.e1_e3_ni * rotorB.e3_no + trivectorA.e1_e3_no * rotorB.e3_ni + trivectorA.e1_no_ni * rotorB.no_ni;
	this->e2 = trivectorA.e1_e2_e3 * rotorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e1_ni + trivectorA.e2_e3_ni * rotorB.e3_no + trivectorA.e2_e3_no * rotorB.e3_ni + trivectorA.e2_no_ni * rotorB.no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * rotorB.e1_no + (-1.0) * trivectorA.e1_e3_no * rotorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * rotorB.e2_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e2_ni + trivectorA.e3_no_ni * rotorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_no * rotorB.e1_e3 + (-1.0) * trivectorA.e1_no_ni * rotorB.e1_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e2_e3 + (-1.0) * trivectorA.e2_no_ni * rotorB.e2_no + (-1.0) * trivectorA.e3_no_ni * rotorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * rotorB.e1_e3 + trivectorA.e1_no_ni * rotorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * rotorB.e2_e3 + trivectorA.e2_no_ni * rotorB.e2_ni + trivectorA.e3_no_ni * rotorB.e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * rotorB._1 + trivectorA.e1_e2_ni * rotorB.e3_no + trivectorA.e1_e2_no * rotorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * rotorB.e2_no + (-1.0) * trivectorA.e1_e3_no * rotorB.e2_ni + trivectorA.e2_e3_ni * rotorB.e1_no + trivectorA.e2_e3_no * rotorB.e1_ni;
	this->e1_e2_no = trivectorA.e1_e2_e3 * rotorB.e3_no + trivectorA.e1_e2_no * rotorB._1 + trivectorA.e1_e2_no * rotorB.no_ni + (-1.0) * trivectorA.e1_e3_no * rotorB.e2_e3 + (-1.0) * trivectorA.e1_no_ni * rotorB.e2_no + trivectorA.e2_e3_no * rotorB.e1_e3 + trivectorA.e2_no_ni * rotorB.e1_no;
	this->e1_e2_ni = trivectorA.e1_e2_e3 * rotorB.e3_ni + trivectorA.e1_e2_ni * rotorB._1 + (-1.0) * trivectorA.e1_e2_ni * rotorB.no_ni + (-1.0) * trivectorA.e1_e3_ni * rotorB.e2_e3 + trivectorA.e1_no_ni * rotorB.e2_ni + trivectorA.e2_e3_ni * rotorB.e1_e3 + (-1.0) * trivectorA.e2_no_ni * rotorB.e1_ni;
	this->e1_e3_no = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e2_no + trivectorA.e1_e2_no * rotorB.e2_e3 + trivectorA.e1_e3_no * rotorB._1 + trivectorA.e1_e3_no * rotorB.no_ni + (-1.0) * trivectorA.e1_no_ni * rotorB.e3_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e1_e2 + trivectorA.e3_no_ni * rotorB.e1_no;
	this->e1_e3_ni = (-1.0) * trivectorA.e1_e2_e3 * rotorB.e2_ni + trivectorA.e1_e2_ni * rotorB.e2_e3 + trivectorA.e1_e3_ni * rotorB._1 + (-1.0) * trivectorA.e1_e3_ni * rotorB.no_ni + trivectorA.e1_no_ni * rotorB.e3_ni + (-1.0) * trivectorA.e2_e3_ni * rotorB.e1_e2 + (-1.0) * trivectorA.e3_no_ni * rotorB.e1_ni;
	this->e1_no_ni = trivectorA.e1_e2_ni * rotorB.e2_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e2_ni + trivectorA.e1_e3_ni * rotorB.e3_no + (-1.0) * trivectorA.e1_e3_no * rotorB.e3_ni + trivectorA.e1_no_ni * rotorB._1 + (-1.0) * trivectorA.e2_no_ni * rotorB.e1_e2 + (-1.0) * trivectorA.e3_no_ni * rotorB.e1_e3;
	this->e2_e3_no = trivectorA.e1_e2_e3 * rotorB.e1_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e1_e3 + trivectorA.e1_e3_no * rotorB.e1_e2 + trivectorA.e2_e3_no * rotorB._1 + trivectorA.e2_e3_no * rotorB.no_ni + (-1.0) * trivectorA.e2_no_ni * rotorB.e3_no + trivectorA.e3_no_ni * rotorB.e2_no;
	this->e2_e3_ni = trivectorA.e1_e2_e3 * rotorB.e1_ni + (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_e3 + trivectorA.e1_e3_ni * rotorB.e1_e2 + trivectorA.e2_e3_ni * rotorB._1 + (-1.0) * trivectorA.e2_e3_ni * rotorB.no_ni + trivectorA.e2_no_ni * rotorB.e3_ni + (-1.0) * trivectorA.e3_no_ni * rotorB.e2_ni;
	this->e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * rotorB.e1_no + trivectorA.e1_e2_no * rotorB.e1_ni + trivectorA.e1_no_ni * rotorB.e1_e2 + trivectorA.e2_e3_ni * rotorB.e3_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e3_ni + trivectorA.e2_no_ni * rotorB._1 + (-1.0) * trivectorA.e3_no_ni * rotorB.e2_e3;
	this->e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * rotorB.e1_no + trivectorA.e1_e3_no * rotorB.e1_ni + trivectorA.e1_no_ni * rotorB.e1_e3 + (-1.0) * trivectorA.e2_e3_ni * rotorB.e2_no + trivectorA.e2_e3_no * rotorB.e2_ni + trivectorA.e2_no_ni * rotorB.e2_e3 + trivectorA.e3_no_ni * rotorB._1;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * rotorB.no_ni + trivectorA.e1_e2_ni * rotorB.e3_no + (-1.0) * trivectorA.e1_e2_no * rotorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * rotorB.e2_no + trivectorA.e1_e3_no * rotorB.e2_ni + trivectorA.e1_no_ni * rotorB.e2_e3 + trivectorA.e2_e3_ni * rotorB.e1_no + (-1.0) * trivectorA.e2_e3_no * rotorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * rotorB.e1_e3 + trivectorA.e3_no_ni * rotorB.e1_e2;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e3 + (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e3 + quadvectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * vectorB.e2 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.no;
	this->e1_e3_ni = quadvectorA.e1_e2_e3_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.ni;
	this->e1_no_ni = quadvectorA.e1_e2_no_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.no;
	this->e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.e3;
	this->e3_no_ni = (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + quadvectorA.e1_e2_e3_no * vectorB.ni + quadvectorA.e1_e2_no_ni * vectorB.e3 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e2 + quadvectorA.e2_e3_no_ni * vectorB.e1;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * bivectorB.e3_no + quadvectorA.e1_e2_e3_no * bivectorB.e3_ni + quadvectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * bivectorB.e1_no + quadvectorA.e1_e2_e3_no * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * bivectorB.e1_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e1_e2 + quadvectorA.e1_e3_no_ni * bivectorB.e1_no + quadvectorA.e2_e3_no_ni * bivectorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * bivectorB.no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e3_no + quadvectorA.e1_e3_no_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e1_no;
	this->e1_e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.no_ni + quadvectorA.e1_e2_no_ni * bivectorB.e3_ni + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e2_ni + quadvectorA.e2_e3_no_ni * bivectorB.e1_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_e3_ni * bivectorB.e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e3_ni + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e2_e3 + quadvectorA.e2_e3_no_ni * bivectorB.e1_e3;
	this->e1_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_no + quadvectorA.e1_e2_e3_no * bivectorB.e2_ni + quadvectorA.e1_e2_no_ni * bivectorB.e2_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e1_e2;
	this->e2_e3_no_ni = quadvectorA.e1_e2_e3_ni * bivectorB.e1_no + (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e1_ni + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_e3 + quadvectorA.e1_e3_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = quadvectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + quadvectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * trivectorB.e2_no_ni + quadvectorA.e1_e3_no_ni * trivectorB.e3_no_ni;
	this->e2 = (-1.0) * quadvectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_no_ni + quadvectorA.e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e3 = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_e3 + quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_no + quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_no + quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_no;
	this->ni = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = quadvectorA.e1_e2_no_ni * trivectorB.e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e2_no_ni + quadvectorA.e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e3_no_ni + quadvectorA.e1_e3_no_ni * trivectorB.e2_e3_no + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e1_e2_ni = quadvectorA.e1_e2_e3_ni * trivectorB.e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e2_e3_ni + quadvectorA.e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * trivectorB.e2_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e2_e3_no + quadvectorA.e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e1_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * trivectorB.e2_no_ni + quadvectorA.e1_e2_no_ni * trivectorB.e2_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->e1_no_ni = quadvectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e1_e2_e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e1_no_ni + quadvectorA.e1_e2_no_ni * trivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_e2_no;
	this->e2_e3_ni = quadvectorA.e1_e2_e3_ni * trivectorB.e1_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_e3_ni + quadvectorA.e1_e3_no_ni * trivectorB.e1_e2_ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + quadvectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + quadvectorA.e1_e3_no_ni * trivectorB.e1_e2_e3;
	this->e3_no_ni = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e2_e3_no_ni + quadvectorA.e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_e3 = quadvectorA.e1_e2_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e2_e3_no_ni + quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_ni = quadvectorA.e1_e2_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e2_e3 = (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e3_no_ni + quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e3_no_ni + quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_no_ni + quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_no;
	this->e3_ni = quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * quadvectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = quadvectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * quadvectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * quadvectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e1 = quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e2 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no_ni + quadvectorA.e2_e3_no_ni * multivectorB.e3_no_ni;
	this->e3 = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3 + quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_no + quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_no + quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_no;
	this->ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3_ni;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * multivectorB.e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e3_ni + quadvectorA.e1_e2_no_ni * multivectorB.no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2_e3_no_ni + quadvectorA.e2_e3_no_ni * multivectorB.e1_e3_no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_e3_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_e3_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e3_no + quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3 + quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_ni + quadvectorA.e1_e3_no_ni * multivectorB.e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * multivectorB.e1_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e3_no_ni + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_no_ni + quadvectorA.e2_e3_no_ni * multivectorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * multivectorB.e1_e3 + quadvectorA.e1_e2_e3_no * multivectorB.e1_e3_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e1_no + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_ni + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_ni + quadvectorA.e2_e3_no_ni * multivectorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no + quadvectorA.e1_e3_no_ni * multivectorB.e1_no + quadvectorA.e2_e3_no_ni * multivectorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2 + quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2_e3;
	this->e1_e2_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.ni + quadvectorA.e1_e2_no_ni * multivectorB.e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2_no_ni + quadvectorA.e2_e3_no_ni * multivectorB.e1_no_ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e3 + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e3_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.no + quadvectorA.e1_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e3_no;
	this->e1_e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e3 + quadvectorA.e1_e2_e3_ni * multivectorB.e3_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2_e3_ni + quadvectorA.e2_e3_no_ni * multivectorB.e1_e3_ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * multivectorB.e2 + quadvectorA.e1_e2_e3_no * multivectorB.e2_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e2_e3_no + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.no + quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_no;
	this->e1_e3_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e2 + (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_e3_ni + quadvectorA.e1_e3_no_ni * multivectorB.ni + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_ni;
	this->e1_no_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2 + quadvectorA.e1_e3_no_ni * multivectorB.e3 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2_e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1 + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_no + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.no;
	this->e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1 + quadvectorA.e1_e2_e3_ni * multivectorB.e1_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e3_ni + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_ni + quadvectorA.e2_e3_no_ni * multivectorB.ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + quadvectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1 + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2_e3 + quadvectorA.e2_e3_no_ni * multivectorB.e3;
	this->e3_no_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e2;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * multivectorB._1 + quadvectorA.e1_e2_e3_no * multivectorB.no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e3_no + quadvectorA.e1_e3_no_ni * multivectorB.e2_no + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * multivectorB._1 + (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.no_ni + quadvectorA.e1_e2_no_ni * multivectorB.e3_ni + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2_ni + quadvectorA.e2_e3_no_ni * multivectorB.e1_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e3_ni + quadvectorA.e1_e2_no_ni * multivectorB._1 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2_e3 + quadvectorA.e2_e3_no_ni * multivectorB.e1_e3;
	this->e1_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.e2_no + quadvectorA.e1_e2_e3_no * multivectorB.e2_ni + quadvectorA.e1_e2_no_ni * multivectorB.e2_e3 + quadvectorA.e1_e3_no_ni * multivectorB._1 + (-1.0) * quadvectorA.e2_e3_no_ni * multivectorB.e1_e2;
	this->e2_e3_no_ni = quadvectorA.e1_e2_e3_ni * multivectorB.e1_no + (-1.0) * quadvectorA.e1_e2_e3_no * multivectorB.e1_ni + (-1.0) * quadvectorA.e1_e2_no_ni * multivectorB.e1_e3 + quadvectorA.e1_e3_no_ni * multivectorB.e1_e2 + quadvectorA.e2_e3_no_ni * multivectorB._1;
	this->e1_e2_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * multivectorB.no + quadvectorA.e1_e2_e3_no * multivectorB.ni + quadvectorA.e1_e2_no_ni * multivectorB.e3 + (-1.0) * quadvectorA.e1_e3_no_ni * multivectorB.e2 + quadvectorA.e2_e3_no_ni * multivectorB.e1;
}

void Multivector::GeometricProduct(const Quadvector& quadvectorA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * rotorB.e3_no + quadvectorA.e1_e2_e3_no * rotorB.e3_ni + quadvectorA.e1_e2_no_ni * rotorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e2_ni + quadvectorA.e1_e3_no_ni * rotorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e2_e3 + quadvectorA.e1_e2_no_ni * rotorB.e2_ni + quadvectorA.e1_e3_no_ni * rotorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * rotorB.e1_no + quadvectorA.e1_e2_e3_no * rotorB.e1_ni + quadvectorA.e2_e3_no_ni * rotorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * rotorB.e1_e3 + quadvectorA.e1_e2_no_ni * rotorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * rotorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e1_ni + quadvectorA.e2_e3_no_ni * rotorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e1_e2 + quadvectorA.e1_e3_no_ni * rotorB.e1_no + quadvectorA.e2_e3_no_ni * rotorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * rotorB._1 + quadvectorA.e1_e2_e3_no * rotorB.no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e3_no + quadvectorA.e1_e3_no_ni * rotorB.e2_no + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e1_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * rotorB._1 + (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.no_ni + quadvectorA.e1_e2_no_ni * rotorB.e3_ni + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e2_ni + quadvectorA.e2_e3_no_ni * rotorB.e1_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_e3_ni * rotorB.e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e3_ni + quadvectorA.e1_e2_no_ni * rotorB._1 + (-1.0) * quadvectorA.e1_e3_no_ni * rotorB.e2_e3 + quadvectorA.e2_e3_no_ni * rotorB.e1_e3;
	this->e1_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * rotorB.e2_no + quadvectorA.e1_e2_e3_no * rotorB.e2_ni + quadvectorA.e1_e2_no_ni * rotorB.e2_e3 + quadvectorA.e1_e3_no_ni * rotorB._1 + (-1.0) * quadvectorA.e2_e3_no_ni * rotorB.e1_e2;
	this->e2_e3_no_ni = quadvectorA.e1_e2_e3_ni * rotorB.e1_no + (-1.0) * quadvectorA.e1_e2_e3_no * rotorB.e1_ni + (-1.0) * quadvectorA.e1_e2_no_ni * rotorB.e1_e3 + quadvectorA.e1_e3_no_ni * rotorB.e1_e2 + quadvectorA.e2_e3_no_ni * rotorB._1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e1;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_ni;
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1_e2;
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB.e1;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * rotorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * rotorB.e1_e2;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * rotorB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->e3 = multivectorA.e3 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = multivectorA.e1_e3 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_e3 = multivectorA.e2_e3 * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->e3_no = multivectorA.e3_no * scalarB._1;
	this->e3_ni = multivectorA.e3_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_e3 = multivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = multivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = multivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = multivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = multivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = multivectorA.e3_no_ni * scalarB._1;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni * scalarB._1;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni * scalarB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA.e2 * vectorB.e2 + multivectorA.e1 * vectorB.e1 + multivectorA.e3 * vectorB.e3 + (-1.0) * multivectorA.ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.ni;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e3 * vectorB.e3 + (-1.0) * multivectorA.e1_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.ni + multivectorA.e1_e2 * vectorB.e2;
	this->e2 = multivectorA._1 * vectorB.e2 + multivectorA.e2_e3 * vectorB.e3 + (-1.0) * multivectorA.e2_ni * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.ni + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->e3 = multivectorA._1 * vectorB.e3 + (-1.0) * multivectorA.e1_e3 * vectorB.e1 + (-1.0) * multivectorA.e2_e3 * vectorB.e2 + (-1.0) * multivectorA.e3_ni * vectorB.no + (-1.0) * multivectorA.e3_no * vectorB.ni;
	this->no = multivectorA._1 * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e1 + (-1.0) * multivectorA.e2_no * vectorB.e2 + (-1.0) * multivectorA.e3_no * vectorB.e3 + (-1.0) * multivectorA.no_ni * vectorB.no;
	this->ni = multivectorA._1 * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e1 + (-1.0) * multivectorA.e2_ni * vectorB.e2 + (-1.0) * multivectorA.e3_ni * vectorB.e3 + multivectorA.no_ni * vectorB.ni;
	this->e1_e2 = (-1.0) * multivectorA.e2 * vectorB.e1 + multivectorA.e1 * vectorB.e2 + multivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3 = (-1.0) * multivectorA.e1_e3_ni * vectorB.no + (-1.0) * multivectorA.e1_e3_no * vectorB.ni + multivectorA.e1 * vectorB.e3 + (-1.0) * multivectorA.e3 * vectorB.e1 + (-1.0) * multivectorA.e1_e2_e3 * vectorB.e2;
	this->e1_no = (-1.0) * multivectorA.e1_e3_no * vectorB.e3 + (-1.0) * multivectorA.e1_no_ni * vectorB.no + multivectorA.e1 * vectorB.no + (-1.0) * multivectorA.no * vectorB.e1 + (-1.0) * multivectorA.e1_e2_no * vectorB.e2;
	this->e1_ni = (-1.0) * multivectorA.e1_e3_ni * vectorB.e3 + multivectorA.e1_no_ni * vectorB.ni + multivectorA.e1 * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * vectorB.e2;
	this->e2_e3 = multivectorA.e2 * vectorB.e3 + (-1.0) * multivectorA.e2_e3_ni * vectorB.no + (-1.0) * multivectorA.e2_e3_no * vectorB.ni + (-1.0) * multivectorA.e3 * vectorB.e2 + multivectorA.e1_e2_e3 * vectorB.e1;
	this->e2_no = multivectorA.e2 * vectorB.no + (-1.0) * multivectorA.e2_e3_no * vectorB.e3 + (-1.0) * multivectorA.e2_no_ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.e2 + multivectorA.e1_e2_no * vectorB.e1;
	this->e2_ni = multivectorA.e2 * vectorB.ni + (-1.0) * multivectorA.e2_e3_ni * vectorB.e3 + multivectorA.e2_no_ni * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e2 + multivectorA.e1_e2_ni * vectorB.e1;
	this->e3_no = multivectorA.e1_e3_no * vectorB.e1 + multivectorA.e2_e3_no * vectorB.e2 + multivectorA.e3 * vectorB.no + (-1.0) * multivectorA.e3_no_ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.e3;
	this->e3_ni = multivectorA.e1_e3_ni * vectorB.e1 + multivectorA.e2_e3_ni * vectorB.e2 + multivectorA.e3 * vectorB.ni + multivectorA.e3_no_ni * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e3;
	this->no_ni = multivectorA.e1_no_ni * vectorB.e1 + multivectorA.e2_no_ni * vectorB.e2 + multivectorA.e3_no_ni * vectorB.e3 + (-1.0) * multivectorA.ni * vectorB.no + multivectorA.no * vectorB.ni;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e3 * vectorB.e2 + multivectorA.e2_e3 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e3 + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * vectorB.ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_no * vectorB.e2 + multivectorA.e2_no * vectorB.e1 + multivectorA.e1_e2 * vectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * vectorB.e3 + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_ni * vectorB.e2 + multivectorA.e2_ni * vectorB.e1 + multivectorA.e1_e2 * vectorB.ni + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.e3 + multivectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_e3_no = multivectorA.e1_e3 * vectorB.no + (-1.0) * multivectorA.e1_e3_no_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e3 + multivectorA.e3_no * vectorB.e1 + multivectorA.e1_e2_e3_no * vectorB.e2;
	this->e1_e3_ni = multivectorA.e1_e3 * vectorB.ni + multivectorA.e1_e3_no_ni * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e3 + multivectorA.e3_ni * vectorB.e1 + multivectorA.e1_e2_e3_ni * vectorB.e2;
	this->e1_no_ni = multivectorA.e1_e3_no_ni * vectorB.e3 + (-1.0) * multivectorA.e1_ni * vectorB.no + multivectorA.e1_no * vectorB.ni + multivectorA.no_ni * vectorB.e1 + multivectorA.e1_e2_no_ni * vectorB.e2;
	this->e2_e3_no = multivectorA.e2_e3 * vectorB.no + (-1.0) * multivectorA.e2_e3_no_ni * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.e3 + multivectorA.e3_no * vectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_no * vectorB.e1;
	this->e2_e3_ni = multivectorA.e2_e3 * vectorB.ni + multivectorA.e2_e3_no_ni * vectorB.ni + (-1.0) * multivectorA.e2_ni * vectorB.e3 + multivectorA.e3_ni * vectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.e1;
	this->e2_no_ni = multivectorA.e2_e3_no_ni * vectorB.e3 + (-1.0) * multivectorA.e2_ni * vectorB.no + multivectorA.e2_no * vectorB.ni + multivectorA.no_ni * vectorB.e2 + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.e1;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * vectorB.e1 + (-1.0) * multivectorA.e2_e3_no_ni * vectorB.e2 + (-1.0) * multivectorA.e3_ni * vectorB.no + multivectorA.e3_no * vectorB.ni + multivectorA.no_ni * vectorB.e3;
	this->e1_e2_e3_no = multivectorA.e1_e3_no * vectorB.e2 + (-1.0) * multivectorA.e2_e3_no * vectorB.e1 + multivectorA.e1_e2_e3 * vectorB.no + (-1.0) * multivectorA.e1_e2_e3_no_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.e3;
	this->e1_e2_e3_ni = multivectorA.e1_e3_ni * vectorB.e2 + (-1.0) * multivectorA.e2_e3_ni * vectorB.e1 + multivectorA.e1_e2_e3 * vectorB.ni + multivectorA.e1_e2_e3_no_ni * vectorB.ni + (-1.0) * multivectorA.e1_e2_ni * vectorB.e3;
	this->e1_e2_no_ni = multivectorA.e1_no_ni * vectorB.e2 + (-1.0) * multivectorA.e2_no_ni * vectorB.e1 + multivectorA.e1_e2_e3_no_ni * vectorB.e3 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * vectorB.no + multivectorA.e1_e3_no * vectorB.ni + multivectorA.e1_no_ni * vectorB.e3 + (-1.0) * multivectorA.e3_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = (-1.0) * multivectorA.e2_e3_ni * vectorB.no + multivectorA.e2_e3_no * vectorB.ni + multivectorA.e2_no_ni * vectorB.e3 + (-1.0) * multivectorA.e3_no_ni * vectorB.e2 + multivectorA.e1_e2_e3_no_ni * vectorB.e1;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * vectorB.e2 + multivectorA.e2_e3_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_e3_ni * vectorB.no + multivectorA.e1_e2_e3_no * vectorB.ni + multivectorA.e1_e2_no_ni * vectorB.e3;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e3 * bivectorB.e1_e3 + multivectorA.e1_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_ni + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_e3 + multivectorA.e2_ni * bivectorB.e2_no + multivectorA.e2_no * bivectorB.e2_ni + multivectorA.e3_ni * bivectorB.e3_no + multivectorA.e3_no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + multivectorA.no_ni * bivectorB.no_ni;
	this->e1 = multivectorA.e1_e3_ni * bivectorB.e3_no + multivectorA.e1_e3_no * bivectorB.e3_ni + multivectorA.e1_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_e2 + (-1.0) * multivectorA.e3 * bivectorB.e1_e3 + multivectorA.ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_e3 + multivectorA.e1_e2_ni * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.e2_ni;
	this->e2 = multivectorA.e2_e3_ni * bivectorB.e3_no + multivectorA.e1 * bivectorB.e1_e2 + multivectorA.e2_e3_no * bivectorB.e3_ni + multivectorA.e2_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e3 * bivectorB.e2_e3 + multivectorA.ni * bivectorB.e2_no + multivectorA.no * bivectorB.e2_ni + multivectorA.e1_e2_e3 * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e2_no + multivectorA.e1 * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * bivectorB.e2_ni + multivectorA.e3_no_ni * bivectorB.no_ni + multivectorA.ni * bivectorB.e3_no + multivectorA.no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e1_e2;
	this->no = (-1.0) * multivectorA.e1_e3_no * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_no_ni * bivectorB.e1_no + multivectorA.e2 * bivectorB.e2_no + multivectorA.e1 * bivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e2_no_ni * bivectorB.e2_no + multivectorA.e3 * bivectorB.e3_no + (-1.0) * multivectorA.e3_no_ni * bivectorB.e3_no + multivectorA.no * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_e2;
	this->ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e1_e3 + multivectorA.e1_no_ni * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e2_e3 + multivectorA.e1 * bivectorB.e1_ni + multivectorA.e2_no_ni * bivectorB.e2_ni + multivectorA.e3 * bivectorB.e3_ni + multivectorA.e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.ni * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_e2;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_e3 * bivectorB.e2_e3 + multivectorA.e1_ni * bivectorB.e2_no + multivectorA.e1_no * bivectorB.e2_ni + multivectorA.e2_e3 * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e2_no * bivectorB.e1_ni + multivectorA.e1_e2_e3_ni * bivectorB.e3_no + multivectorA.e1_e2_e3_no * bivectorB.e3_ni + multivectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_e3 = multivectorA._1 * bivectorB.e1_e3 + multivectorA.e1_e3_no_ni * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e3_no + multivectorA.e1_no * bivectorB.e3_ni + (-1.0) * multivectorA.e2_e3 * bivectorB.e1_e2 + (-1.0) * multivectorA.e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e3_no * bivectorB.e1_ni + multivectorA.e1_e2 * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e2_ni;
	this->e1_no = multivectorA._1 * bivectorB.e1_no + multivectorA.e1_e3 * bivectorB.e3_no + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e3_no + multivectorA.e1_no * bivectorB.no_ni + (-1.0) * multivectorA.e2_no * bivectorB.e1_e2 + (-1.0) * multivectorA.e3_no * bivectorB.e1_e3 + multivectorA.e1_e2 * bivectorB.e2_no + (-1.0) * multivectorA.no_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e2_no;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni + multivectorA.e1_e3 * bivectorB.e3_ni + multivectorA.e1_e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e1_ni * bivectorB.no_ni + (-1.0) * multivectorA.e2_ni * bivectorB.e1_e2 + (-1.0) * multivectorA.e3_ni * bivectorB.e1_e3 + multivectorA.e1_e2 * bivectorB.e2_ni + multivectorA.no_ni * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e2_e3 + multivectorA.e1_e2_no_ni * bivectorB.e2_ni;
	this->e2_e3 = multivectorA._1 * bivectorB.e2_e3 + multivectorA.e1_e3 * bivectorB.e1_e2 + multivectorA.e2_e3_no_ni * bivectorB.no_ni + multivectorA.e2_ni * bivectorB.e3_no + multivectorA.e2_no * bivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * bivectorB.e2_no + (-1.0) * multivectorA.e3_no * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e3 + multivectorA.e1_e2_e3_ni * bivectorB.e1_no + multivectorA.e1_e2_e3_no * bivectorB.e1_ni;
	this->e2_no = multivectorA._1 * bivectorB.e2_no + multivectorA.e1_no * bivectorB.e1_e2 + multivectorA.e2_e3 * bivectorB.e3_no + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e3_no + multivectorA.e2_no * bivectorB.no_ni + (-1.0) * multivectorA.e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_no + (-1.0) * multivectorA.no_ni * bivectorB.e2_no + multivectorA.e1_e2_e3_no * bivectorB.e1_e3 + multivectorA.e1_e2_no_ni * bivectorB.e1_no;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni + multivectorA.e1_ni * bivectorB.e1_e2 + multivectorA.e2_e3 * bivectorB.e3_ni + multivectorA.e2_e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e2_ni * bivectorB.no_ni + (-1.0) * multivectorA.e3_ni * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_ni + multivectorA.no_ni * bivectorB.e2_ni + multivectorA.e1_e2_e3_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_ni;
	this->e3_no = multivectorA._1 * bivectorB.e3_no + (-1.0) * multivectorA.e1_e3 * bivectorB.e1_no + multivectorA.e1_e3_no_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_no + multivectorA.e2_e3_no_ni * bivectorB.e2_no + multivectorA.e2_no * bivectorB.e2_e3 + multivectorA.e3_no * bivectorB.no_ni + (-1.0) * multivectorA.no_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e1_e2;
	this->e3_ni = multivectorA._1 * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e3 * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e1_ni + multivectorA.e1_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3 * bivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e2_ni + multivectorA.e2_ni * bivectorB.e2_e3 + (-1.0) * multivectorA.e3_ni * bivectorB.no_ni + multivectorA.no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e1_e2;
	this->no_ni = multivectorA._1 * bivectorB.no_ni + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e1_e3 + multivectorA.e1_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_no * bivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e2_e3 + multivectorA.e2_ni * bivectorB.e2_no + (-1.0) * multivectorA.e2_no * bivectorB.e2_ni + multivectorA.e3_ni * bivectorB.e3_no + (-1.0) * multivectorA.e3_no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e3_no * bivectorB.e2_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_e3 + multivectorA.e2_e3_ni * bivectorB.e1_no + multivectorA.e1 * bivectorB.e2_e3 + multivectorA.e2_e3_no * bivectorB.e1_ni + multivectorA.e3 * bivectorB.e1_e2 + multivectorA.e1_e2_e3_no_ni * bivectorB.no_ni + multivectorA.e1_e2_ni * bivectorB.e3_no + multivectorA.e1_e2_no * bivectorB.e3_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e3_no * bivectorB.e2_e3 + (-1.0) * multivectorA.e1_no_ni * bivectorB.e2_no + (-1.0) * multivectorA.e2 * bivectorB.e1_no + multivectorA.e1 * bivectorB.e2_no + multivectorA.e2_e3_no * bivectorB.e1_e3 + multivectorA.e2_no_ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_e2 + multivectorA.e1_e2_e3 * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e3_no + multivectorA.e1_e2_no * bivectorB.no_ni;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e2_e3 + multivectorA.e1_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_ni + multivectorA.e2_e3_ni * bivectorB.e1_e3 + multivectorA.e1 * bivectorB.e2_ni + (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_ni + multivectorA.ni * bivectorB.e1_e2 + multivectorA.e1_e2_e3 * bivectorB.e3_ni + multivectorA.e1_e2_e3_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.no_ni;
	this->e1_e3_no = multivectorA.e1_e3_no * bivectorB.no_ni + (-1.0) * multivectorA.e1_no_ni * bivectorB.e3_no + multivectorA.e1 * bivectorB.e3_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e1_e2 + (-1.0) * multivectorA.e3 * bivectorB.e1_no + multivectorA.e3_no_ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_no + multivectorA.e1_e2_e3_no_ni * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.e2_e3;
	this->e1_e3_ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.no_ni + multivectorA.e1_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e1_e2 + multivectorA.e1 * bivectorB.e3_ni + (-1.0) * multivectorA.e3 * bivectorB.e1_ni + (-1.0) * multivectorA.e3_no_ni * bivectorB.e1_ni + multivectorA.ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3 * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e2_ni + multivectorA.e1_e2_ni * bivectorB.e2_e3;
	this->e1_no_ni = multivectorA.e1_e3_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e3_no * bivectorB.e3_ni + multivectorA.e1 * bivectorB.no_ni + (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_e2 + (-1.0) * multivectorA.e3_no_ni * bivectorB.e1_e3 + multivectorA.ni * bivectorB.e1_no + (-1.0) * multivectorA.no * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e2_e3 + multivectorA.e1_e2_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e2_ni;
	this->e2_e3_no = multivectorA.e1_e3_no * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.e3_no + multivectorA.e2_e3_no * bivectorB.no_ni + (-1.0) * multivectorA.e2_no_ni * bivectorB.e3_no + (-1.0) * multivectorA.e3 * bivectorB.e2_no + multivectorA.e3_no_ni * bivectorB.e2_no + multivectorA.no * bivectorB.e2_e3 + multivectorA.e1_e2_e3 * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_e3;
	this->e2_e3_ni = multivectorA.e1_e3_ni * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.e3_ni + (-1.0) * multivectorA.e2_e3_ni * bivectorB.no_ni + multivectorA.e2_no_ni * bivectorB.e3_ni + (-1.0) * multivectorA.e3 * bivectorB.e2_ni + (-1.0) * multivectorA.e3_no_ni * bivectorB.e2_ni + multivectorA.ni * bivectorB.e2_e3 + multivectorA.e1_e2_e3 * bivectorB.e1_ni + multivectorA.e1_e2_e3_no_ni * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_e3;
	this->e2_no_ni = multivectorA.e1_no_ni * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.no_ni + multivectorA.e2_e3_ni * bivectorB.e3_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e3_ni + (-1.0) * multivectorA.e3_no_ni * bivectorB.e2_e3 + multivectorA.ni * bivectorB.e2_no + (-1.0) * multivectorA.no * bivectorB.e2_ni + multivectorA.e1_e2_e3_no_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + multivectorA.e1_e2_no * bivectorB.e1_ni;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e1_no + multivectorA.e1_e3_no * bivectorB.e1_ni + multivectorA.e1_no_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_ni * bivectorB.e2_no + multivectorA.e2_e3_no * bivectorB.e2_ni + multivectorA.e2_no_ni * bivectorB.e2_e3 + multivectorA.e3 * bivectorB.no_ni + multivectorA.ni * bivectorB.e3_no + (-1.0) * multivectorA.no * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * bivectorB.e1_e2;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e1_e3 * bivectorB.e2_no + multivectorA.e1_e3_no_ni * bivectorB.e2_no + multivectorA.e1_no * bivectorB.e2_e3 + multivectorA.e2_e3 * bivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e1_no + (-1.0) * multivectorA.e2_no * bivectorB.e1_e3 + multivectorA.e3_no * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.e3_no + multivectorA.e1_e2_e3_no * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e3_no;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e1_e3 * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e2_ni + multivectorA.e1_ni * bivectorB.e2_e3 + multivectorA.e2_e3 * bivectorB.e1_ni + multivectorA.e2_e3_no_ni * bivectorB.e1_ni + (-1.0) * multivectorA.e2_ni * bivectorB.e1_e3 + multivectorA.e3_ni * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.no_ni + multivectorA.e1_e2_no_ni * bivectorB.e3_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * bivectorB.e2_e3 + multivectorA.e1_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_no * bivectorB.e2_ni + multivectorA.e2_e3_no_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + multivectorA.e2_no * bivectorB.e1_ni + multivectorA.e1_e2 * bivectorB.no_ni + multivectorA.no_ni * bivectorB.e1_e2 + multivectorA.e1_e2_e3_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e3_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3 * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_no * bivectorB.e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * bivectorB.e1_e2 + (-1.0) * multivectorA.e3_ni * bivectorB.e1_no + multivectorA.e3_no * bivectorB.e1_ni + multivectorA.no_ni * bivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * bivectorB.e2_no + multivectorA.e1_e2_e3_no * bivectorB.e2_ni + multivectorA.e1_e2_no_ni * bivectorB.e2_e3;
	this->e2_e3_no_ni = multivectorA.e1_e3_no_ni * bivectorB.e1_e2 + multivectorA.e2_e3 * bivectorB.no_ni + multivectorA.e2_ni * bivectorB.e3_no + (-1.0) * multivectorA.e2_no * bivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * bivectorB.e2_no + multivectorA.e3_no * bivectorB.e2_ni + multivectorA.no_ni * bivectorB.e2_e3 + multivectorA.e1_e2_e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_e3;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * bivectorB.e2_no + multivectorA.e1_e3_no * bivectorB.e2_ni + multivectorA.e1_no_ni * bivectorB.e2_e3 + multivectorA.e2_e3_ni * bivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * bivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_e3 + multivectorA.e3_no_ni * bivectorB.e1_e2 + multivectorA.e1_e2_e3 * bivectorB.no_ni + multivectorA.e1_e2_ni * bivectorB.e3_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e3_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA.e1_e3_ni * trivectorB.e1_e3_no + multivectorA.e1_e3_no * trivectorB.e1_e3_ni + multivectorA.e1_no_ni * trivectorB.e1_no_ni + multivectorA.e2_e3_ni * trivectorB.e2_e3_no + multivectorA.e2_e3_no * trivectorB.e2_e3_ni + multivectorA.e2_no_ni * trivectorB.e2_no_ni + multivectorA.e3_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_e2_ni;
	this->e1 = multivectorA.e1_e3_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e1_e2_e3 + multivectorA.e2_ni * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.e3_ni * trivectorB.e1_e3_no + multivectorA.e3_no * trivectorB.e1_e3_ni + multivectorA.no_ni * trivectorB.e1_no_ni + multivectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + multivectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + multivectorA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = multivectorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e2_ni + multivectorA.e2_e3_no_ni * trivectorB.e3_no_ni + multivectorA.e3_ni * trivectorB.e2_e3_no + multivectorA.e3_no * trivectorB.e2_e3_ni + multivectorA.no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_e3 + multivectorA.no_ni * trivectorB.e3_no_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * trivectorB.e1_e2_ni;
	this->no = (-1.0) * multivectorA.e1_e3 * trivectorB.e1_e3_no + multivectorA.e1_e3_no_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e2_e3_no + multivectorA.e2_e3_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e3_no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * trivectorB.e1_e2_e3 + multivectorA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * multivectorA.e1_e3 * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e1_e3_ni + multivectorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e2_e3_ni + multivectorA.e2_ni * trivectorB.e2_no_ni + multivectorA.e3_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e2_ni;
	this->e1_e2 = multivectorA.e1_e3_ni * trivectorB.e2_e3_no + multivectorA.e1_e3_no * trivectorB.e2_e3_ni + multivectorA.e1_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_no_ni + multivectorA.e3 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = multivectorA.e1_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_e3 + multivectorA.e2_e3_ni * trivectorB.e1_e2_no + multivectorA.e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e3_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_no * trivectorB.e2_e3_ni;
	this->e1_no = (-1.0) * multivectorA.e1_e3_no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_no + multivectorA.e2_e3_no * trivectorB.e1_e2_e3 + multivectorA.e2_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e3 * trivectorB.e1_e3_no + multivectorA.e3_no_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e2_e3_no + multivectorA.e1_e2_e3_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_no * trivectorB.e2_no_ni;
	this->e1_ni = multivectorA.e1_e3_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_ni + multivectorA.e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e3 * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_no_ni * trivectorB.e1_e3_ni + multivectorA.ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni + multivectorA.e1_e2_ni * trivectorB.e2_no_ni;
	this->e2_e3 = (-1.0) * multivectorA.e1_e3_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e3_no * trivectorB.e1_e2_ni + multivectorA.e1 * trivectorB.e1_e2_e3 + multivectorA.e2_no_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.no * trivectorB.e2_e3_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_no_ni + multivectorA.e1_e2_ni * trivectorB.e1_e3_no + multivectorA.e1_e2_no * trivectorB.e1_e3_ni;
	this->e2_no = (-1.0) * multivectorA.e1_e3_no * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_no_ni * trivectorB.e1_e2_no + multivectorA.e1 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e2_e3_no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * trivectorB.e2_e3_no + multivectorA.e3_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.no * trivectorB.e2_no_ni + multivectorA.e1_e2_e3 * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e3_no + multivectorA.e1_e2_no * trivectorB.e1_no_ni;
	this->e2_ni = (-1.0) * multivectorA.e1_e3_ni * trivectorB.e1_e2_e3 + multivectorA.e1_no_ni * trivectorB.e1_e2_ni + multivectorA.e2_e3_ni * trivectorB.e3_no_ni + multivectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e3 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e3_no_ni * trivectorB.e2_e3_ni + multivectorA.ni * trivectorB.e2_no_ni + multivectorA.e1_e2_e3 * trivectorB.e1_e3_ni + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_ni * trivectorB.e1_no_ni;
	this->e3_no = multivectorA.e1_e3_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * trivectorB.e1_e3_no + multivectorA.e2 * trivectorB.e2_e3_no + multivectorA.e1 * trivectorB.e1_e3_no + multivectorA.e2_e3_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e1_e2_no + multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_e2_e3;
	this->e3_ni = (-1.0) * multivectorA.e1_e3_ni * trivectorB.e1_no_ni + multivectorA.e1_no_ni * trivectorB.e1_e3_ni + multivectorA.e2 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_ni * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_e3_ni + multivectorA.e2_no_ni * trivectorB.e2_e3_ni + multivectorA.ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni + multivectorA.e1_e2_ni * trivectorB.e1_e2_e3;
	this->no_ni = multivectorA.e1_e3_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e3_no * trivectorB.e1_e3_ni + multivectorA.e2 * trivectorB.e2_no_ni + multivectorA.e2_e3_ni * trivectorB.e2_e3_no + multivectorA.e1 * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3_no * trivectorB.e2_e3_ni + multivectorA.e3 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3 + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * trivectorB.e1_e2_ni;
	this->e1_e2_e3 = multivectorA._1 * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e2_e3_ni + multivectorA.e2_e3_no_ni * trivectorB.e1_no_ni + multivectorA.e2_ni * trivectorB.e1_e3_no + multivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e3_no * trivectorB.e1_e2_ni + multivectorA.e1_e2_no_ni * trivectorB.e3_no_ni;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e3 * trivectorB.e2_e3_no + multivectorA.e1_e3_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e2_no_ni + multivectorA.e2_e3 * trivectorB.e1_e3_no + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e1_e3_no + multivectorA.e2_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e3_no * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e3_no_ni;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e3 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e2_e3_ni + multivectorA.e1_ni * trivectorB.e2_no_ni + multivectorA.e2_e3 * trivectorB.e1_e3_ni + multivectorA.e2_e3_no_ni * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e3_ni * trivectorB.e1_e2_e3 + multivectorA.no_ni * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3_ni * trivectorB.e3_no_ni;
	this->e1_e3_no = multivectorA._1 * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e1_e2_no + multivectorA.e2_e3_no_ni * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_e2_e3 + multivectorA.e3_no * trivectorB.e1_no_ni + multivectorA.e1_e2 * trivectorB.e2_e3_no + (-1.0) * multivectorA.no_ni * trivectorB.e1_e3_no + multivectorA.e1_e2_e3_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e2_e3_no;
	this->e1_e3_ni = multivectorA._1 * trivectorB.e1_e3_ni + multivectorA.e1_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e1_e2_ni + multivectorA.e2_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e3_ni * trivectorB.e1_no_ni + multivectorA.e1_e2 * trivectorB.e2_e3_ni + multivectorA.no_ni * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * trivectorB.e2_no_ni + multivectorA.e1_e2_no_ni * trivectorB.e2_e3_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni + multivectorA.e1_e3 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * trivectorB.e1_e2_e3 + multivectorA.e2_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.e3_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e3_no * trivectorB.e1_e3_ni + multivectorA.e1_e2 * trivectorB.e2_no_ni + multivectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e2_e3_ni;
	this->e2_e3_no = multivectorA._1 * trivectorB.e2_e3_no + multivectorA.e1_e3 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e3_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_no * trivectorB.e3_no_ni + multivectorA.e3_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e3_no + (-1.0) * multivectorA.no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * trivectorB.e1_e3_no;
	this->e2_e3_ni = multivectorA._1 * trivectorB.e2_e3_ni + multivectorA.e1_e3 * trivectorB.e1_e2_ni + multivectorA.e1_e3_no_ni * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_e3 + multivectorA.e2_ni * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e3_ni + multivectorA.no_ni * trivectorB.e2_e3_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e3_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni + multivectorA.e1_e3_no_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + multivectorA.e1_no * trivectorB.e1_e2_ni + multivectorA.e2_e3 * trivectorB.e3_no_ni + multivectorA.e3_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e3_no * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + multivectorA.e1_e2_e3_no * trivectorB.e1_e3_ni;
	this->e3_no_ni = multivectorA._1 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e3 * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e3_no + multivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * trivectorB.e2_e3_no + multivectorA.e2_no * trivectorB.e2_e3_ni + multivectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e2_e3;
	this->e1_e2_e3_no = multivectorA.e1_e3_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_no_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2 * trivectorB.e1_e3_no + multivectorA.e1 * trivectorB.e2_e3_no + (-1.0) * multivectorA.e2_e3_no * trivectorB.e1_no_ni + multivectorA.e2_no_ni * trivectorB.e1_e3_no + multivectorA.e3 * trivectorB.e1_e2_no + (-1.0) * multivectorA.e3_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_no * trivectorB.e3_no_ni;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e1_e3_ni * trivectorB.e2_no_ni + multivectorA.e1_no_ni * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e3_ni + multivectorA.e2_e3_ni * trivectorB.e1_no_ni + multivectorA.e1 * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_e3_ni + multivectorA.e3 * trivectorB.e1_e2_ni + multivectorA.e3_no_ni * trivectorB.e1_e2_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e2_e3 + multivectorA.e1_e2_ni * trivectorB.e3_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e3_ni * trivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e3_no * trivectorB.e2_e3_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3_ni * trivectorB.e1_e3_no + multivectorA.e1 * trivectorB.e2_no_ni + multivectorA.e2_e3_no * trivectorB.e1_e3_ni + multivectorA.e3_no_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1_e2_e3 * trivectorB.e3_no_ni;
	this->e1_e3_no_ni = multivectorA.e2_e3_ni * trivectorB.e1_e2_no + multivectorA.e1 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_e2_e3 + (-1.0) * multivectorA.e3 * trivectorB.e1_no_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e3_no + multivectorA.no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * trivectorB.e2_e3_no + multivectorA.e1_e2_no * trivectorB.e2_e3_ni;
	this->e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * trivectorB.e1_e2_no + multivectorA.e1_e3_no * trivectorB.e1_e2_ni + multivectorA.e1_no_ni * trivectorB.e1_e2_e3 + multivectorA.e2 * trivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.ni * trivectorB.e2_e3_no + multivectorA.no * trivectorB.e2_e3_ni + multivectorA.e1_e2_e3 * trivectorB.e1_no_ni + multivectorA.e1_e2_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_no * trivectorB.e1_e3_ni;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e2_e3_no + multivectorA.e1_no * trivectorB.e2_e3_ni + multivectorA.e2_e3 * trivectorB.e1_no_ni + multivectorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * multivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_ni * trivectorB.e1_e2_no + multivectorA.e3_no * trivectorB.e1_e2_ni + multivectorA.e1_e2 * trivectorB.e3_no_ni + multivectorA.no_ni * trivectorB.e1_e2_e3;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * multivectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = multivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + multivectorA.e1_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no_ni * quadvectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = multivectorA.e1_no_ni * quadvectorB.e1_e3_no_ni + multivectorA.e2_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni;
	this->no = (-1.0) * multivectorA.e1_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * quadvectorB.e1_e2_no_ni;
	this->ni = multivectorA.e1_e3_ni * quadvectorB.e1_e3_no_ni + multivectorA.e2_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni + multivectorA.e1_e2_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e2 = (-1.0) * multivectorA.e1_e3_no_ni * quadvectorB.e2_e3_no_ni + multivectorA.e2_e3_no_ni * quadvectorB.e1_e3_no_ni + multivectorA.e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e3_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3 = (-1.0) * multivectorA.e2_e3_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e1_e3_no_ni + multivectorA.e1_e2_no_ni * quadvectorB.e2_e3_no_ni;
	this->e1_no = (-1.0) * multivectorA.e2_e3 * quadvectorB.e1_e2_e3_no + multivectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no * quadvectorB.e2_e3_no_ni;
	this->e1_ni = (-1.0) * multivectorA.e2_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_ni + multivectorA.e2_ni * quadvectorB.e1_e2_no_ni + multivectorA.e3_ni * quadvectorB.e1_e3_no_ni + multivectorA.e1_e2_e3_ni * quadvectorB.e2_e3_no_ni;
	this->e2_e3 = multivectorA.e1_e3_no_ni * quadvectorB.e1_e2_no_ni + multivectorA.e1_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_no * quadvectorB.e1_e2_e3_ni + multivectorA.no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * quadvectorB.e1_e3_no_ni;
	this->e2_no = multivectorA.e1_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no * quadvectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_no * quadvectorB.e1_e3_no_ni;
	this->e2_ni = multivectorA.e1_e3 * quadvectorB.e1_e2_e3_ni + multivectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_ni * quadvectorB.e1_e2_no_ni + multivectorA.e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * quadvectorB.e1_e3_no_ni;
	this->e3_no = multivectorA.e1_no * quadvectorB.e1_e3_no_ni + multivectorA.e2_no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * quadvectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_no;
	this->e3_ni = (-1.0) * multivectorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_e3_ni + multivectorA.e1_e2_e3_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3 * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3 = multivectorA.e1_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_no_ni * quadvectorB.e1_e3_no_ni + multivectorA.e3_no_ni * quadvectorB.e1_e2_no_ni + multivectorA.ni * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e3_no * quadvectorB.e2_e3_no_ni + multivectorA.e2_e3_no * quadvectorB.e1_e3_no_ni + multivectorA.e3 * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3_no_ni * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_ni = multivectorA.e1_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_e3_ni * quadvectorB.e1_e3_no_ni + multivectorA.e3 * quadvectorB.e1_e2_e3_ni + multivectorA.e3_no_ni * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_e3_no * quadvectorB.e1_e2_no_ni + multivectorA.e2_no_ni * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e1_e3_no_ni + multivectorA.e1_e2_no * quadvectorB.e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_e3_ni + multivectorA.e2_e3_ni * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_no_ni * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_ni * quadvectorB.e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + multivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e3 * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e2_e3_no_ni;
	this->e2_e3_no = multivectorA.e1_e3_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_no_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1 * quadvectorB.e1_e2_e3_no + multivectorA.no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_no * quadvectorB.e1_e3_no_ni;
	this->e2_e3_ni = (-1.0) * multivectorA.e1_e3_ni * quadvectorB.e1_e2_no_ni + multivectorA.e1_no_ni * quadvectorB.e1_e2_e3_ni + multivectorA.e1 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.ni * quadvectorB.e2_e3_no_ni + multivectorA.e1_e2_ni * quadvectorB.e1_e3_no_ni;
	this->e2_no_ni = multivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + multivectorA.e1 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * quadvectorB.e2_e3_no_ni + multivectorA.e1_e2_e3 * quadvectorB.e1_e3_no_ni;
	this->e3_no_ni = multivectorA.e2 * quadvectorB.e2_e3_no_ni + multivectorA.e1 * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + multivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3_no = multivectorA._1 * quadvectorB.e1_e2_e3_no + multivectorA.e1_no * quadvectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_no * quadvectorB.e1_e3_no_ni + multivectorA.e3_no * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA._1 * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_ni * quadvectorB.e2_e3_no_ni + multivectorA.e2_ni * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e3_ni * quadvectorB.e1_e2_no_ni + multivectorA.no_ni * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA._1 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e3 * quadvectorB.e2_e3_no_ni + multivectorA.e2_e3 * quadvectorB.e1_e3_no_ni + multivectorA.e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e3_no_ni = multivectorA._1 * quadvectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3 * quadvectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_ni * quadvectorB.e1_e2_e3_no + multivectorA.e2_no * quadvectorB.e1_e2_e3_ni + multivectorA.e1_e2 * quadvectorB.e2_e3_no_ni;
	this->e2_e3_no_ni = multivectorA._1 * quadvectorB.e2_e3_no_ni + multivectorA.e1_e3 * quadvectorB.e1_e2_no_ni + multivectorA.e1_ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_no * quadvectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2 * quadvectorB.e1_e3_no_ni;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e2 * quadvectorB.e1_e3_no_ni + multivectorA.e1 * quadvectorB.e2_e3_no_ni + multivectorA.e3 * quadvectorB.e1_e2_no_ni + multivectorA.ni * quadvectorB.e1_e2_e3_no + (-1.0) * multivectorA.no * quadvectorB.e1_e2_e3_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = multivectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * multivectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = multivectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * multivectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2 = multivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * multivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = multivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * multivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = multivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * multivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = multivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = multivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * multivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3 = multivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = multivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = multivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * multivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * multivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = multivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = multivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = (-1.0) * multivectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = multivectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = multivectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e3_no + multivectorA.e1_e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3_no_ni + multivectorA.e1_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1_no_ni + multivectorA.e2 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3 + multivectorA.e2_e3_ni * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1 + multivectorA.e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e2_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2_no_ni + multivectorA.e3 * multivectorB.e3 + multivectorA.e3_ni * multivectorB.e3_no + multivectorA.e3_no * multivectorB.e3_ni + multivectorA.e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1_e3 * multivectorB.e3 + multivectorA.e1_e3_ni * multivectorB.e3_no + multivectorA.e1_e3_no * multivectorB.e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1 * multivectorB._1 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_ni * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3 + multivectorA.e3_ni * multivectorB.e1_e3_no + multivectorA.e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e3_no_ni + multivectorA.ni * multivectorB.e1_no + multivectorA.e1_e2 * multivectorB.e2 + multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3 + multivectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_ni * multivectorB.e2_no + multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_no_ni;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e1_e3 * multivectorB.e1_e2_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e2 * multivectorB._1 + multivectorA.e2_e3 * multivectorB.e3 + multivectorA.e2_e3_ni * multivectorB.e3_no + multivectorA.e1 * multivectorB.e1_e2 + multivectorA.e2_e3_no * multivectorB.e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e3 * multivectorB.e2_e3 + multivectorA.e3_ni * multivectorB.e2_e3_no + multivectorA.e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2_no_ni + multivectorA.e1_e2_e3 * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_no_ni;
	this->e3 = multivectorA._1 * multivectorB.e3 + (-1.0) * multivectorA.e1_e3 * multivectorB.e1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e3_no_ni + multivectorA.e2 * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_no + multivectorA.e1 * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e2_e3_ni + multivectorA.e2_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e3 * multivectorB._1 + (-1.0) * multivectorA.e3_ni * multivectorB.no + (-1.0) * multivectorA.e3_no * multivectorB.ni + multivectorA.e3_no_ni * multivectorB.no_ni + multivectorA.ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3 + multivectorA.no * multivectorB.e3_ni + multivectorA.no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2 + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no_ni;
	this->no = multivectorA._1 * multivectorB.no + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1 + (-1.0) * multivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_no + multivectorA.e2 * multivectorB.e2_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_e3_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e2 + (-1.0) * multivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e2_no + multivectorA.e3 * multivectorB.e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e3 + (-1.0) * multivectorA.e3_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no + multivectorA.no * multivectorB._1 + multivectorA.no * multivectorB.no_ni + (-1.0) * multivectorA.no_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no;
	this->ni = multivectorA._1 * multivectorB.ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1 + multivectorA.e1_ni * multivectorB.e1_no_ni + multivectorA.e1_no_ni * multivectorB.e1_ni + multivectorA.e2 * multivectorB.e2_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_e3 + multivectorA.e2_e3_ni * multivectorB.e2_e3_no_ni + multivectorA.e1 * multivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2 + multivectorA.e2_ni * multivectorB.e2_no_ni + multivectorA.e2_no_ni * multivectorB.e2_ni + multivectorA.e3 * multivectorB.e3_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e3 + multivectorA.e3_ni * multivectorB.e3_no_ni + multivectorA.e3_no_ni * multivectorB.e3_ni + multivectorA.ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_ni;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_e3 + multivectorA.e1_e3_ni * multivectorB.e2_e3_no + multivectorA.e1_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_ni * multivectorB.e2_no + multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1 + multivectorA.e2_e3 * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e3_no + multivectorA.e1 * multivectorB.e2 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_no_ni + multivectorA.e3 * multivectorB.e1_e2_e3 + multivectorA.e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_e3 * multivectorB.e3 + multivectorA.e1_e2_e3_ni * multivectorB.e3_no + multivectorA.e1_e2_e3_no * multivectorB.e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_e3 = multivectorA._1 * multivectorB.e1_e3 + multivectorA.e1_e3 * multivectorB._1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.no + (-1.0) * multivectorA.e1_e3_no * multivectorB.ni + multivectorA.e1_e3_no_ni * multivectorB.no_ni + multivectorA.e1_ni * multivectorB.e3_no + multivectorA.e1_no * multivectorB.e3_ni + multivectorA.e1_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2 + multivectorA.e2_e3_ni * multivectorB.e1_e2_no + multivectorA.e1 * multivectorB.e3 + multivectorA.e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e1 + (-1.0) * multivectorA.e3_ni * multivectorB.e1_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no + multivectorA.e1_e2 * multivectorB.e2_e3 + (-1.0) * multivectorA.no * multivectorB.e1_e3_ni + multivectorA.no_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2_e3_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_e3_no_ni;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + multivectorA.e1_e3 * multivectorB.e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e1_e3_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e3_no + multivectorA.e1_no * multivectorB._1 + multivectorA.e1_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_no + multivectorA.e1 * multivectorB.no + multivectorA.e2_e3_no * multivectorB.e1_e2_e3 + multivectorA.e2_e3_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_no_ni + multivectorA.e2_no_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e3_no * multivectorB.e1_e3_no_ni + multivectorA.e3_no_ni * multivectorB.e1_e3_no + multivectorA.e1_e2 * multivectorB.e2_no + (-1.0) * multivectorA.no * multivectorB.e1 + (-1.0) * multivectorA.no * multivectorB.e1_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e2_no;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + multivectorA.e1_e3 * multivectorB.e3_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e3 + multivectorA.e1_e3_ni * multivectorB.e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e3_ni + multivectorA.e1_ni * multivectorB._1 + (-1.0) * multivectorA.e1_ni * multivectorB.no_ni + multivectorA.e1_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_ni + multivectorA.e2_e3_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1 * multivectorB.ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2 + multivectorA.e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e3 + multivectorA.e3_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e3_ni + (-1.0) * multivectorA.ni * multivectorB.e1 + multivectorA.ni * multivectorB.e1_no_ni + multivectorA.e1_e2 * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_e3 + multivectorA.e1_e2_e3_ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2 + multivectorA.e1_e2_ni * multivectorB.e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_ni;
	this->e2_e3 = multivectorA._1 * multivectorB.e2_e3 + multivectorA.e1_e3 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e2_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e2 * multivectorB.e3 + multivectorA.e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.no + multivectorA.e1 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.ni + multivectorA.e2_e3_no_ni * multivectorB.no_ni + multivectorA.e2_ni * multivectorB.e3_no + multivectorA.e2_no * multivectorB.e3_ni + multivectorA.e2_no_ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e3 * multivectorB.e2 + (-1.0) * multivectorA.e3_ni * multivectorB.e2_no + (-1.0) * multivectorA.e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e3 + (-1.0) * multivectorA.no * multivectorB.e2_e3_ni + multivectorA.no_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_e3 * multivectorB.e1 + multivectorA.e1_e2_e3_ni * multivectorB.e1_no + multivectorA.e1_e2_e3_no * multivectorB.e1_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_no_ni + multivectorA.e1_e2_ni * multivectorB.e1_e3_no + multivectorA.e1_e2_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e3_no_ni;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e1_e3 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_no * multivectorB.e1_e2 + multivectorA.e1_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_e2_no + multivectorA.e2 * multivectorB.no + multivectorA.e2_e3 * multivectorB.e3_no + multivectorA.e1 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e3_no + multivectorA.e2_no * multivectorB._1 + multivectorA.e2_no * multivectorB.no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.no + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e3_no * multivectorB.e2_e3_no_ni + multivectorA.e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_no + (-1.0) * multivectorA.no * multivectorB.e2 + (-1.0) * multivectorA.no * multivectorB.e2_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e2_no + multivectorA.e1_e2_e3 * multivectorB.e1_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e3 + multivectorA.e1_e2_e3_no * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_no + multivectorA.e1_e2_no * multivectorB.e1 + multivectorA.e1_e2_no * multivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_no;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e1_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e2_e3 + multivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_e3_ni + multivectorA.e1_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_ni + multivectorA.e2 * multivectorB.ni + multivectorA.e2_e3 * multivectorB.e3_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e3 + multivectorA.e2_e3_ni * multivectorB.e3_no_ni + multivectorA.e1 * multivectorB.e1_e2_ni + multivectorA.e2_e3_no_ni * multivectorB.e3_ni + multivectorA.e2_ni * multivectorB._1 + (-1.0) * multivectorA.e2_ni * multivectorB.no_ni + multivectorA.e2_no_ni * multivectorB.ni + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e2_e3 + multivectorA.e3_ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.ni * multivectorB.e2 + multivectorA.ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e2_ni + multivectorA.e1_e2_e3 * multivectorB.e1_e3_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3_ni + multivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_ni;
	this->e3_no = multivectorA._1 * multivectorB.e3_no + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_no + multivectorA.e1_e3_no * multivectorB.e1 + multivectorA.e1_e3_no * multivectorB.e1_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_e3 + multivectorA.e1_no * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_e3_no + multivectorA.e2 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_no + multivectorA.e1 * multivectorB.e1_e3_no + multivectorA.e2_e3_no * multivectorB.e2 + multivectorA.e2_e3_no * multivectorB.e2_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_e3 + multivectorA.e2_no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e2_e3_no + multivectorA.e3 * multivectorB.no + multivectorA.e3_no * multivectorB._1 + multivectorA.e3_no * multivectorB.no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.no * multivectorB.e3 + (-1.0) * multivectorA.no * multivectorB.e3_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_e3 + multivectorA.e1_e2_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_no;
	this->e3_ni = multivectorA._1 * multivectorB.e3_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_ni + multivectorA.e1_e3_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_ni + multivectorA.e1_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e3_no_ni + multivectorA.e1_no_ni * multivectorB.e1_e3_ni + multivectorA.e2 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_ni + multivectorA.e2_e3_ni * multivectorB.e2 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_no_ni + multivectorA.e1 * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_ni + multivectorA.e2_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e2_ni * multivectorB.e2_e3_no_ni + multivectorA.e2_no_ni * multivectorB.e2_e3_ni + multivectorA.e3 * multivectorB.ni + multivectorA.e3_ni * multivectorB._1 + (-1.0) * multivectorA.e3_ni * multivectorB.no_ni + multivectorA.e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.ni * multivectorB.e3 + multivectorA.ni * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_ni + multivectorA.no_ni * multivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2 + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_ni + multivectorA.e1_e2_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_e3_ni;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_e3_no_ni + multivectorA.e1_e3_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e3 + multivectorA.e1_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1 + multivectorA.e2 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_e3_no_ni + multivectorA.e2_e3_ni * multivectorB.e2_e3_no + multivectorA.e1 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2_e3 + multivectorA.e2_ni * multivectorB.e2_no + (-1.0) * multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2 + multivectorA.e3 * multivectorB.e3_no_ni + multivectorA.e3_ni * multivectorB.e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e3_ni + multivectorA.e3_no_ni * multivectorB.e3 + (-1.0) * multivectorA.ni * multivectorB.no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no_ni + multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2_e3 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2;
	this->e1_e2_e3 = multivectorA._1 * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_e3 * multivectorB.e2 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e3 + multivectorA.e2_e3 * multivectorB.e1 + multivectorA.e2_e3_ni * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_e3 + multivectorA.e2_e3_no * multivectorB.e1_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_no_ni + multivectorA.e2_ni * multivectorB.e1_e3_no + multivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e3_no_ni + multivectorA.e3 * multivectorB.e1_e2 + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e2_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_no_ni + multivectorA.ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2 * multivectorB.e3 + multivectorA.no * multivectorB.e1_e2_e3_ni + multivectorA.no_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2_e3 * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.ni + multivectorA.e1_e2_e3_no_ni * multivectorB.no_ni + multivectorA.e1_e2_ni * multivectorB.e3_no + multivectorA.e1_e2_no * multivectorB.e3_ni + multivectorA.e1_e2_no_ni * multivectorB.e3_no_ni;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e2_e3 + (-1.0) * multivectorA.e1_e3_no * multivectorB.e2_e3_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e2 + (-1.0) * multivectorA.e1_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e2_no + (-1.0) * multivectorA.e2 * multivectorB.e1_no + multivectorA.e2_e3 * multivectorB.e1_e3_no + multivectorA.e1 * multivectorB.e2_no + multivectorA.e2_e3_no * multivectorB.e1_e3 + multivectorA.e2_e3_no * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e3_no + multivectorA.e2_no * multivectorB.e1 + multivectorA.e2_no * multivectorB.e1_no_ni + multivectorA.e2_no_ni * multivectorB.e1_no + multivectorA.e3 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e3_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2 * multivectorB.no + multivectorA.no * multivectorB.e1_e2 + multivectorA.no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_e3 * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e3 + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e3_no + multivectorA.e1_e2_no * multivectorB._1 + multivectorA.e1_e2_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e2_e3 + multivectorA.e1_e3_ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e2 + multivectorA.e1_ni * multivectorB.e2_no_ni + multivectorA.e1_no_ni * multivectorB.e2_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_ni + multivectorA.e2_e3 * multivectorB.e1_e3_ni + multivectorA.e2_e3_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e3_no_ni + multivectorA.e1 * multivectorB.e2_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_e3_ni + multivectorA.e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_ni + multivectorA.e3 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e2_e3 + multivectorA.e3_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_e3_ni + multivectorA.ni * multivectorB.e1_e2 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e2 * multivectorB.ni + multivectorA.no_ni * multivectorB.e1_e2_ni + multivectorA.e1_e2_e3 * multivectorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e3 + multivectorA.e1_e2_e3_ni * multivectorB.e3_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e3_ni + multivectorA.e1_e2_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no_ni + multivectorA.e1_e2_no_ni * multivectorB.ni;
	this->e1_e3_no = multivectorA._1 * multivectorB.e1_e3_no + multivectorA.e1_e3 * multivectorB.no + multivectorA.e1_e3_no * multivectorB._1 + multivectorA.e1_e3_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.e3 + (-1.0) * multivectorA.e1_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e3_no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_no + multivectorA.e1 * multivectorB.e3_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e2_no_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1_e2_e3 + multivectorA.e2_no * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_no_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3 * multivectorB.e1_no + multivectorA.e3_no * multivectorB.e1 + multivectorA.e3_no * multivectorB.e1_no_ni + multivectorA.e3_no_ni * multivectorB.e1_no + multivectorA.e1_e2 * multivectorB.e2_e3_no + multivectorA.no * multivectorB.e1_e3 + multivectorA.no * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_no + multivectorA.e1_e2_e3_no * multivectorB.e2 + multivectorA.e1_e2_e3_no * multivectorB.e2_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e2_no + multivectorA.e1_e2_no * multivectorB.e2_e3 + multivectorA.e1_e2_no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e2_e3_no;
	this->e1_e3_ni = multivectorA._1 * multivectorB.e1_e3_ni + multivectorA.e1_e3 * multivectorB.ni + multivectorA.e1_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.no_ni + multivectorA.e1_e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.e1_ni * multivectorB.e3 + multivectorA.e1_ni * multivectorB.e3_no_ni + multivectorA.e1_no_ni * multivectorB.e3_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2 + multivectorA.e2_e3_ni * multivectorB.e1_e2_no_ni + multivectorA.e1 * multivectorB.e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_ni + multivectorA.e2_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e3 * multivectorB.e1_ni + multivectorA.e3_ni * multivectorB.e1 + (-1.0) * multivectorA.e3_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_ni + multivectorA.ni * multivectorB.e1_e3 + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no_ni + multivectorA.e1_e2 * multivectorB.e2_e3_ni + multivectorA.no_ni * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_ni + multivectorA.e1_e2_e3_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_ni + multivectorA.e1_e2_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_e3_ni;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + multivectorA.e1_e3 * multivectorB.e3_no_ni + multivectorA.e1_e3_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e1_ni * multivectorB.no + multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e2_e3_no + multivectorA.e1 * multivectorB.no_ni + multivectorA.e2_e3_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2_e3 + multivectorA.e2_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e3 * multivectorB.e1_e3_no_ni + multivectorA.e3_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e3 + multivectorA.ni * multivectorB.e1_no + multivectorA.e1_e2 * multivectorB.e2_no_ni + (-1.0) * multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_e3_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2_e3 + multivectorA.e1_e2_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2;
	this->e2_e3_no = multivectorA._1 * multivectorB.e2_e3_no + multivectorA.e1_e3 * multivectorB.e1_e2_no + multivectorA.e1_e3_no * multivectorB.e1_e2 + multivectorA.e1_e3_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_e2_e3_no + multivectorA.e2 * multivectorB.e3_no + multivectorA.e2_e3 * multivectorB.no + multivectorA.e1 * multivectorB.e1_e2_e3_no + multivectorA.e2_e3_no * multivectorB._1 + multivectorA.e2_e3_no * multivectorB.no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.e3 + (-1.0) * multivectorA.e2_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e3_no + (-1.0) * multivectorA.e3 * multivectorB.e2_no + multivectorA.e3_no * multivectorB.e2 + multivectorA.e3_no * multivectorB.e2_no_ni + multivectorA.e3_no_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e3_no + multivectorA.no * multivectorB.e2_e3 + multivectorA.no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e2_e3_no + multivectorA.e1_e2_e3 * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e3_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e3_no;
	this->e2_e3_ni = multivectorA._1 * multivectorB.e2_e3_ni + multivectorA.e1_e3 * multivectorB.e1_e2_ni + multivectorA.e1_e3_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_e3 + multivectorA.e1_ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_e3_ni + multivectorA.e2 * multivectorB.e3_ni + multivectorA.e2_e3 * multivectorB.ni + multivectorA.e2_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e2_e3_ni * multivectorB.no_ni + multivectorA.e1 * multivectorB.e1_e2_e3_ni + multivectorA.e2_e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2_ni * multivectorB.e3 + multivectorA.e2_ni * multivectorB.e3_no_ni + multivectorA.e2_no_ni * multivectorB.e3_ni + (-1.0) * multivectorA.e3 * multivectorB.e2_ni + multivectorA.e3_ni * multivectorB.e2 + (-1.0) * multivectorA.e3_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_ni + multivectorA.ni * multivectorB.e2_e3 + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e3_ni + multivectorA.no_ni * multivectorB.e2_e3_ni + multivectorA.e1_e2_e3 * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1 + multivectorA.e1_e2_e3_ni * multivectorB.e1_no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e3 + multivectorA.e1_e2_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e3_ni;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + multivectorA.e1_e3 * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.no_ni + multivectorA.e2_e3 * multivectorB.e3_no_ni + multivectorA.e2_e3_ni * multivectorB.e3_no + multivectorA.e1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_e3_no * multivectorB.e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e2_ni * multivectorB.no + multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB._1 + (-1.0) * multivectorA.e3 * multivectorB.e2_e3_no_ni + multivectorA.e3_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2_e3 + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_no_ni + (-1.0) * multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2 + multivectorA.e1_e2_e3 * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e1_e3_no + multivectorA.e1_e2_e3_no * multivectorB.e1_e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1;
	this->e3_no_ni = multivectorA._1 * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_no + multivectorA.e1_e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e3_no + multivectorA.e1_no * multivectorB.e1_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e3 + multivectorA.e2 * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e2_no + multivectorA.e1 * multivectorB.e1_e3_no_ni + multivectorA.e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e2_ni * multivectorB.e2_e3_no + multivectorA.e2_no * multivectorB.e2_e3_ni + multivectorA.e2_no_ni * multivectorB.e2_e3 + multivectorA.e3 * multivectorB.no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.no + multivectorA.e3_no * multivectorB.ni + multivectorA.e3_no_ni * multivectorB._1 + multivectorA.ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.no * multivectorB.e3_ni + multivectorA.no_ni * multivectorB.e3 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_e3;
	this->e1_e2_e3_no = multivectorA._1 * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_no + multivectorA.e1_e3_no * multivectorB.e2 + multivectorA.e1_e3_no * multivectorB.e2_no_ni + multivectorA.e1_e3_no_ni * multivectorB.e2_no + multivectorA.e1_no * multivectorB.e2_e3 + multivectorA.e1_no * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_no + multivectorA.e2_e3 * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_e3_no + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1 + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_no * multivectorB.e1_e3_no_ni + multivectorA.e2_no_ni * multivectorB.e1_e3_no + multivectorA.e3 * multivectorB.e1_e2_no + multivectorA.e3_no * multivectorB.e1_e2 + multivectorA.e3_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1_e2_no + multivectorA.e1_e2 * multivectorB.e3_no + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2_e3 * multivectorB.no + multivectorA.e1_e2_e3_no * multivectorB._1 + multivectorA.e1_e2_e3_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e3 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e3_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e3_no;
	this->e1_e2_e3_ni = multivectorA._1 * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_ni + multivectorA.e1_e3_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2_ni + multivectorA.e1_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e1_ni * multivectorB.e2_e3_no_ni + multivectorA.e1_no_ni * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_ni + multivectorA.e2_e3 * multivectorB.e1_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1 + multivectorA.e2_e3_ni * multivectorB.e1_no_ni + multivectorA.e1 * multivectorB.e2_e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e3 + multivectorA.e2_ni * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e3_ni + multivectorA.e3 * multivectorB.e1_e2_ni + multivectorA.e3_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e2_no_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_e3 + multivectorA.ni * multivectorB.e1_e2_e3_no_ni + multivectorA.e1_e2 * multivectorB.e3_ni + multivectorA.no_ni * multivectorB.e1_e2_e3_ni + multivectorA.e1_e2_e3 * multivectorB.ni + multivectorA.e1_e2_e3_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.no_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e3 + multivectorA.e1_e2_ni * multivectorB.e3_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e3_ni;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_e3_no_ni + multivectorA.e1_e3_ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e3_no * multivectorB.e2_e3_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2_e3 + multivectorA.e1_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no_ni + multivectorA.e2_e3 * multivectorB.e1_e3_no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.e1_e3_no + multivectorA.e1 * multivectorB.e2_no_ni + multivectorA.e2_e3_no * multivectorB.e1_e3_ni + multivectorA.e2_e3_no_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1 + multivectorA.e3 * multivectorB.e1_e2_e3_no_ni + multivectorA.e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e3_no * multivectorB.e1_e2_e3_ni + multivectorA.e3_no_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.e1_e2 * multivectorB.no_ni + multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2 + multivectorA.e1_e2_e3 * multivectorB.e3_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e3_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB._1;
	this->e1_e3_no_ni = multivectorA._1 * multivectorB.e1_e3_no_ni + multivectorA.e1_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.no + multivectorA.e1_e3_no * multivectorB.ni + multivectorA.e1_e3_no_ni * multivectorB._1 + multivectorA.e1_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e3_ni + multivectorA.e1_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e2_e3 * multivectorB.e1_e2_no_ni + multivectorA.e2_e3_ni * multivectorB.e1_e2_no + multivectorA.e1 * multivectorB.e3_no_ni + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2_e3_no + multivectorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_e3 + (-1.0) * multivectorA.e3 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_no + multivectorA.e3_no * multivectorB.e1_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e1 + (-1.0) * multivectorA.ni * multivectorB.e1_e3_no + multivectorA.e1_e2 * multivectorB.e2_e3_no_ni + multivectorA.no * multivectorB.e1_e3_ni + multivectorA.no_ni * multivectorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.e2_no + multivectorA.e1_e2_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2_e3_no + multivectorA.e1_e2_no * multivectorB.e2_e3_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_e3;
	this->e2_e3_no_ni = multivectorA._1 * multivectorB.e2_e3_no_ni + multivectorA.e1_e3 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e1_e2_no + multivectorA.e1_e3_no * multivectorB.e1_e2_ni + multivectorA.e1_e3_no_ni * multivectorB.e1_e2 + multivectorA.e1_ni * multivectorB.e1_e2_e3_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_e3 + multivectorA.e2 * multivectorB.e3_no_ni + multivectorA.e2_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e2_e3_ni * multivectorB.no + multivectorA.e1 * multivectorB.e1_e2_e3_no_ni + multivectorA.e2_e3_no * multivectorB.ni + multivectorA.e2_e3_no_ni * multivectorB._1 + multivectorA.e2_ni * multivectorB.e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e3_ni + multivectorA.e2_no_ni * multivectorB.e3 + (-1.0) * multivectorA.e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e2_no + multivectorA.e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.ni * multivectorB.e2_e3_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e3_no_ni + multivectorA.no * multivectorB.e2_e3_ni + multivectorA.no_ni * multivectorB.e2_e3 + multivectorA.e1_e2_e3 * multivectorB.e1_no_ni + multivectorA.e1_e2_e3_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * multivectorB.e1_ni + multivectorA.e1_e2_e3_no_ni * multivectorB.e1 + multivectorA.e1_e2_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e3;
	this->e1_e2_e3_no_ni = multivectorA._1 * multivectorB.e1_e2_e3_no_ni + (-1.0) * multivectorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e3_ni * multivectorB.e2_no + multivectorA.e1_e3_no * multivectorB.e2_ni + (-1.0) * multivectorA.e1_e3_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_ni * multivectorB.e2_e3_no + multivectorA.e1_no * multivectorB.e2_e3_ni + multivectorA.e1_no_ni * multivectorB.e2_e3 + (-1.0) * multivectorA.e2 * multivectorB.e1_e3_no_ni + multivectorA.e2_e3 * multivectorB.e1_no_ni + multivectorA.e2_e3_ni * multivectorB.e1_no + multivectorA.e1 * multivectorB.e2_e3_no_ni + (-1.0) * multivectorA.e2_e3_no * multivectorB.e1_ni + multivectorA.e2_e3_no_ni * multivectorB.e1 + multivectorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e3 + multivectorA.e3 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e3_ni * multivectorB.e1_e2_no + multivectorA.e3_no * multivectorB.e1_e2_ni + multivectorA.e3_no_ni * multivectorB.e1_e2 + multivectorA.ni * multivectorB.e1_e2_e3_no + multivectorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * multivectorA.no * multivectorB.e1_e2_e3_ni + multivectorA.no_ni * multivectorB.e1_e2_e3 + multivectorA.e1_e2_e3 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_e3_ni * multivectorB.no + multivectorA.e1_e2_e3_no * multivectorB.ni + multivectorA.e1_e2_e3_no_ni * multivectorB._1 + multivectorA.e1_e2_ni * multivectorB.e3_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e3_ni + multivectorA.e1_e2_no_ni * multivectorB.e3;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Rotor& rotorB)
{
	this->_1 = multivectorA._1 * rotorB._1 + (-1.0) * multivectorA.e1_e3 * rotorB.e1_e3 + multivectorA.e1_ni * rotorB.e1_no + multivectorA.e1_no * rotorB.e1_ni + (-1.0) * multivectorA.e2_e3 * rotorB.e2_e3 + multivectorA.e2_ni * rotorB.e2_no + multivectorA.e2_no * rotorB.e2_ni + multivectorA.e3_ni * rotorB.e3_no + multivectorA.e3_no * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e2 + multivectorA.no_ni * rotorB.no_ni;
	this->e1 = multivectorA.e1_e3_ni * rotorB.e3_no + multivectorA.e1_e3_no * rotorB.e3_ni + multivectorA.e1_no_ni * rotorB.no_ni + (-1.0) * multivectorA.e2 * rotorB.e1_e2 + multivectorA.e1 * rotorB._1 + (-1.0) * multivectorA.e3 * rotorB.e1_e3 + multivectorA.ni * rotorB.e1_no + multivectorA.no * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_e3 + multivectorA.e1_e2_ni * rotorB.e2_no + multivectorA.e1_e2_no * rotorB.e2_ni;
	this->e2 = multivectorA.e2 * rotorB._1 + multivectorA.e2_e3_ni * rotorB.e3_no + multivectorA.e1 * rotorB.e1_e2 + multivectorA.e2_e3_no * rotorB.e3_ni + multivectorA.e2_no_ni * rotorB.no_ni + (-1.0) * multivectorA.e3 * rotorB.e2_e3 + multivectorA.ni * rotorB.e2_no + multivectorA.no * rotorB.e2_ni + multivectorA.e1_e2_e3 * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e1_ni;
	this->e3 = (-1.0) * multivectorA.e1_e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e3_no * rotorB.e1_ni + multivectorA.e2 * rotorB.e2_e3 + (-1.0) * multivectorA.e2_e3_ni * rotorB.e2_no + multivectorA.e1 * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3_no * rotorB.e2_ni + multivectorA.e3 * rotorB._1 + multivectorA.e3_no_ni * rotorB.no_ni + multivectorA.ni * rotorB.e3_no + multivectorA.no * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e1_e2;
	this->no = (-1.0) * multivectorA.e1_e3_no * rotorB.e1_e3 + (-1.0) * multivectorA.e1_no_ni * rotorB.e1_no + multivectorA.e2 * rotorB.e2_no + multivectorA.e1 * rotorB.e1_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e2_no_ni * rotorB.e2_no + multivectorA.e3 * rotorB.e3_no + (-1.0) * multivectorA.e3_no_ni * rotorB.e3_no + multivectorA.no * rotorB._1 + multivectorA.no * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_no * rotorB.e1_e2;
	this->ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e1_e3 + multivectorA.e1_no_ni * rotorB.e1_ni + multivectorA.e2 * rotorB.e2_ni + (-1.0) * multivectorA.e2_e3_ni * rotorB.e2_e3 + multivectorA.e1 * rotorB.e1_ni + multivectorA.e2_no_ni * rotorB.e2_ni + multivectorA.e3 * rotorB.e3_ni + multivectorA.e3_no_ni * rotorB.e3_ni + multivectorA.ni * rotorB._1 + (-1.0) * multivectorA.ni * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_e2;
	this->e1_e2 = multivectorA._1 * rotorB.e1_e2 + (-1.0) * multivectorA.e1_e3 * rotorB.e2_e3 + multivectorA.e1_ni * rotorB.e2_no + multivectorA.e1_no * rotorB.e2_ni + multivectorA.e2_e3 * rotorB.e1_e3 + (-1.0) * multivectorA.e2_ni * rotorB.e1_no + (-1.0) * multivectorA.e2_no * rotorB.e1_ni + multivectorA.e1_e2 * rotorB._1 + multivectorA.e1_e2_e3_ni * rotorB.e3_no + multivectorA.e1_e2_e3_no * rotorB.e3_ni + multivectorA.e1_e2_no_ni * rotorB.no_ni;
	this->e1_e3 = multivectorA._1 * rotorB.e1_e3 + multivectorA.e1_e3 * rotorB._1 + multivectorA.e1_e3_no_ni * rotorB.no_ni + multivectorA.e1_ni * rotorB.e3_no + multivectorA.e1_no * rotorB.e3_ni + (-1.0) * multivectorA.e2_e3 * rotorB.e1_e2 + (-1.0) * multivectorA.e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e3_no * rotorB.e1_ni + multivectorA.e1_e2 * rotorB.e2_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e2_ni;
	this->e1_no = multivectorA._1 * rotorB.e1_no + multivectorA.e1_e3 * rotorB.e3_no + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e3_no + multivectorA.e1_no * rotorB._1 + multivectorA.e1_no * rotorB.no_ni + (-1.0) * multivectorA.e2_no * rotorB.e1_e2 + (-1.0) * multivectorA.e3_no * rotorB.e1_e3 + multivectorA.e1_e2 * rotorB.e2_no + (-1.0) * multivectorA.no_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e2_no;
	this->e1_ni = multivectorA._1 * rotorB.e1_ni + multivectorA.e1_e3 * rotorB.e3_ni + multivectorA.e1_e3_no_ni * rotorB.e3_ni + multivectorA.e1_ni * rotorB._1 + (-1.0) * multivectorA.e1_ni * rotorB.no_ni + (-1.0) * multivectorA.e2_ni * rotorB.e1_e2 + (-1.0) * multivectorA.e3_ni * rotorB.e1_e3 + multivectorA.e1_e2 * rotorB.e2_ni + multivectorA.no_ni * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e2_e3 + multivectorA.e1_e2_no_ni * rotorB.e2_ni;
	this->e2_e3 = multivectorA._1 * rotorB.e2_e3 + multivectorA.e1_e3 * rotorB.e1_e2 + multivectorA.e2_e3 * rotorB._1 + multivectorA.e2_e3_no_ni * rotorB.no_ni + multivectorA.e2_ni * rotorB.e3_no + multivectorA.e2_no * rotorB.e3_ni + (-1.0) * multivectorA.e3_ni * rotorB.e2_no + (-1.0) * multivectorA.e3_no * rotorB.e2_ni + (-1.0) * multivectorA.e1_e2 * rotorB.e1_e3 + multivectorA.e1_e2_e3_ni * rotorB.e1_no + multivectorA.e1_e2_e3_no * rotorB.e1_ni;
	this->e2_no = multivectorA._1 * rotorB.e2_no + multivectorA.e1_no * rotorB.e1_e2 + multivectorA.e2_e3 * rotorB.e3_no + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e3_no + multivectorA.e2_no * rotorB._1 + multivectorA.e2_no * rotorB.no_ni + (-1.0) * multivectorA.e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_no + (-1.0) * multivectorA.no_ni * rotorB.e2_no + multivectorA.e1_e2_e3_no * rotorB.e1_e3 + multivectorA.e1_e2_no_ni * rotorB.e1_no;
	this->e2_ni = multivectorA._1 * rotorB.e2_ni + multivectorA.e1_ni * rotorB.e1_e2 + multivectorA.e2_e3 * rotorB.e3_ni + multivectorA.e2_e3_no_ni * rotorB.e3_ni + multivectorA.e2_ni * rotorB._1 + (-1.0) * multivectorA.e2_ni * rotorB.no_ni + (-1.0) * multivectorA.e3_ni * rotorB.e2_e3 + (-1.0) * multivectorA.e1_e2 * rotorB.e1_ni + multivectorA.no_ni * rotorB.e2_ni + multivectorA.e1_e2_e3_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e1_ni;
	this->e3_no = multivectorA._1 * rotorB.e3_no + (-1.0) * multivectorA.e1_e3 * rotorB.e1_no + multivectorA.e1_e3_no_ni * rotorB.e1_no + multivectorA.e1_no * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3 * rotorB.e2_no + multivectorA.e2_e3_no_ni * rotorB.e2_no + multivectorA.e2_no * rotorB.e2_e3 + multivectorA.e3_no * rotorB._1 + multivectorA.e3_no * rotorB.no_ni + (-1.0) * multivectorA.no_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e1_e2;
	this->e3_ni = multivectorA._1 * rotorB.e3_ni + (-1.0) * multivectorA.e1_e3 * rotorB.e1_ni + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e1_ni + multivectorA.e1_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3 * rotorB.e2_ni + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e2_ni + multivectorA.e2_ni * rotorB.e2_e3 + multivectorA.e3_ni * rotorB._1 + (-1.0) * multivectorA.e3_ni * rotorB.no_ni + multivectorA.no_ni * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e1_e2;
	this->no_ni = multivectorA._1 * rotorB.no_ni + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e1_e3 + multivectorA.e1_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_no * rotorB.e1_ni + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e2_e3 + multivectorA.e2_ni * rotorB.e2_no + (-1.0) * multivectorA.e2_no * rotorB.e2_ni + multivectorA.e3_ni * rotorB.e3_no + (-1.0) * multivectorA.e3_no * rotorB.e3_ni + multivectorA.no_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e1_e2;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e3_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_e3_no * rotorB.e2_ni + (-1.0) * multivectorA.e2 * rotorB.e1_e3 + multivectorA.e2_e3_ni * rotorB.e1_no + multivectorA.e1 * rotorB.e2_e3 + multivectorA.e2_e3_no * rotorB.e1_ni + multivectorA.e3 * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB._1 + multivectorA.e1_e2_e3_no_ni * rotorB.no_ni + multivectorA.e1_e2_ni * rotorB.e3_no + multivectorA.e1_e2_no * rotorB.e3_ni;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e3_no * rotorB.e2_e3 + (-1.0) * multivectorA.e1_no_ni * rotorB.e2_no + (-1.0) * multivectorA.e2 * rotorB.e1_no + multivectorA.e1 * rotorB.e2_no + multivectorA.e2_e3_no * rotorB.e1_e3 + multivectorA.e2_no_ni * rotorB.e1_no + multivectorA.no * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e3_no + multivectorA.e1_e2_no * rotorB._1 + multivectorA.e1_e2_no * rotorB.no_ni;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e2_e3 + multivectorA.e1_no_ni * rotorB.e2_ni + (-1.0) * multivectorA.e2 * rotorB.e1_ni + multivectorA.e2_e3_ni * rotorB.e1_e3 + multivectorA.e1 * rotorB.e2_ni + (-1.0) * multivectorA.e2_no_ni * rotorB.e1_ni + multivectorA.ni * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB.e3_ni + multivectorA.e1_e2_e3_no_ni * rotorB.e3_ni + multivectorA.e1_e2_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_ni * rotorB.no_ni;
	this->e1_e3_no = multivectorA.e1_e3_no * rotorB._1 + multivectorA.e1_e3_no * rotorB.no_ni + (-1.0) * multivectorA.e1_no_ni * rotorB.e3_no + multivectorA.e1 * rotorB.e3_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e1_e2 + (-1.0) * multivectorA.e3 * rotorB.e1_no + multivectorA.e3_no_ni * rotorB.e1_no + multivectorA.no * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_no + multivectorA.e1_e2_e3_no_ni * rotorB.e2_no + multivectorA.e1_e2_no * rotorB.e2_e3;
	this->e1_e3_ni = multivectorA.e1_e3_ni * rotorB._1 + (-1.0) * multivectorA.e1_e3_ni * rotorB.no_ni + multivectorA.e1_no_ni * rotorB.e3_ni + (-1.0) * multivectorA.e2_e3_ni * rotorB.e1_e2 + multivectorA.e1 * rotorB.e3_ni + (-1.0) * multivectorA.e3 * rotorB.e1_ni + (-1.0) * multivectorA.e3_no_ni * rotorB.e1_ni + multivectorA.ni * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3 * rotorB.e2_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e2_ni + multivectorA.e1_e2_ni * rotorB.e2_e3;
	this->e1_no_ni = multivectorA.e1_e3_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_e3_no * rotorB.e3_ni + multivectorA.e1_no_ni * rotorB._1 + multivectorA.e1 * rotorB.no_ni + (-1.0) * multivectorA.e2_no_ni * rotorB.e1_e2 + (-1.0) * multivectorA.e3_no_ni * rotorB.e1_e3 + multivectorA.ni * rotorB.e1_no + (-1.0) * multivectorA.no * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e2_e3 + multivectorA.e1_e2_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e2_ni;
	this->e2_e3_no = multivectorA.e1_e3_no * rotorB.e1_e2 + multivectorA.e2 * rotorB.e3_no + multivectorA.e2_e3_no * rotorB._1 + multivectorA.e2_e3_no * rotorB.no_ni + (-1.0) * multivectorA.e2_no_ni * rotorB.e3_no + (-1.0) * multivectorA.e3 * rotorB.e2_no + multivectorA.e3_no_ni * rotorB.e2_no + multivectorA.no * rotorB.e2_e3 + multivectorA.e1_e2_e3 * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e1_e3;
	this->e2_e3_ni = multivectorA.e1_e3_ni * rotorB.e1_e2 + multivectorA.e2 * rotorB.e3_ni + multivectorA.e2_e3_ni * rotorB._1 + (-1.0) * multivectorA.e2_e3_ni * rotorB.no_ni + multivectorA.e2_no_ni * rotorB.e3_ni + (-1.0) * multivectorA.e3 * rotorB.e2_ni + (-1.0) * multivectorA.e3_no_ni * rotorB.e2_ni + multivectorA.ni * rotorB.e2_e3 + multivectorA.e1_e2_e3 * rotorB.e1_ni + multivectorA.e1_e2_e3_no_ni * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_e3;
	this->e2_no_ni = multivectorA.e1_no_ni * rotorB.e1_e2 + multivectorA.e2 * rotorB.no_ni + multivectorA.e2_e3_ni * rotorB.e3_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e3_ni + multivectorA.e2_no_ni * rotorB._1 + (-1.0) * multivectorA.e3_no_ni * rotorB.e2_e3 + multivectorA.ni * rotorB.e2_no + (-1.0) * multivectorA.no * rotorB.e2_ni + multivectorA.e1_e2_e3_no_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_ni * rotorB.e1_no + multivectorA.e1_e2_no * rotorB.e1_ni;
	this->e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e1_no + multivectorA.e1_e3_no * rotorB.e1_ni + multivectorA.e1_no_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e2_e3_ni * rotorB.e2_no + multivectorA.e2_e3_no * rotorB.e2_ni + multivectorA.e2_no_ni * rotorB.e2_e3 + multivectorA.e3 * rotorB.no_ni + multivectorA.e3_no_ni * rotorB._1 + multivectorA.ni * rotorB.e3_no + (-1.0) * multivectorA.no * rotorB.e3_ni + (-1.0) * multivectorA.e1_e2_e3_no_ni * rotorB.e1_e2;
	this->e1_e2_e3_no = (-1.0) * multivectorA.e1_e3 * rotorB.e2_no + multivectorA.e1_e3_no_ni * rotorB.e2_no + multivectorA.e1_no * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB.e1_no + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e1_no + (-1.0) * multivectorA.e2_no * rotorB.e1_e3 + multivectorA.e3_no * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB.e3_no + multivectorA.e1_e2_e3_no * rotorB._1 + multivectorA.e1_e2_e3_no * rotorB.no_ni + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e3_no;
	this->e1_e2_e3_ni = (-1.0) * multivectorA.e1_e3 * rotorB.e2_ni + (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e2_ni + multivectorA.e1_ni * rotorB.e2_e3 + multivectorA.e2_e3 * rotorB.e1_ni + multivectorA.e2_e3_no_ni * rotorB.e1_ni + (-1.0) * multivectorA.e2_ni * rotorB.e1_e3 + multivectorA.e3_ni * rotorB.e1_e2 + multivectorA.e1_e2 * rotorB.e3_ni + multivectorA.e1_e2_e3_ni * rotorB._1 + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.no_ni + multivectorA.e1_e2_no_ni * rotorB.e3_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e1_e3_no_ni * rotorB.e2_e3 + multivectorA.e1_ni * rotorB.e2_no + (-1.0) * multivectorA.e1_no * rotorB.e2_ni + multivectorA.e2_e3_no_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e2_ni * rotorB.e1_no + multivectorA.e2_no * rotorB.e1_ni + multivectorA.e1_e2 * rotorB.no_ni + multivectorA.no_ni * rotorB.e1_e2 + multivectorA.e1_e2_e3_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e3_ni + multivectorA.e1_e2_no_ni * rotorB._1;
	this->e1_e3_no_ni = multivectorA.e1_e3 * rotorB.no_ni + multivectorA.e1_e3_no_ni * rotorB._1 + multivectorA.e1_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_no * rotorB.e3_ni + (-1.0) * multivectorA.e2_e3_no_ni * rotorB.e1_e2 + (-1.0) * multivectorA.e3_ni * rotorB.e1_no + multivectorA.e3_no * rotorB.e1_ni + multivectorA.no_ni * rotorB.e1_e3 + (-1.0) * multivectorA.e1_e2_e3_ni * rotorB.e2_no + multivectorA.e1_e2_e3_no * rotorB.e2_ni + multivectorA.e1_e2_no_ni * rotorB.e2_e3;
	this->e2_e3_no_ni = multivectorA.e1_e3_no_ni * rotorB.e1_e2 + multivectorA.e2_e3 * rotorB.no_ni + multivectorA.e2_e3_no_ni * rotorB._1 + multivectorA.e2_ni * rotorB.e3_no + (-1.0) * multivectorA.e2_no * rotorB.e3_ni + (-1.0) * multivectorA.e3_ni * rotorB.e2_no + multivectorA.e3_no * rotorB.e2_ni + multivectorA.no_ni * rotorB.e2_e3 + multivectorA.e1_e2_e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e1_e2_e3_no * rotorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * rotorB.e1_e3;
	this->e1_e2_e3_no_ni = (-1.0) * multivectorA.e1_e3_ni * rotorB.e2_no + multivectorA.e1_e3_no * rotorB.e2_ni + multivectorA.e1_no_ni * rotorB.e2_e3 + multivectorA.e2_e3_ni * rotorB.e1_no + (-1.0) * multivectorA.e2_e3_no * rotorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * rotorB.e1_e3 + multivectorA.e3_no_ni * rotorB.e1_e2 + multivectorA.e1_e2_e3 * rotorB.no_ni + multivectorA.e1_e2_e3_no_ni * rotorB._1 + multivectorA.e1_e2_ni * rotorB.e3_no + (-1.0) * multivectorA.e1_e2_no * rotorB.e3_ni;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2 + rotorA.e1_e3 * vectorB.e3 + (-1.0) * rotorA.e1_ni * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.ni;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1 + rotorA.e2_e3 * vectorB.e3 + (-1.0) * rotorA.e2_ni * vectorB.no + (-1.0) * rotorA.e2_no * vectorB.ni;
	this->e3 = rotorA._1 * vectorB.e3 + (-1.0) * rotorA.e1_e3 * vectorB.e1 + (-1.0) * rotorA.e2_e3 * vectorB.e2 + (-1.0) * rotorA.e3_ni * vectorB.no + (-1.0) * rotorA.e3_no * vectorB.ni;
	this->no = rotorA._1 * vectorB.no + (-1.0) * rotorA.no_ni * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e1 + (-1.0) * rotorA.e2_no * vectorB.e2 + (-1.0) * rotorA.e3_no * vectorB.e3;
	this->ni = rotorA._1 * vectorB.ni + rotorA.no_ni * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e1 + (-1.0) * rotorA.e2_ni * vectorB.e2 + (-1.0) * rotorA.e3_ni * vectorB.e3;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA.e1_e2 * vectorB.e3 + (-1.0) * rotorA.e1_e3 * vectorB.e2 + rotorA.e2_e3 * vectorB.e1;
	this->e1_e2_no = rotorA.e1_e2 * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e2 + rotorA.e2_no * vectorB.e1;
	this->e1_e2_ni = rotorA.e1_e2 * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e2 + rotorA.e2_ni * vectorB.e1;
	this->e1_e3_no = rotorA.e1_e3 * vectorB.no + (-1.0) * rotorA.e1_no * vectorB.e3 + rotorA.e3_no * vectorB.e1;
	this->e1_e3_ni = rotorA.e1_e3 * vectorB.ni + (-1.0) * rotorA.e1_ni * vectorB.e3 + rotorA.e3_ni * vectorB.e1;
	this->e1_no_ni = rotorA.no_ni * vectorB.e1 + (-1.0) * rotorA.e1_ni * vectorB.no + rotorA.e1_no * vectorB.ni;
	this->e2_e3_no = rotorA.e2_e3 * vectorB.no + (-1.0) * rotorA.e2_no * vectorB.e3 + rotorA.e3_no * vectorB.e2;
	this->e2_e3_ni = rotorA.e2_e3 * vectorB.ni + (-1.0) * rotorA.e2_ni * vectorB.e3 + rotorA.e3_ni * vectorB.e2;
	this->e2_no_ni = rotorA.no_ni * vectorB.e2 + (-1.0) * rotorA.e2_ni * vectorB.no + rotorA.e2_no * vectorB.ni;
	this->e3_no_ni = rotorA.no_ni * vectorB.e3 + (-1.0) * rotorA.e3_ni * vectorB.no + rotorA.e3_no * vectorB.ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA.no_ni * bivectorB.no_ni + (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * bivectorB.e1_e3 + rotorA.e1_ni * bivectorB.e1_no + rotorA.e1_no * bivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + rotorA.e2_ni * bivectorB.e2_no + rotorA.e2_no * bivectorB.e2_ni + rotorA.e3_ni * bivectorB.e3_no + rotorA.e3_no * bivectorB.e3_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * bivectorB.e2_e3 + rotorA.e1_ni * bivectorB.e2_no + rotorA.e1_no * bivectorB.e2_ni + rotorA.e2_e3 * bivectorB.e1_e3 + (-1.0) * rotorA.e2_ni * bivectorB.e1_no + (-1.0) * rotorA.e2_no * bivectorB.e1_ni;
	this->e1_e3 = rotorA._1 * bivectorB.e1_e3 + rotorA.e1_e2 * bivectorB.e2_e3 + rotorA.e1_ni * bivectorB.e3_no + rotorA.e1_no * bivectorB.e3_ni + (-1.0) * rotorA.e2_e3 * bivectorB.e1_e2 + (-1.0) * rotorA.e3_ni * bivectorB.e1_no + (-1.0) * rotorA.e3_no * bivectorB.e1_ni;
	this->e1_no = rotorA._1 * bivectorB.e1_no + (-1.0) * rotorA.no_ni * bivectorB.e1_no + rotorA.e1_e2 * bivectorB.e2_no + rotorA.e1_e3 * bivectorB.e3_no + rotorA.e1_no * bivectorB.no_ni + (-1.0) * rotorA.e2_no * bivectorB.e1_e2 + (-1.0) * rotorA.e3_no * bivectorB.e1_e3;
	this->e1_ni = rotorA._1 * bivectorB.e1_ni + rotorA.no_ni * bivectorB.e1_ni + rotorA.e1_e2 * bivectorB.e2_ni + rotorA.e1_e3 * bivectorB.e3_ni + (-1.0) * rotorA.e1_ni * bivectorB.no_ni + (-1.0) * rotorA.e2_ni * bivectorB.e1_e2 + (-1.0) * rotorA.e3_ni * bivectorB.e1_e3;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3 + (-1.0) * rotorA.e1_e2 * bivectorB.e1_e3 + rotorA.e1_e3 * bivectorB.e1_e2 + rotorA.e2_ni * bivectorB.e3_no + rotorA.e2_no * bivectorB.e3_ni + (-1.0) * rotorA.e3_ni * bivectorB.e2_no + (-1.0) * rotorA.e3_no * bivectorB.e2_ni;
	this->e2_no = rotorA._1 * bivectorB.e2_no + (-1.0) * rotorA.no_ni * bivectorB.e2_no + (-1.0) * rotorA.e1_e2 * bivectorB.e1_no + rotorA.e1_no * bivectorB.e1_e2 + rotorA.e2_e3 * bivectorB.e3_no + rotorA.e2_no * bivectorB.no_ni + (-1.0) * rotorA.e3_no * bivectorB.e2_e3;
	this->e2_ni = rotorA._1 * bivectorB.e2_ni + rotorA.no_ni * bivectorB.e2_ni + (-1.0) * rotorA.e1_e2 * bivectorB.e1_ni + rotorA.e1_ni * bivectorB.e1_e2 + rotorA.e2_e3 * bivectorB.e3_ni + (-1.0) * rotorA.e2_ni * bivectorB.no_ni + (-1.0) * rotorA.e3_ni * bivectorB.e2_e3;
	this->e3_no = rotorA._1 * bivectorB.e3_no + (-1.0) * rotorA.no_ni * bivectorB.e3_no + (-1.0) * rotorA.e1_e3 * bivectorB.e1_no + rotorA.e1_no * bivectorB.e1_e3 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_no + rotorA.e2_no * bivectorB.e2_e3 + rotorA.e3_no * bivectorB.no_ni;
	this->e3_ni = rotorA._1 * bivectorB.e3_ni + rotorA.no_ni * bivectorB.e3_ni + (-1.0) * rotorA.e1_e3 * bivectorB.e1_ni + rotorA.e1_ni * bivectorB.e1_e3 + (-1.0) * rotorA.e2_e3 * bivectorB.e2_ni + rotorA.e2_ni * bivectorB.e2_e3 + (-1.0) * rotorA.e3_ni * bivectorB.no_ni;
	this->no_ni = rotorA._1 * bivectorB.no_ni + rotorA.e1_ni * bivectorB.e1_no + (-1.0) * rotorA.e1_no * bivectorB.e1_ni + rotorA.e2_ni * bivectorB.e2_no + (-1.0) * rotorA.e2_no * bivectorB.e2_ni + rotorA.e3_ni * bivectorB.e3_no + (-1.0) * rotorA.e3_no * bivectorB.e3_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA.e1_e2 * bivectorB.e3_no + (-1.0) * rotorA.e1_e3 * bivectorB.e2_no + rotorA.e1_no * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_no + (-1.0) * rotorA.e2_no * bivectorB.e1_e3 + rotorA.e3_no * bivectorB.e1_e2;
	this->e1_e2_e3_ni = rotorA.e1_e2 * bivectorB.e3_ni + (-1.0) * rotorA.e1_e3 * bivectorB.e2_ni + rotorA.e1_ni * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.e1_ni + (-1.0) * rotorA.e2_ni * bivectorB.e1_e3 + rotorA.e3_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = rotorA.no_ni * bivectorB.e1_e2 + rotorA.e1_e2 * bivectorB.no_ni + rotorA.e1_ni * bivectorB.e2_no + (-1.0) * rotorA.e1_no * bivectorB.e2_ni + (-1.0) * rotorA.e2_ni * bivectorB.e1_no + rotorA.e2_no * bivectorB.e1_ni;
	this->e1_e3_no_ni = rotorA.no_ni * bivectorB.e1_e3 + rotorA.e1_e3 * bivectorB.no_ni + rotorA.e1_ni * bivectorB.e3_no + (-1.0) * rotorA.e1_no * bivectorB.e3_ni + (-1.0) * rotorA.e3_ni * bivectorB.e1_no + rotorA.e3_no * bivectorB.e1_ni;
	this->e2_e3_no_ni = rotorA.no_ni * bivectorB.e2_e3 + rotorA.e2_e3 * bivectorB.no_ni + rotorA.e2_ni * bivectorB.e3_no + (-1.0) * rotorA.e2_no * bivectorB.e3_ni + (-1.0) * rotorA.e3_ni * bivectorB.e2_no + rotorA.e3_no * bivectorB.e2_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = rotorA.no_ni * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e1_e2_e3 + rotorA.e2_ni * trivectorB.e1_e2_no + rotorA.e2_no * trivectorB.e1_e2_ni + rotorA.e3_ni * trivectorB.e1_e3_no + rotorA.e3_no * trivectorB.e1_e3_ni;
	this->e2 = rotorA.no_ni * trivectorB.e2_no_ni + rotorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * trivectorB.e1_e2_ni + rotorA.e3_ni * trivectorB.e2_e3_no + rotorA.e3_no * trivectorB.e2_e3_ni;
	this->e3 = rotorA.no_ni * trivectorB.e3_no_ni + (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e2_e3_ni;
	this->no = (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_e3 * trivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e2_no_ni + (-1.0) * rotorA.e3_no * trivectorB.e3_no_ni;
	this->ni = (-1.0) * rotorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e1_e3_ni + rotorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e2_e3_ni + rotorA.e2_ni * trivectorB.e2_no_ni + rotorA.e3_ni * trivectorB.e3_no_ni;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA._1 * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * trivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e2_e3_ni + rotorA.e2_ni * trivectorB.e1_e3_no + rotorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * trivectorB.e1_e2_no + (-1.0) * rotorA.e3_no * trivectorB.e1_e2_ni;
	this->e1_e2_no = rotorA._1 * trivectorB.e1_e2_no + (-1.0) * rotorA.no_ni * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_e3 * trivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e2_no_ni + rotorA.e2_e3 * trivectorB.e1_e3_no + rotorA.e2_no * trivectorB.e1_no_ni + (-1.0) * rotorA.e3_no * trivectorB.e1_e2_e3;
	this->e1_e2_ni = rotorA._1 * trivectorB.e1_e2_ni + rotorA.no_ni * trivectorB.e1_e2_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e2_e3_ni + rotorA.e1_ni * trivectorB.e2_no_ni + rotorA.e2_e3 * trivectorB.e1_e3_ni + (-1.0) * rotorA.e2_ni * trivectorB.e1_no_ni + (-1.0) * rotorA.e3_ni * trivectorB.e1_e2_e3;
	this->e1_e3_no = rotorA._1 * trivectorB.e1_e3_no + (-1.0) * rotorA.no_ni * trivectorB.e1_e3_no + rotorA.e1_e2 * trivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * trivectorB.e3_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e1_e2_no + rotorA.e2_no * trivectorB.e1_e2_e3 + rotorA.e3_no * trivectorB.e1_no_ni;
	this->e1_e3_ni = rotorA._1 * trivectorB.e1_e3_ni + rotorA.no_ni * trivectorB.e1_e3_ni + rotorA.e1_e2 * trivectorB.e2_e3_ni + rotorA.e1_ni * trivectorB.e3_no_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e1_e2_ni + rotorA.e2_ni * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e3_ni * trivectorB.e1_no_ni;
	this->e1_no_ni = rotorA._1 * trivectorB.e1_no_ni + rotorA.e1_e2 * trivectorB.e2_no_ni + rotorA.e1_e3 * trivectorB.e3_no_ni + rotorA.e2_ni * trivectorB.e1_e2_no + (-1.0) * rotorA.e2_no * trivectorB.e1_e2_ni + rotorA.e3_ni * trivectorB.e1_e3_no + (-1.0) * rotorA.e3_no * trivectorB.e1_e3_ni;
	this->e2_e3_no = rotorA._1 * trivectorB.e2_e3_no + (-1.0) * rotorA.no_ni * trivectorB.e2_e3_no + (-1.0) * rotorA.e1_e2 * trivectorB.e1_e3_no + rotorA.e1_e3 * trivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * trivectorB.e1_e2_e3 + (-1.0) * rotorA.e2_no * trivectorB.e3_no_ni + rotorA.e3_no * trivectorB.e2_no_ni;
	this->e2_e3_ni = rotorA._1 * trivectorB.e2_e3_ni + rotorA.no_ni * trivectorB.e2_e3_ni + (-1.0) * rotorA.e1_e2 * trivectorB.e1_e3_ni + rotorA.e1_e3 * trivectorB.e1_e2_ni + (-1.0) * rotorA.e1_ni * trivectorB.e1_e2_e3 + rotorA.e2_ni * trivectorB.e3_no_ni + (-1.0) * rotorA.e3_ni * trivectorB.e2_no_ni;
	this->e2_no_ni = rotorA._1 * trivectorB.e2_no_ni + (-1.0) * rotorA.e1_e2 * trivectorB.e1_no_ni + (-1.0) * rotorA.e1_ni * trivectorB.e1_e2_no + rotorA.e1_no * trivectorB.e1_e2_ni + rotorA.e2_e3 * trivectorB.e3_no_ni + rotorA.e3_ni * trivectorB.e2_e3_no + (-1.0) * rotorA.e3_no * trivectorB.e2_e3_ni;
	this->e3_no_ni = rotorA._1 * trivectorB.e3_no_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e1_no_ni + (-1.0) * rotorA.e1_ni * trivectorB.e1_e3_no + rotorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e2_e3 * trivectorB.e2_no_ni + (-1.0) * rotorA.e2_ni * trivectorB.e2_e3_no + rotorA.e2_no * trivectorB.e2_e3_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = rotorA.no_ni * trivectorB.e1_e2_e3 + rotorA.e1_e2 * trivectorB.e3_no_ni + (-1.0) * rotorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * rotorA.e1_ni * trivectorB.e2_e3_no + rotorA.e1_no * trivectorB.e2_e3_ni + rotorA.e2_e3 * trivectorB.e1_no_ni + rotorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * rotorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * trivectorB.e1_e2_no + rotorA.e3_no * trivectorB.e1_e2_ni;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA.no_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e1_e2_e3_no + rotorA.e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e3 = rotorA.no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * quadvectorB.e1_e2_e3_ni;
	this->e1_no = (-1.0) * rotorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * rotorA.e2_e3 * quadvectorB.e1_e2_e3_ni + rotorA.e2_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = rotorA.no_ni * quadvectorB.e2_e3_no_ni + rotorA.e1_ni * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e2_e3_ni;
	this->e2_no = rotorA.e1_e3 * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = rotorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * quadvectorB.e1_e2_no_ni + rotorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e1_e3_no_ni + rotorA.e2_no * quadvectorB.e2_e3_no_ni;
	this->e3_ni = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * quadvectorB.e2_e3_no_ni;
	this->no_ni = (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_e3 * quadvectorB.e2_e3_no_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA._1 * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.no_ni * quadvectorB.e1_e2_e3_no + rotorA.e1_no * quadvectorB.e2_e3_no_ni + (-1.0) * rotorA.e2_no * quadvectorB.e1_e3_no_ni + rotorA.e3_no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_e3_ni = rotorA._1 * quadvectorB.e1_e2_e3_ni + rotorA.no_ni * quadvectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_ni * quadvectorB.e2_e3_no_ni + rotorA.e2_ni * quadvectorB.e1_e3_no_ni + (-1.0) * rotorA.e3_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e2_no_ni = rotorA._1 * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e1_e3 * quadvectorB.e2_e3_no_ni + rotorA.e2_e3 * quadvectorB.e1_e3_no_ni + rotorA.e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e3_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e3_no_ni = rotorA._1 * quadvectorB.e1_e3_no_ni + rotorA.e1_e2 * quadvectorB.e2_e3_no_ni + (-1.0) * rotorA.e2_e3 * quadvectorB.e1_e2_no_ni + (-1.0) * rotorA.e2_ni * quadvectorB.e1_e2_e3_no + rotorA.e2_no * quadvectorB.e1_e2_e3_ni;
	this->e2_e3_no_ni = rotorA._1 * quadvectorB.e2_e3_no_ni + (-1.0) * rotorA.e1_e2 * quadvectorB.e1_e3_no_ni + rotorA.e1_e3 * quadvectorB.e1_e2_no_ni + rotorA.e1_ni * quadvectorB.e1_e2_e3_no + (-1.0) * rotorA.e1_no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_e3 = rotorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * rotorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = rotorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = rotorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * rotorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * rotorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * rotorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = rotorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = rotorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * rotorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_no = 0.0;
	this->e1_e2_e3_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
	this->e1_e3_no_ni = 0.0;
	this->e2_e3_no_ni = 0.0;
	this->e1_e2_e3_no_ni = rotorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Multivector& multivectorB)
{
	this->_1 = rotorA._1 * multivectorB._1 + rotorA.no_ni * multivectorB.no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3 + rotorA.e1_ni * multivectorB.e1_no + rotorA.e1_no * multivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3 + rotorA.e2_ni * multivectorB.e2_no + rotorA.e2_no * multivectorB.e2_ni + rotorA.e3_ni * multivectorB.e3_no + rotorA.e3_no * multivectorB.e3_ni;
	this->e1 = rotorA._1 * multivectorB.e1 + rotorA.no_ni * multivectorB.e1_no_ni + rotorA.e1_e2 * multivectorB.e2 + rotorA.e1_e3 * multivectorB.e3 + (-1.0) * rotorA.e1_ni * multivectorB.no + (-1.0) * rotorA.e1_no * multivectorB.ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3 + rotorA.e2_ni * multivectorB.e1_e2_no + rotorA.e2_no * multivectorB.e1_e2_ni + rotorA.e3_ni * multivectorB.e1_e3_no + rotorA.e3_no * multivectorB.e1_e3_ni;
	this->e2 = rotorA._1 * multivectorB.e2 + rotorA.no_ni * multivectorB.e2_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1 + rotorA.e1_e3 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_ni + rotorA.e2_e3 * multivectorB.e3 + (-1.0) * rotorA.e2_ni * multivectorB.no + (-1.0) * rotorA.e2_no * multivectorB.ni + rotorA.e3_ni * multivectorB.e2_e3_no + rotorA.e3_no * multivectorB.e2_e3_ni;
	this->e3 = rotorA._1 * multivectorB.e3 + rotorA.no_ni * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_e3 * multivectorB.e1 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2 + (-1.0) * rotorA.e2_ni * multivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.no + (-1.0) * rotorA.e3_no * multivectorB.ni;
	this->no = rotorA._1 * multivectorB.no + (-1.0) * rotorA.no_ni * multivectorB.no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1 + (-1.0) * rotorA.e1_no * multivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e2 + (-1.0) * rotorA.e2_no * multivectorB.e2_no_ni + (-1.0) * rotorA.e3_no * multivectorB.e3 + (-1.0) * rotorA.e3_no * multivectorB.e3_no_ni;
	this->ni = rotorA._1 * multivectorB.ni + rotorA.no_ni * multivectorB.ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1 + rotorA.e1_ni * multivectorB.e1_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_ni + (-1.0) * rotorA.e2_ni * multivectorB.e2 + rotorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * rotorA.e3_ni * multivectorB.e3 + rotorA.e3_ni * multivectorB.e3_no_ni;
	this->e1_e2 = rotorA._1 * multivectorB.e1_e2 + rotorA.no_ni * multivectorB.e1_e2_no_ni + rotorA.e1_e2 * multivectorB._1 + (-1.0) * rotorA.e1_e3 * multivectorB.e2_e3 + rotorA.e1_ni * multivectorB.e2_no + rotorA.e1_no * multivectorB.e2_ni + rotorA.e2_e3 * multivectorB.e1_e3 + (-1.0) * rotorA.e2_ni * multivectorB.e1_no + (-1.0) * rotorA.e2_no * multivectorB.e1_ni + rotorA.e3_ni * multivectorB.e1_e2_e3_no + rotorA.e3_no * multivectorB.e1_e2_e3_ni;
	this->e1_e3 = rotorA._1 * multivectorB.e1_e3 + rotorA.no_ni * multivectorB.e1_e3_no_ni + rotorA.e1_e2 * multivectorB.e2_e3 + rotorA.e1_e3 * multivectorB._1 + rotorA.e1_ni * multivectorB.e3_no + rotorA.e1_no * multivectorB.e3_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2 + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_no + (-1.0) * rotorA.e3_no * multivectorB.e1_ni;
	this->e1_no = rotorA._1 * multivectorB.e1_no + (-1.0) * rotorA.no_ni * multivectorB.e1_no + rotorA.e1_e2 * multivectorB.e2_no + rotorA.e1_e3 * multivectorB.e3_no + rotorA.e1_no * multivectorB._1 + rotorA.e1_no * multivectorB.no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e2 + (-1.0) * rotorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_no * multivectorB.e1_e3 + (-1.0) * rotorA.e3_no * multivectorB.e1_e3_no_ni;
	this->e1_ni = rotorA._1 * multivectorB.e1_ni + rotorA.no_ni * multivectorB.e1_ni + rotorA.e1_e2 * multivectorB.e2_ni + rotorA.e1_e3 * multivectorB.e3_ni + rotorA.e1_ni * multivectorB._1 + (-1.0) * rotorA.e1_ni * multivectorB.no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2 + rotorA.e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_e3 + rotorA.e3_ni * multivectorB.e1_e3_no_ni;
	this->e2_e3 = rotorA._1 * multivectorB.e2_e3 + rotorA.no_ni * multivectorB.e2_e3_no_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e3 + rotorA.e1_e3 * multivectorB.e1_e2 + rotorA.e1_ni * multivectorB.e1_e2_e3_no + rotorA.e1_no * multivectorB.e1_e2_e3_ni + rotorA.e2_e3 * multivectorB._1 + rotorA.e2_ni * multivectorB.e3_no + rotorA.e2_no * multivectorB.e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e2_no + (-1.0) * rotorA.e3_no * multivectorB.e2_ni;
	this->e2_no = rotorA._1 * multivectorB.e2_no + (-1.0) * rotorA.no_ni * multivectorB.e2_no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_no + rotorA.e1_e3 * multivectorB.e1_e2_e3_no + rotorA.e1_no * multivectorB.e1_e2 + rotorA.e1_no * multivectorB.e1_e2_no_ni + rotorA.e2_e3 * multivectorB.e3_no + rotorA.e2_no * multivectorB._1 + rotorA.e2_no * multivectorB.no_ni + (-1.0) * rotorA.e3_no * multivectorB.e2_e3 + (-1.0) * rotorA.e3_no * multivectorB.e2_e3_no_ni;
	this->e2_ni = rotorA._1 * multivectorB.e2_ni + rotorA.no_ni * multivectorB.e2_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_ni + rotorA.e1_e3 * multivectorB.e1_e2_e3_ni + rotorA.e1_ni * multivectorB.e1_e2 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_no_ni + rotorA.e2_e3 * multivectorB.e3_ni + rotorA.e2_ni * multivectorB._1 + (-1.0) * rotorA.e2_ni * multivectorB.no_ni + (-1.0) * rotorA.e3_ni * multivectorB.e2_e3 + rotorA.e3_ni * multivectorB.e2_e3_no_ni;
	this->e3_no = rotorA._1 * multivectorB.e3_no + (-1.0) * rotorA.no_ni * multivectorB.e3_no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e1_e3 * multivectorB.e1_no + rotorA.e1_no * multivectorB.e1_e3 + rotorA.e1_no * multivectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_no + rotorA.e2_no * multivectorB.e2_e3 + rotorA.e2_no * multivectorB.e2_e3_no_ni + rotorA.e3_no * multivectorB._1 + rotorA.e3_no * multivectorB.no_ni;
	this->e3_ni = rotorA._1 * multivectorB.e3_ni + rotorA.no_ni * multivectorB.e3_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_ni + rotorA.e1_ni * multivectorB.e1_e3 + (-1.0) * rotorA.e1_ni * multivectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_ni + rotorA.e2_ni * multivectorB.e2_e3 + (-1.0) * rotorA.e2_ni * multivectorB.e2_e3_no_ni + rotorA.e3_ni * multivectorB._1 + (-1.0) * rotorA.e3_ni * multivectorB.no_ni;
	this->no_ni = rotorA._1 * multivectorB.no_ni + rotorA.no_ni * multivectorB._1 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_e3_no_ni + rotorA.e1_ni * multivectorB.e1_no + (-1.0) * rotorA.e1_no * multivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_e3_no_ni + rotorA.e2_ni * multivectorB.e2_no + (-1.0) * rotorA.e2_no * multivectorB.e2_ni + rotorA.e3_ni * multivectorB.e3_no + (-1.0) * rotorA.e3_no * multivectorB.e3_ni;
	this->e1_e2_e3 = rotorA._1 * multivectorB.e1_e2_e3 + rotorA.no_ni * multivectorB.e1_e2_e3_no_ni + rotorA.e1_e2 * multivectorB.e3 + (-1.0) * rotorA.e1_e3 * multivectorB.e2 + (-1.0) * rotorA.e1_ni * multivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e2_e3_ni + rotorA.e2_e3 * multivectorB.e1 + rotorA.e2_ni * multivectorB.e1_e3_no + rotorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_e2_no + (-1.0) * rotorA.e3_no * multivectorB.e1_e2_ni;
	this->e1_e2_no = rotorA._1 * multivectorB.e1_e2_no + (-1.0) * rotorA.no_ni * multivectorB.e1_e2_no + rotorA.e1_e2 * multivectorB.no + (-1.0) * rotorA.e1_e3 * multivectorB.e2_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e2 + (-1.0) * rotorA.e1_no * multivectorB.e2_no_ni + rotorA.e2_e3 * multivectorB.e1_e3_no + rotorA.e2_no * multivectorB.e1 + rotorA.e2_no * multivectorB.e1_no_ni + (-1.0) * rotorA.e3_no * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e3_no * multivectorB.e1_e2_e3_no_ni;
	this->e1_e2_ni = rotorA._1 * multivectorB.e1_e2_ni + rotorA.no_ni * multivectorB.e1_e2_ni + rotorA.e1_e2 * multivectorB.ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_e3_ni + (-1.0) * rotorA.e1_ni * multivectorB.e2 + rotorA.e1_ni * multivectorB.e2_no_ni + rotorA.e2_e3 * multivectorB.e1_e3_ni + rotorA.e2_ni * multivectorB.e1 + (-1.0) * rotorA.e2_ni * multivectorB.e1_no_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_e2_e3 + rotorA.e3_ni * multivectorB.e1_e2_e3_no_ni;
	this->e1_e3_no = rotorA._1 * multivectorB.e1_e3_no + (-1.0) * rotorA.no_ni * multivectorB.e1_e3_no + rotorA.e1_e2 * multivectorB.e2_e3_no + rotorA.e1_e3 * multivectorB.no + (-1.0) * rotorA.e1_no * multivectorB.e3 + (-1.0) * rotorA.e1_no * multivectorB.e3_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_no + rotorA.e2_no * multivectorB.e1_e2_e3 + rotorA.e2_no * multivectorB.e1_e2_e3_no_ni + rotorA.e3_no * multivectorB.e1 + rotorA.e3_no * multivectorB.e1_no_ni;
	this->e1_e3_ni = rotorA._1 * multivectorB.e1_e3_ni + rotorA.no_ni * multivectorB.e1_e3_ni + rotorA.e1_e2 * multivectorB.e2_e3_ni + rotorA.e1_e3 * multivectorB.ni + (-1.0) * rotorA.e1_ni * multivectorB.e3 + rotorA.e1_ni * multivectorB.e3_no_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_ni + rotorA.e2_ni * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2_e3_no_ni + rotorA.e3_ni * multivectorB.e1 + (-1.0) * rotorA.e3_ni * multivectorB.e1_no_ni;
	this->e1_no_ni = rotorA._1 * multivectorB.e1_no_ni + rotorA.no_ni * multivectorB.e1 + rotorA.e1_e2 * multivectorB.e2_no_ni + rotorA.e1_e3 * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_ni * multivectorB.no + rotorA.e1_no * multivectorB.ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_e3_no_ni + rotorA.e2_ni * multivectorB.e1_e2_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e2_ni + rotorA.e3_ni * multivectorB.e1_e3_no + (-1.0) * rotorA.e3_no * multivectorB.e1_e3_ni;
	this->e2_e3_no = rotorA._1 * multivectorB.e2_e3_no + (-1.0) * rotorA.no_ni * multivectorB.e2_e3_no + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e3_no + rotorA.e1_e3 * multivectorB.e1_e2_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_e3 + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_e3_no_ni + rotorA.e2_e3 * multivectorB.no + (-1.0) * rotorA.e2_no * multivectorB.e3 + (-1.0) * rotorA.e2_no * multivectorB.e3_no_ni + rotorA.e3_no * multivectorB.e2 + rotorA.e3_no * multivectorB.e2_no_ni;
	this->e2_e3_ni = rotorA._1 * multivectorB.e2_e3_ni + rotorA.no_ni * multivectorB.e2_e3_ni + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e3_ni + rotorA.e1_e3 * multivectorB.e1_e2_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_e3 + rotorA.e1_ni * multivectorB.e1_e2_e3_no_ni + rotorA.e2_e3 * multivectorB.ni + (-1.0) * rotorA.e2_ni * multivectorB.e3 + rotorA.e2_ni * multivectorB.e3_no_ni + rotorA.e3_ni * multivectorB.e2 + (-1.0) * rotorA.e3_ni * multivectorB.e2_no_ni;
	this->e2_no_ni = rotorA._1 * multivectorB.e2_no_ni + rotorA.no_ni * multivectorB.e2 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_no_ni + rotorA.e1_e3 * multivectorB.e1_e2_e3_no_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1_e2_no + rotorA.e1_no * multivectorB.e1_e2_ni + rotorA.e2_e3 * multivectorB.e3_no_ni + (-1.0) * rotorA.e2_ni * multivectorB.no + rotorA.e2_no * multivectorB.ni + rotorA.e3_ni * multivectorB.e2_e3_no + (-1.0) * rotorA.e3_no * multivectorB.e2_e3_ni;
	this->e3_no_ni = rotorA._1 * multivectorB.e3_no_ni + rotorA.no_ni * multivectorB.e3 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e2_e3_no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e1_no_ni + (-1.0) * rotorA.e1_ni * multivectorB.e1_e3_no + rotorA.e1_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e2_no_ni + (-1.0) * rotorA.e2_ni * multivectorB.e2_e3_no + rotorA.e2_no * multivectorB.e2_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.no + rotorA.e3_no * multivectorB.ni;
	this->e1_e2_e3_no = rotorA._1 * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.no_ni * multivectorB.e1_e2_e3_no + rotorA.e1_e2 * multivectorB.e3_no + (-1.0) * rotorA.e1_e3 * multivectorB.e2_no + rotorA.e1_no * multivectorB.e2_e3 + rotorA.e1_no * multivectorB.e2_e3_no_ni + rotorA.e2_e3 * multivectorB.e1_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e3 + (-1.0) * rotorA.e2_no * multivectorB.e1_e3_no_ni + rotorA.e3_no * multivectorB.e1_e2 + rotorA.e3_no * multivectorB.e1_e2_no_ni;
	this->e1_e2_e3_ni = rotorA._1 * multivectorB.e1_e2_e3_ni + rotorA.no_ni * multivectorB.e1_e2_e3_ni + rotorA.e1_e2 * multivectorB.e3_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_ni + rotorA.e1_ni * multivectorB.e2_e3 + (-1.0) * rotorA.e1_ni * multivectorB.e2_e3_no_ni + rotorA.e2_e3 * multivectorB.e1_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_e3 + rotorA.e2_ni * multivectorB.e1_e3_no_ni + rotorA.e3_ni * multivectorB.e1_e2 + (-1.0) * rotorA.e3_ni * multivectorB.e1_e2_no_ni;
	this->e1_e2_no_ni = rotorA._1 * multivectorB.e1_e2_no_ni + rotorA.no_ni * multivectorB.e1_e2 + rotorA.e1_e2 * multivectorB.no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_e3_no_ni + rotorA.e1_ni * multivectorB.e2_no + (-1.0) * rotorA.e1_no * multivectorB.e2_ni + rotorA.e2_e3 * multivectorB.e1_e3_no_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_no + rotorA.e2_no * multivectorB.e1_ni + rotorA.e3_ni * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e3_no * multivectorB.e1_e2_e3_ni;
	this->e1_e3_no_ni = rotorA._1 * multivectorB.e1_e3_no_ni + rotorA.no_ni * multivectorB.e1_e3 + rotorA.e1_e2 * multivectorB.e2_e3_no_ni + rotorA.e1_e3 * multivectorB.no_ni + rotorA.e1_ni * multivectorB.e3_no + (-1.0) * rotorA.e1_no * multivectorB.e3_ni + (-1.0) * rotorA.e2_e3 * multivectorB.e1_e2_no_ni + (-1.0) * rotorA.e2_ni * multivectorB.e1_e2_e3_no + rotorA.e2_no * multivectorB.e1_e2_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_no + rotorA.e3_no * multivectorB.e1_ni;
	this->e2_e3_no_ni = rotorA._1 * multivectorB.e2_e3_no_ni + rotorA.no_ni * multivectorB.e2_e3 + (-1.0) * rotorA.e1_e2 * multivectorB.e1_e3_no_ni + rotorA.e1_e3 * multivectorB.e1_e2_no_ni + rotorA.e1_ni * multivectorB.e1_e2_e3_no + (-1.0) * rotorA.e1_no * multivectorB.e1_e2_e3_ni + rotorA.e2_e3 * multivectorB.no_ni + rotorA.e2_ni * multivectorB.e3_no + (-1.0) * rotorA.e2_no * multivectorB.e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e2_no + rotorA.e3_no * multivectorB.e2_ni;
	this->e1_e2_e3_no_ni = rotorA._1 * multivectorB.e1_e2_e3_no_ni + rotorA.no_ni * multivectorB.e1_e2_e3 + rotorA.e1_e2 * multivectorB.e3_no_ni + (-1.0) * rotorA.e1_e3 * multivectorB.e2_no_ni + (-1.0) * rotorA.e1_ni * multivectorB.e2_e3_no + rotorA.e1_no * multivectorB.e2_e3_ni + rotorA.e2_e3 * multivectorB.e1_no_ni + rotorA.e2_ni * multivectorB.e1_e3_no + (-1.0) * rotorA.e2_no * multivectorB.e1_e3_ni + (-1.0) * rotorA.e3_ni * multivectorB.e1_e2_no + rotorA.e3_no * multivectorB.e1_e2_ni;
}

void Multivector::GeometricProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + rotorA.no_ni * rotorB.no_ni + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e1_e3 * rotorB.e1_e3 + rotorA.e1_ni * rotorB.e1_no + rotorA.e1_no * rotorB.e1_ni + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + rotorA.e2_ni * rotorB.e2_no + rotorA.e2_no * rotorB.e2_ni + rotorA.e3_ni * rotorB.e3_no + rotorA.e3_no * rotorB.e3_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1 + (-1.0) * rotorA.e1_e3 * rotorB.e2_e3 + rotorA.e1_ni * rotorB.e2_no + rotorA.e1_no * rotorB.e2_ni + rotorA.e2_e3 * rotorB.e1_e3 + (-1.0) * rotorA.e2_ni * rotorB.e1_no + (-1.0) * rotorA.e2_no * rotorB.e1_ni;
	this->e1_e3 = rotorA._1 * rotorB.e1_e3 + rotorA.e1_e2 * rotorB.e2_e3 + rotorA.e1_e3 * rotorB._1 + rotorA.e1_ni * rotorB.e3_no + rotorA.e1_no * rotorB.e3_ni + (-1.0) * rotorA.e2_e3 * rotorB.e1_e2 + (-1.0) * rotorA.e3_ni * rotorB.e1_no + (-1.0) * rotorA.e3_no * rotorB.e1_ni;
	this->e1_no = rotorA._1 * rotorB.e1_no + (-1.0) * rotorA.no_ni * rotorB.e1_no + rotorA.e1_e2 * rotorB.e2_no + rotorA.e1_e3 * rotorB.e3_no + rotorA.e1_no * rotorB._1 + rotorA.e1_no * rotorB.no_ni + (-1.0) * rotorA.e2_no * rotorB.e1_e2 + (-1.0) * rotorA.e3_no * rotorB.e1_e3;
	this->e1_ni = rotorA._1 * rotorB.e1_ni + rotorA.no_ni * rotorB.e1_ni + rotorA.e1_e2 * rotorB.e2_ni + rotorA.e1_e3 * rotorB.e3_ni + rotorA.e1_ni * rotorB._1 + (-1.0) * rotorA.e1_ni * rotorB.no_ni + (-1.0) * rotorA.e2_ni * rotorB.e1_e2 + (-1.0) * rotorA.e3_ni * rotorB.e1_e3;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + (-1.0) * rotorA.e1_e2 * rotorB.e1_e3 + rotorA.e1_e3 * rotorB.e1_e2 + rotorA.e2_e3 * rotorB._1 + rotorA.e2_ni * rotorB.e3_no + rotorA.e2_no * rotorB.e3_ni + (-1.0) * rotorA.e3_ni * rotorB.e2_no + (-1.0) * rotorA.e3_no * rotorB.e2_ni;
	this->e2_no = rotorA._1 * rotorB.e2_no + (-1.0) * rotorA.no_ni * rotorB.e2_no + (-1.0) * rotorA.e1_e2 * rotorB.e1_no + rotorA.e1_no * rotorB.e1_e2 + rotorA.e2_e3 * rotorB.e3_no + rotorA.e2_no * rotorB._1 + rotorA.e2_no * rotorB.no_ni + (-1.0) * rotorA.e3_no * rotorB.e2_e3;
	this->e2_ni = rotorA._1 * rotorB.e2_ni + rotorA.no_ni * rotorB.e2_ni + (-1.0) * rotorA.e1_e2 * rotorB.e1_ni + rotorA.e1_ni * rotorB.e1_e2 + rotorA.e2_e3 * rotorB.e3_ni + rotorA.e2_ni * rotorB._1 + (-1.0) * rotorA.e2_ni * rotorB.no_ni + (-1.0) * rotorA.e3_ni * rotorB.e2_e3;
	this->e3_no = rotorA._1 * rotorB.e3_no + (-1.0) * rotorA.no_ni * rotorB.e3_no + (-1.0) * rotorA.e1_e3 * rotorB.e1_no + rotorA.e1_no * rotorB.e1_e3 + (-1.0) * rotorA.e2_e3 * rotorB.e2_no + rotorA.e2_no * rotorB.e2_e3 + rotorA.e3_no * rotorB._1 + rotorA.e3_no * rotorB.no_ni;
	this->e3_ni = rotorA._1 * rotorB.e3_ni + rotorA.no_ni * rotorB.e3_ni + (-1.0) * rotorA.e1_e3 * rotorB.e1_ni + rotorA.e1_ni * rotorB.e1_e3 + (-1.0) * rotorA.e2_e3 * rotorB.e2_ni + rotorA.e2_ni * rotorB.e2_e3 + rotorA.e3_ni * rotorB._1 + (-1.0) * rotorA.e3_ni * rotorB.no_ni;
	this->no_ni = rotorA._1 * rotorB.no_ni + rotorA.no_ni * rotorB._1 + rotorA.e1_ni * rotorB.e1_no + (-1.0) * rotorA.e1_no * rotorB.e1_ni + rotorA.e2_ni * rotorB.e2_no + (-1.0) * rotorA.e2_no * rotorB.e2_ni + rotorA.e3_ni * rotorB.e3_no + (-1.0) * rotorA.e3_no * rotorB.e3_ni;
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
	this->e1_e2_e3_no = rotorA.e1_e2 * rotorB.e3_no + (-1.0) * rotorA.e1_e3 * rotorB.e2_no + rotorA.e1_no * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_no + (-1.0) * rotorA.e2_no * rotorB.e1_e3 + rotorA.e3_no * rotorB.e1_e2;
	this->e1_e2_e3_ni = rotorA.e1_e2 * rotorB.e3_ni + (-1.0) * rotorA.e1_e3 * rotorB.e2_ni + rotorA.e1_ni * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.e1_ni + (-1.0) * rotorA.e2_ni * rotorB.e1_e3 + rotorA.e3_ni * rotorB.e1_e2;
	this->e1_e2_no_ni = rotorA.no_ni * rotorB.e1_e2 + rotorA.e1_e2 * rotorB.no_ni + rotorA.e1_ni * rotorB.e2_no + (-1.0) * rotorA.e1_no * rotorB.e2_ni + (-1.0) * rotorA.e2_ni * rotorB.e1_no + rotorA.e2_no * rotorB.e1_ni;
	this->e1_e3_no_ni = rotorA.no_ni * rotorB.e1_e3 + rotorA.e1_e3 * rotorB.no_ni + rotorA.e1_ni * rotorB.e3_no + (-1.0) * rotorA.e1_no * rotorB.e3_ni + (-1.0) * rotorA.e3_ni * rotorB.e1_no + rotorA.e3_no * rotorB.e1_ni;
	this->e2_e3_no_ni = rotorA.no_ni * rotorB.e2_e3 + rotorA.e2_e3 * rotorB.no_ni + rotorA.e2_ni * rotorB.e3_no + (-1.0) * rotorA.e2_no * rotorB.e3_ni + (-1.0) * rotorA.e3_ni * rotorB.e2_no + rotorA.e3_no * rotorB.e2_ni;
	this->e1_e2_e3_no_ni = 0.0;
}

void Multivector::Reverse(const Multivector& multivectorA)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->e3 = multivectorA.e3;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = (-1.0) * multivectorA.e1_e2;
	this->e1_e3 = (-1.0) * multivectorA.e1_e3;
	this->e1_no = (-1.0) * multivectorA.e1_no;
	this->e1_ni = (-1.0) * multivectorA.e1_ni;
	this->e2_e3 = (-1.0) * multivectorA.e2_e3;
	this->e2_no = (-1.0) * multivectorA.e2_no;
	this->e2_ni = (-1.0) * multivectorA.e2_ni;
	this->e3_no = (-1.0) * multivectorA.e3_no;
	this->e3_ni = (-1.0) * multivectorA.e3_ni;
	this->no_ni = (-1.0) * multivectorA.no_ni;
	this->e1_e2_e3 = (-1.0) * multivectorA.e1_e2_e3;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e2_no;
	this->e1_e2_ni = (-1.0) * multivectorA.e1_e2_ni;
	this->e1_e3_no = (-1.0) * multivectorA.e1_e3_no;
	this->e1_e3_ni = (-1.0) * multivectorA.e1_e3_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e1_no_ni;
	this->e2_e3_no = (-1.0) * multivectorA.e2_e3_no;
	this->e2_e3_ni = (-1.0) * multivectorA.e2_e3_ni;
	this->e2_no_ni = (-1.0) * multivectorA.e2_no_ni;
	this->e3_no_ni = (-1.0) * multivectorA.e3_no_ni;
	this->e1_e2_e3_no = multivectorA.e1_e2_e3_no;
	this->e1_e2_e3_ni = multivectorA.e1_e2_e3_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
	this->e1_e3_no_ni = multivectorA.e1_e3_no_ni;
	this->e2_e3_no_ni = multivectorA.e2_e3_no_ni;
	this->e1_e2_e3_no_ni = multivectorA.e1_e2_e3_no_ni;
}

double Multivector::SquareMagnitude() const
{
	return (this->_1 * this->_1) + (this->e1 * this->e1) + (this->e1_e3 * this->e1_e3) + (-2)*this->e1_e3_ni*this->e1_e3_no + (-1)*(this->e1_e3_no_ni * this->e1_e3_no_ni) + (-2)*this->e1_ni*this->e1_no + (-1)*(this->e1_no_ni * this->e1_no_ni) + (this->e2 * this->e2) + (this->e2_e3 * this->e2_e3) + (-2)*this->e2_e3_ni*this->e2_e3_no + (this->e1_e2 * this->e1_e2) + (-1)*(this->e2_e3_no_ni * this->e2_e3_no_ni) + (-2)*this->e2_ni*this->e2_no + (-1)*(this->e2_no_ni * this->e2_no_ni) + (this->e3 * this->e3) + (-2)*this->e3_ni*this->e3_no + (-1)*(this->e3_no_ni * this->e3_no_ni) + (-2)*this->ni*this->no + (this->e1_e2_e3 * this->e1_e2_e3) + (-1)*(this->no_ni * this->no_ni) + (-2)*this->e1_e2_e3_ni*this->e1_e2_e3_no + (-1)*(this->e1_e2_e3_no_ni * this->e1_e2_e3_no_ni) + (-2)*this->e1_e2_ni*this->e1_e2_no + (-1)*(this->e1_e2_no_ni * this->e1_e2_no_ni);
}

int Multivector::GetMatrixSize() const
{
	return 32;
}

void Multivector::ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const
{
	elementCallback(0, 0, this->_1);
	elementCallback(0, 10, (-1.0)*this->e1_e3);
	elementCallback(0, 12, this->e1_e3_ni);
	elementCallback(0, 11, this->e1_e3_no);
	elementCallback(0, 13, (-1.0)*this->e1_e3_no_ni);
	elementCallback(0, 15, this->e1_ni);
	elementCallback(0, 14, this->e1_no);
	elementCallback(0, 16, this->e1_no_ni);
	elementCallback(0, 17, this->e2);
	elementCallback(0, 18, (-1.0)*this->e2_e3);
	elementCallback(0, 20, this->e2_e3_ni);
	elementCallback(0, 1, this->e1);
	elementCallback(0, 19, this->e2_e3_no);
	elementCallback(0, 21, (-1.0)*this->e2_e3_no_ni);
	elementCallback(0, 23, this->e2_ni);
	elementCallback(0, 22, this->e2_no);
	elementCallback(0, 24, this->e2_no_ni);
	elementCallback(0, 25, this->e3);
	elementCallback(0, 27, this->e3_ni);
	elementCallback(0, 26, this->e3_no);
	elementCallback(0, 28, this->e3_no_ni);
	elementCallback(0, 30, (-1.0)*this->ni);
	elementCallback(0, 2, (-1.0)*this->e1_e2);
	elementCallback(0, 29, (-1.0)*this->no);
	elementCallback(0, 31, this->no_ni);
	elementCallback(0, 3, (-1.0)*this->e1_e2_e3);
	elementCallback(0, 5, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(0, 4, (-1.0)*this->e1_e2_e3_no);
	elementCallback(0, 6, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(0, 8, this->e1_e2_ni);
	elementCallback(0, 7, this->e1_e2_no);
	elementCallback(0, 9, (-1.0)*this->e1_e2_no_ni);
	elementCallback(1, 1, this->_1);
	elementCallback(1, 25, this->e1_e3);
	elementCallback(1, 27, this->e1_e3_ni);
	elementCallback(1, 26, this->e1_e3_no);
	elementCallback(1, 28, this->e1_e3_no_ni);
	elementCallback(1, 30, (-1.0)*this->e1_ni);
	elementCallback(1, 29, (-1.0)*this->e1_no);
	elementCallback(1, 31, this->e1_no_ni);
	elementCallback(1, 2, (-1.0)*this->e2);
	elementCallback(1, 3, (-1.0)*this->e2_e3);
	elementCallback(1, 5, (-1.0)*this->e2_e3_ni);
	elementCallback(1, 0, this->e1);
	elementCallback(1, 4, (-1.0)*this->e2_e3_no);
	elementCallback(1, 6, (-1.0)*this->e2_e3_no_ni);
	elementCallback(1, 8, this->e2_ni);
	elementCallback(1, 7, this->e2_no);
	elementCallback(1, 9, (-1.0)*this->e2_no_ni);
	elementCallback(1, 10, (-1.0)*this->e3);
	elementCallback(1, 12, this->e3_ni);
	elementCallback(1, 11, this->e3_no);
	elementCallback(1, 13, (-1.0)*this->e3_no_ni);
	elementCallback(1, 15, this->ni);
	elementCallback(1, 17, this->e1_e2);
	elementCallback(1, 14, this->no);
	elementCallback(1, 16, this->no_ni);
	elementCallback(1, 18, (-1.0)*this->e1_e2_e3);
	elementCallback(1, 20, this->e1_e2_e3_ni);
	elementCallback(1, 19, this->e1_e2_e3_no);
	elementCallback(1, 21, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(1, 23, this->e1_e2_ni);
	elementCallback(1, 22, this->e1_e2_no);
	elementCallback(1, 24, this->e1_e2_no_ni);
	elementCallback(2, 17, this->_1);
	elementCallback(2, 3, this->e1_e3);
	elementCallback(2, 5, this->e1_e3_ni);
	elementCallback(2, 4, this->e1_e3_no);
	elementCallback(2, 6, this->e1_e3_no_ni);
	elementCallback(2, 8, (-1.0)*this->e1_ni);
	elementCallback(2, 7, (-1.0)*this->e1_no);
	elementCallback(2, 9, this->e1_no_ni);
	elementCallback(2, 0, this->e2);
	elementCallback(2, 25, this->e2_e3);
	elementCallback(2, 27, this->e2_e3_ni);
	elementCallback(2, 2, this->e1);
	elementCallback(2, 26, this->e2_e3_no);
	elementCallback(2, 28, this->e2_e3_no_ni);
	elementCallback(2, 30, (-1.0)*this->e2_ni);
	elementCallback(2, 29, (-1.0)*this->e2_no);
	elementCallback(2, 31, this->e2_no_ni);
	elementCallback(2, 18, (-1.0)*this->e3);
	elementCallback(2, 20, this->e3_ni);
	elementCallback(2, 19, this->e3_no);
	elementCallback(2, 21, (-1.0)*this->e3_no_ni);
	elementCallback(2, 23, this->ni);
	elementCallback(2, 1, (-1.0)*this->e1_e2);
	elementCallback(2, 22, this->no);
	elementCallback(2, 24, this->no_ni);
	elementCallback(2, 10, this->e1_e2_e3);
	elementCallback(2, 12, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(2, 11, (-1.0)*this->e1_e2_e3_no);
	elementCallback(2, 13, this->e1_e2_e3_no_ni);
	elementCallback(2, 15, (-1.0)*this->e1_e2_ni);
	elementCallback(2, 14, (-1.0)*this->e1_e2_no);
	elementCallback(2, 16, (-1.0)*this->e1_e2_no_ni);
	elementCallback(3, 25, this->_1);
	elementCallback(3, 1, (-1.0)*this->e1_e3);
	elementCallback(3, 15, (-1.0)*this->e1_e3_ni);
	elementCallback(3, 14, (-1.0)*this->e1_e3_no);
	elementCallback(3, 16, (-1.0)*this->e1_e3_no_ni);
	elementCallback(3, 12, (-1.0)*this->e1_ni);
	elementCallback(3, 11, (-1.0)*this->e1_no);
	elementCallback(3, 13, this->e1_no_ni);
	elementCallback(3, 18, this->e2);
	elementCallback(3, 17, (-1.0)*this->e2_e3);
	elementCallback(3, 23, (-1.0)*this->e2_e3_ni);
	elementCallback(3, 10, this->e1);
	elementCallback(3, 22, (-1.0)*this->e2_e3_no);
	elementCallback(3, 24, (-1.0)*this->e2_e3_no_ni);
	elementCallback(3, 20, (-1.0)*this->e2_ni);
	elementCallback(3, 19, (-1.0)*this->e2_no);
	elementCallback(3, 21, this->e2_no_ni);
	elementCallback(3, 0, this->e3);
	elementCallback(3, 30, (-1.0)*this->e3_ni);
	elementCallback(3, 29, (-1.0)*this->e3_no);
	elementCallback(3, 31, this->e3_no_ni);
	elementCallback(3, 27, this->ni);
	elementCallback(3, 3, (-1.0)*this->e1_e2);
	elementCallback(3, 26, this->no);
	elementCallback(3, 28, this->no_ni);
	elementCallback(3, 2, (-1.0)*this->e1_e2_e3);
	elementCallback(3, 8, this->e1_e2_e3_ni);
	elementCallback(3, 7, this->e1_e2_e3_no);
	elementCallback(3, 9, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(3, 5, (-1.0)*this->e1_e2_ni);
	elementCallback(3, 4, (-1.0)*this->e1_e2_no);
	elementCallback(3, 6, (-1.0)*this->e1_e2_no_ni);
	elementCallback(4, 29, this->_1);
	elementCallback(4, 11, (-1.0)*this->e1_e3);
	elementCallback(4, 10, (-1.0)*this->e1_e3_ni);
	elementCallback(4, 13, this->e1_e3_ni);
	elementCallback(4, 11, (-1.0)*this->e1_e3_no_ni);
	elementCallback(4, 1, (-1.0)*this->e1_ni);
	elementCallback(4, 16, this->e1_ni);
	elementCallback(4, 14, this->e1_no_ni);
	elementCallback(4, 22, this->e2);
	elementCallback(4, 19, (-1.0)*this->e2_e3);
	elementCallback(4, 18, (-1.0)*this->e2_e3_ni);
	elementCallback(4, 21, this->e2_e3_ni);
	elementCallback(4, 14, this->e1);
	elementCallback(4, 19, (-1.0)*this->e2_e3_no_ni);
	elementCallback(4, 17, (-1.0)*this->e2_ni);
	elementCallback(4, 24, this->e2_ni);
	elementCallback(4, 22, this->e2_no_ni);
	elementCallback(4, 26, this->e3);
	elementCallback(4, 25, (-1.0)*this->e3_ni);
	elementCallback(4, 28, this->e3_ni);
	elementCallback(4, 26, this->e3_no_ni);
	elementCallback(4, 0, this->ni);
	elementCallback(4, 31, (-1.0)*this->ni);
	elementCallback(4, 7, (-1.0)*this->e1_e2);
	elementCallback(4, 29, this->no_ni);
	elementCallback(4, 4, (-1.0)*this->e1_e2_e3);
	elementCallback(4, 3, this->e1_e2_e3_ni);
	elementCallback(4, 6, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(4, 4, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(4, 2, (-1.0)*this->e1_e2_ni);
	elementCallback(4, 9, this->e1_e2_ni);
	elementCallback(4, 7, (-1.0)*this->e1_e2_no_ni);
	elementCallback(5, 30, this->_1);
	elementCallback(5, 12, (-1.0)*this->e1_e3);
	elementCallback(5, 10, (-1.0)*this->e1_e3_no);
	elementCallback(5, 13, (-1.0)*this->e1_e3_no);
	elementCallback(5, 12, this->e1_e3_no_ni);
	elementCallback(5, 1, (-1.0)*this->e1_no);
	elementCallback(5, 16, (-1.0)*this->e1_no);
	elementCallback(5, 15, (-1.0)*this->e1_no_ni);
	elementCallback(5, 23, this->e2);
	elementCallback(5, 20, (-1.0)*this->e2_e3);
	elementCallback(5, 15, this->e1);
	elementCallback(5, 18, (-1.0)*this->e2_e3_no);
	elementCallback(5, 21, (-1.0)*this->e2_e3_no);
	elementCallback(5, 20, this->e2_e3_no_ni);
	elementCallback(5, 17, (-1.0)*this->e2_no);
	elementCallback(5, 24, (-1.0)*this->e2_no);
	elementCallback(5, 23, (-1.0)*this->e2_no_ni);
	elementCallback(5, 27, this->e3);
	elementCallback(5, 25, (-1.0)*this->e3_no);
	elementCallback(5, 28, (-1.0)*this->e3_no);
	elementCallback(5, 27, (-1.0)*this->e3_no_ni);
	elementCallback(5, 8, (-1.0)*this->e1_e2);
	elementCallback(5, 0, this->no);
	elementCallback(5, 31, this->no);
	elementCallback(5, 30, (-1.0)*this->no_ni);
	elementCallback(5, 5, (-1.0)*this->e1_e2_e3);
	elementCallback(5, 3, this->e1_e2_e3_no);
	elementCallback(5, 6, this->e1_e2_e3_no);
	elementCallback(5, 5, this->e1_e2_e3_no_ni);
	elementCallback(5, 2, (-1.0)*this->e1_e2_no);
	elementCallback(5, 9, (-1.0)*this->e1_e2_no);
	elementCallback(5, 8, this->e1_e2_no_ni);
	elementCallback(6, 2, this->_1);
	elementCallback(6, 18, (-1.0)*this->e1_e3);
	elementCallback(6, 20, this->e1_e3_ni);
	elementCallback(6, 19, this->e1_e3_no);
	elementCallback(6, 21, (-1.0)*this->e1_e3_no_ni);
	elementCallback(6, 23, this->e1_ni);
	elementCallback(6, 22, this->e1_no);
	elementCallback(6, 24, this->e1_no_ni);
	elementCallback(6, 1, (-1.0)*this->e2);
	elementCallback(6, 10, this->e2_e3);
	elementCallback(6, 12, (-1.0)*this->e2_e3_ni);
	elementCallback(6, 17, this->e1);
	elementCallback(6, 11, (-1.0)*this->e2_e3_no);
	elementCallback(6, 13, this->e2_e3_no_ni);
	elementCallback(6, 15, (-1.0)*this->e2_ni);
	elementCallback(6, 14, (-1.0)*this->e2_no);
	elementCallback(6, 16, (-1.0)*this->e2_no_ni);
	elementCallback(6, 3, this->e3);
	elementCallback(6, 5, this->e3_ni);
	elementCallback(6, 4, this->e3_no);
	elementCallback(6, 6, this->e3_no_ni);
	elementCallback(6, 8, (-1.0)*this->ni);
	elementCallback(6, 0, this->e1_e2);
	elementCallback(6, 7, (-1.0)*this->no);
	elementCallback(6, 9, this->no_ni);
	elementCallback(6, 25, this->e1_e2_e3);
	elementCallback(6, 27, this->e1_e2_e3_ni);
	elementCallback(6, 26, this->e1_e2_e3_no);
	elementCallback(6, 28, this->e1_e2_e3_no_ni);
	elementCallback(6, 30, (-1.0)*this->e1_e2_ni);
	elementCallback(6, 29, (-1.0)*this->e1_e2_no);
	elementCallback(6, 31, this->e1_e2_no_ni);
	elementCallback(7, 10, this->_1);
	elementCallback(7, 0, this->e1_e3);
	elementCallback(7, 30, (-1.0)*this->e1_e3_ni);
	elementCallback(7, 29, (-1.0)*this->e1_e3_no);
	elementCallback(7, 31, this->e1_e3_no_ni);
	elementCallback(7, 27, this->e1_ni);
	elementCallback(7, 26, this->e1_no);
	elementCallback(7, 28, this->e1_no_ni);
	elementCallback(7, 3, (-1.0)*this->e2);
	elementCallback(7, 2, (-1.0)*this->e2_e3);
	elementCallback(7, 8, this->e2_e3_ni);
	elementCallback(7, 25, this->e1);
	elementCallback(7, 7, this->e2_e3_no);
	elementCallback(7, 9, (-1.0)*this->e2_e3_no_ni);
	elementCallback(7, 5, (-1.0)*this->e2_ni);
	elementCallback(7, 4, (-1.0)*this->e2_no);
	elementCallback(7, 6, (-1.0)*this->e2_no_ni);
	elementCallback(7, 1, (-1.0)*this->e3);
	elementCallback(7, 15, (-1.0)*this->e3_ni);
	elementCallback(7, 14, (-1.0)*this->e3_no);
	elementCallback(7, 16, (-1.0)*this->e3_no_ni);
	elementCallback(7, 12, (-1.0)*this->ni);
	elementCallback(7, 18, this->e1_e2);
	elementCallback(7, 11, (-1.0)*this->no);
	elementCallback(7, 13, this->no_ni);
	elementCallback(7, 17, (-1.0)*this->e1_e2_e3);
	elementCallback(7, 23, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(7, 22, (-1.0)*this->e1_e2_e3_no);
	elementCallback(7, 24, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(7, 20, (-1.0)*this->e1_e2_ni);
	elementCallback(7, 19, (-1.0)*this->e1_e2_no);
	elementCallback(7, 21, this->e1_e2_no_ni);
	elementCallback(8, 14, this->_1);
	elementCallback(8, 26, this->e1_e3);
	elementCallback(8, 25, (-1.0)*this->e1_e3_ni);
	elementCallback(8, 28, this->e1_e3_ni);
	elementCallback(8, 26, this->e1_e3_no_ni);
	elementCallback(8, 0, this->e1_ni);
	elementCallback(8, 31, (-1.0)*this->e1_ni);
	elementCallback(8, 29, this->e1_no_ni);
	elementCallback(8, 7, (-1.0)*this->e2);
	elementCallback(8, 4, (-1.0)*this->e2_e3);
	elementCallback(8, 3, this->e2_e3_ni);
	elementCallback(8, 6, (-1.0)*this->e2_e3_ni);
	elementCallback(8, 29, this->e1);
	elementCallback(8, 4, (-1.0)*this->e2_e3_no_ni);
	elementCallback(8, 2, (-1.0)*this->e2_ni);
	elementCallback(8, 9, this->e2_ni);
	elementCallback(8, 7, (-1.0)*this->e2_no_ni);
	elementCallback(8, 11, (-1.0)*this->e3);
	elementCallback(8, 10, (-1.0)*this->e3_ni);
	elementCallback(8, 13, this->e3_ni);
	elementCallback(8, 11, (-1.0)*this->e3_no_ni);
	elementCallback(8, 1, (-1.0)*this->ni);
	elementCallback(8, 16, this->ni);
	elementCallback(8, 22, this->e1_e2);
	elementCallback(8, 14, this->no_ni);
	elementCallback(8, 19, (-1.0)*this->e1_e2_e3);
	elementCallback(8, 18, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(8, 21, this->e1_e2_e3_ni);
	elementCallback(8, 19, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(8, 17, (-1.0)*this->e1_e2_ni);
	elementCallback(8, 24, this->e1_e2_ni);
	elementCallback(8, 22, this->e1_e2_no_ni);
	elementCallback(9, 15, this->_1);
	elementCallback(9, 27, this->e1_e3);
	elementCallback(9, 25, (-1.0)*this->e1_e3_no);
	elementCallback(9, 28, (-1.0)*this->e1_e3_no);
	elementCallback(9, 27, (-1.0)*this->e1_e3_no_ni);
	elementCallback(9, 0, this->e1_no);
	elementCallback(9, 31, this->e1_no);
	elementCallback(9, 30, (-1.0)*this->e1_no_ni);
	elementCallback(9, 8, (-1.0)*this->e2);
	elementCallback(9, 5, (-1.0)*this->e2_e3);
	elementCallback(9, 30, this->e1);
	elementCallback(9, 3, this->e2_e3_no);
	elementCallback(9, 6, this->e2_e3_no);
	elementCallback(9, 5, this->e2_e3_no_ni);
	elementCallback(9, 2, (-1.0)*this->e2_no);
	elementCallback(9, 9, (-1.0)*this->e2_no);
	elementCallback(9, 8, this->e2_no_ni);
	elementCallback(9, 12, (-1.0)*this->e3);
	elementCallback(9, 10, (-1.0)*this->e3_no);
	elementCallback(9, 13, (-1.0)*this->e3_no);
	elementCallback(9, 12, this->e3_no_ni);
	elementCallback(9, 23, this->e1_e2);
	elementCallback(9, 1, (-1.0)*this->no);
	elementCallback(9, 16, (-1.0)*this->no);
	elementCallback(9, 15, (-1.0)*this->no_ni);
	elementCallback(9, 20, (-1.0)*this->e1_e2_e3);
	elementCallback(9, 18, (-1.0)*this->e1_e2_e3_no);
	elementCallback(9, 21, (-1.0)*this->e1_e2_e3_no);
	elementCallback(9, 20, this->e1_e2_e3_no_ni);
	elementCallback(9, 17, (-1.0)*this->e1_e2_no);
	elementCallback(9, 24, (-1.0)*this->e1_e2_no);
	elementCallback(9, 23, (-1.0)*this->e1_e2_no_ni);
	elementCallback(10, 18, this->_1);
	elementCallback(10, 2, this->e1_e3);
	elementCallback(10, 8, (-1.0)*this->e1_e3_ni);
	elementCallback(10, 7, (-1.0)*this->e1_e3_no);
	elementCallback(10, 9, this->e1_e3_no_ni);
	elementCallback(10, 5, this->e1_ni);
	elementCallback(10, 4, this->e1_no);
	elementCallback(10, 6, this->e1_no_ni);
	elementCallback(10, 25, this->e2);
	elementCallback(10, 0, this->e2_e3);
	elementCallback(10, 30, (-1.0)*this->e2_e3_ni);
	elementCallback(10, 3, this->e1);
	elementCallback(10, 29, (-1.0)*this->e2_e3_no);
	elementCallback(10, 31, this->e2_e3_no_ni);
	elementCallback(10, 27, this->e2_ni);
	elementCallback(10, 26, this->e2_no);
	elementCallback(10, 28, this->e2_no_ni);
	elementCallback(10, 17, (-1.0)*this->e3);
	elementCallback(10, 23, (-1.0)*this->e3_ni);
	elementCallback(10, 22, (-1.0)*this->e3_no);
	elementCallback(10, 24, (-1.0)*this->e3_no_ni);
	elementCallback(10, 20, (-1.0)*this->ni);
	elementCallback(10, 10, (-1.0)*this->e1_e2);
	elementCallback(10, 19, (-1.0)*this->no);
	elementCallback(10, 21, this->no_ni);
	elementCallback(10, 1, this->e1_e2_e3);
	elementCallback(10, 15, this->e1_e2_e3_ni);
	elementCallback(10, 14, this->e1_e2_e3_no);
	elementCallback(10, 16, this->e1_e2_e3_no_ni);
	elementCallback(10, 12, this->e1_e2_ni);
	elementCallback(10, 11, this->e1_e2_no);
	elementCallback(10, 13, (-1.0)*this->e1_e2_no_ni);
	elementCallback(11, 22, this->_1);
	elementCallback(11, 4, this->e1_e3);
	elementCallback(11, 3, (-1.0)*this->e1_e3_ni);
	elementCallback(11, 6, this->e1_e3_ni);
	elementCallback(11, 4, this->e1_e3_no_ni);
	elementCallback(11, 2, this->e1_ni);
	elementCallback(11, 9, (-1.0)*this->e1_ni);
	elementCallback(11, 7, this->e1_no_ni);
	elementCallback(11, 29, this->e2);
	elementCallback(11, 26, this->e2_e3);
	elementCallback(11, 25, (-1.0)*this->e2_e3_ni);
	elementCallback(11, 28, this->e2_e3_ni);
	elementCallback(11, 7, this->e1);
	elementCallback(11, 26, this->e2_e3_no_ni);
	elementCallback(11, 0, this->e2_ni);
	elementCallback(11, 31, (-1.0)*this->e2_ni);
	elementCallback(11, 29, this->e2_no_ni);
	elementCallback(11, 19, (-1.0)*this->e3);
	elementCallback(11, 18, (-1.0)*this->e3_ni);
	elementCallback(11, 21, this->e3_ni);
	elementCallback(11, 19, (-1.0)*this->e3_no_ni);
	elementCallback(11, 17, (-1.0)*this->ni);
	elementCallback(11, 24, this->ni);
	elementCallback(11, 14, (-1.0)*this->e1_e2);
	elementCallback(11, 22, this->no_ni);
	elementCallback(11, 11, this->e1_e2_e3);
	elementCallback(11, 10, this->e1_e2_e3_ni);
	elementCallback(11, 13, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(11, 11, this->e1_e2_e3_no_ni);
	elementCallback(11, 1, this->e1_e2_ni);
	elementCallback(11, 16, (-1.0)*this->e1_e2_ni);
	elementCallback(11, 14, (-1.0)*this->e1_e2_no_ni);
	elementCallback(12, 23, this->_1);
	elementCallback(12, 5, this->e1_e3);
	elementCallback(12, 3, (-1.0)*this->e1_e3_no);
	elementCallback(12, 6, (-1.0)*this->e1_e3_no);
	elementCallback(12, 5, (-1.0)*this->e1_e3_no_ni);
	elementCallback(12, 2, this->e1_no);
	elementCallback(12, 9, this->e1_no);
	elementCallback(12, 8, (-1.0)*this->e1_no_ni);
	elementCallback(12, 30, this->e2);
	elementCallback(12, 27, this->e2_e3);
	elementCallback(12, 8, this->e1);
	elementCallback(12, 25, (-1.0)*this->e2_e3_no);
	elementCallback(12, 28, (-1.0)*this->e2_e3_no);
	elementCallback(12, 27, (-1.0)*this->e2_e3_no_ni);
	elementCallback(12, 0, this->e2_no);
	elementCallback(12, 31, this->e2_no);
	elementCallback(12, 30, (-1.0)*this->e2_no_ni);
	elementCallback(12, 20, (-1.0)*this->e3);
	elementCallback(12, 18, (-1.0)*this->e3_no);
	elementCallback(12, 21, (-1.0)*this->e3_no);
	elementCallback(12, 20, this->e3_no_ni);
	elementCallback(12, 15, (-1.0)*this->e1_e2);
	elementCallback(12, 17, (-1.0)*this->no);
	elementCallback(12, 24, (-1.0)*this->no);
	elementCallback(12, 23, (-1.0)*this->no_ni);
	elementCallback(12, 12, this->e1_e2_e3);
	elementCallback(12, 10, this->e1_e2_e3_no);
	elementCallback(12, 13, this->e1_e2_e3_no);
	elementCallback(12, 12, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(12, 1, this->e1_e2_no);
	elementCallback(12, 16, this->e1_e2_no);
	elementCallback(12, 15, this->e1_e2_no_ni);
	elementCallback(13, 26, this->_1);
	elementCallback(13, 14, (-1.0)*this->e1_e3);
	elementCallback(13, 1, this->e1_e3_ni);
	elementCallback(13, 16, (-1.0)*this->e1_e3_ni);
	elementCallback(13, 14, (-1.0)*this->e1_e3_no_ni);
	elementCallback(13, 10, this->e1_ni);
	elementCallback(13, 13, (-1.0)*this->e1_ni);
	elementCallback(13, 11, this->e1_no_ni);
	elementCallback(13, 19, this->e2);
	elementCallback(13, 22, (-1.0)*this->e2_e3);
	elementCallback(13, 17, this->e2_e3_ni);
	elementCallback(13, 24, (-1.0)*this->e2_e3_ni);
	elementCallback(13, 11, this->e1);
	elementCallback(13, 22, (-1.0)*this->e2_e3_no_ni);
	elementCallback(13, 18, this->e2_ni);
	elementCallback(13, 21, (-1.0)*this->e2_ni);
	elementCallback(13, 19, this->e2_no_ni);
	elementCallback(13, 29, this->e3);
	elementCallback(13, 0, this->e3_ni);
	elementCallback(13, 31, (-1.0)*this->e3_ni);
	elementCallback(13, 29, this->e3_no_ni);
	elementCallback(13, 25, (-1.0)*this->ni);
	elementCallback(13, 28, this->ni);
	elementCallback(13, 4, (-1.0)*this->e1_e2);
	elementCallback(13, 26, this->no_ni);
	elementCallback(13, 7, (-1.0)*this->e1_e2_e3);
	elementCallback(13, 2, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(13, 9, this->e1_e2_e3_ni);
	elementCallback(13, 7, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(13, 3, this->e1_e2_ni);
	elementCallback(13, 6, (-1.0)*this->e1_e2_ni);
	elementCallback(13, 4, (-1.0)*this->e1_e2_no_ni);
	elementCallback(14, 27, this->_1);
	elementCallback(14, 15, (-1.0)*this->e1_e3);
	elementCallback(14, 1, this->e1_e3_no);
	elementCallback(14, 16, this->e1_e3_no);
	elementCallback(14, 15, this->e1_e3_no_ni);
	elementCallback(14, 10, this->e1_no);
	elementCallback(14, 13, this->e1_no);
	elementCallback(14, 12, (-1.0)*this->e1_no_ni);
	elementCallback(14, 20, this->e2);
	elementCallback(14, 23, (-1.0)*this->e2_e3);
	elementCallback(14, 12, this->e1);
	elementCallback(14, 17, this->e2_e3_no);
	elementCallback(14, 24, this->e2_e3_no);
	elementCallback(14, 23, this->e2_e3_no_ni);
	elementCallback(14, 18, this->e2_no);
	elementCallback(14, 21, this->e2_no);
	elementCallback(14, 20, (-1.0)*this->e2_no_ni);
	elementCallback(14, 30, this->e3);
	elementCallback(14, 0, this->e3_no);
	elementCallback(14, 31, this->e3_no);
	elementCallback(14, 30, (-1.0)*this->e3_no_ni);
	elementCallback(14, 5, (-1.0)*this->e1_e2);
	elementCallback(14, 25, (-1.0)*this->no);
	elementCallback(14, 28, (-1.0)*this->no);
	elementCallback(14, 27, (-1.0)*this->no_ni);
	elementCallback(14, 8, (-1.0)*this->e1_e2_e3);
	elementCallback(14, 2, (-1.0)*this->e1_e2_e3_no);
	elementCallback(14, 9, (-1.0)*this->e1_e2_e3_no);
	elementCallback(14, 8, this->e1_e2_e3_no_ni);
	elementCallback(14, 3, this->e1_e2_no);
	elementCallback(14, 6, this->e1_e2_no);
	elementCallback(14, 5, this->e1_e2_no_ni);
	elementCallback(15, 31, (-1.0)*this->_1);
	elementCallback(15, 13, this->e1_e3);
	elementCallback(15, 12, (-1.0)*this->e1_e3_ni);
	elementCallback(15, 11, this->e1_e3_no);
	elementCallback(15, 10, this->e1_e3_no_ni);
	elementCallback(15, 15, (-1.0)*this->e1_ni);
	elementCallback(15, 14, this->e1_no);
	elementCallback(15, 1, (-1.0)*this->e1_no_ni);
	elementCallback(15, 24, (-1.0)*this->e2);
	elementCallback(15, 21, this->e2_e3);
	elementCallback(15, 20, (-1.0)*this->e2_e3_ni);
	elementCallback(15, 16, (-1.0)*this->e1);
	elementCallback(15, 19, this->e2_e3_no);
	elementCallback(15, 18, this->e2_e3_no_ni);
	elementCallback(15, 23, (-1.0)*this->e2_ni);
	elementCallback(15, 22, this->e2_no);
	elementCallback(15, 17, (-1.0)*this->e2_no_ni);
	elementCallback(15, 28, (-1.0)*this->e3);
	elementCallback(15, 27, (-1.0)*this->e3_ni);
	elementCallback(15, 26, this->e3_no);
	elementCallback(15, 25, (-1.0)*this->e3_no_ni);
	elementCallback(15, 30, this->ni);
	elementCallback(15, 9, this->e1_e2);
	elementCallback(15, 29, (-1.0)*this->no);
	elementCallback(15, 0, (-1.0)*this->no_ni);
	elementCallback(15, 6, this->e1_e2_e3);
	elementCallback(15, 5, this->e1_e2_e3_ni);
	elementCallback(15, 4, (-1.0)*this->e1_e2_e3_no);
	elementCallback(15, 3, this->e1_e2_e3_no_ni);
	elementCallback(15, 8, (-1.0)*this->e1_e2_ni);
	elementCallback(15, 7, this->e1_e2_no);
	elementCallback(15, 2, this->e1_e2_no_ni);
	elementCallback(16, 3, this->_1);
	elementCallback(16, 17, (-1.0)*this->e1_e3);
	elementCallback(16, 23, (-1.0)*this->e1_e3_ni);
	elementCallback(16, 22, (-1.0)*this->e1_e3_no);
	elementCallback(16, 24, (-1.0)*this->e1_e3_no_ni);
	elementCallback(16, 20, (-1.0)*this->e1_ni);
	elementCallback(16, 19, (-1.0)*this->e1_no);
	elementCallback(16, 21, this->e1_no_ni);
	elementCallback(16, 10, (-1.0)*this->e2);
	elementCallback(16, 1, this->e2_e3);
	elementCallback(16, 15, this->e2_e3_ni);
	elementCallback(16, 18, this->e1);
	elementCallback(16, 14, this->e2_e3_no);
	elementCallback(16, 16, this->e2_e3_no_ni);
	elementCallback(16, 12, this->e2_ni);
	elementCallback(16, 11, this->e2_no);
	elementCallback(16, 13, (-1.0)*this->e2_no_ni);
	elementCallback(16, 2, this->e3);
	elementCallback(16, 8, (-1.0)*this->e3_ni);
	elementCallback(16, 7, (-1.0)*this->e3_no);
	elementCallback(16, 9, this->e3_no_ni);
	elementCallback(16, 5, this->ni);
	elementCallback(16, 25, this->e1_e2);
	elementCallback(16, 4, this->no);
	elementCallback(16, 6, this->no_ni);
	elementCallback(16, 0, this->e1_e2_e3);
	elementCallback(16, 30, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(16, 29, (-1.0)*this->e1_e2_e3_no);
	elementCallback(16, 31, this->e1_e2_e3_no_ni);
	elementCallback(16, 27, this->e1_e2_ni);
	elementCallback(16, 26, this->e1_e2_no);
	elementCallback(16, 28, this->e1_e2_no_ni);
	elementCallback(17, 7, this->_1);
	elementCallback(17, 19, (-1.0)*this->e1_e3);
	elementCallback(17, 18, (-1.0)*this->e1_e3_ni);
	elementCallback(17, 21, this->e1_e3_ni);
	elementCallback(17, 19, (-1.0)*this->e1_e3_no_ni);
	elementCallback(17, 17, (-1.0)*this->e1_ni);
	elementCallback(17, 24, this->e1_ni);
	elementCallback(17, 22, this->e1_no_ni);
	elementCallback(17, 14, (-1.0)*this->e2);
	elementCallback(17, 11, this->e2_e3);
	elementCallback(17, 10, this->e2_e3_ni);
	elementCallback(17, 13, (-1.0)*this->e2_e3_ni);
	elementCallback(17, 22, this->e1);
	elementCallback(17, 11, this->e2_e3_no_ni);
	elementCallback(17, 1, this->e2_ni);
	elementCallback(17, 16, (-1.0)*this->e2_ni);
	elementCallback(17, 14, (-1.0)*this->e2_no_ni);
	elementCallback(17, 4, this->e3);
	elementCallback(17, 3, (-1.0)*this->e3_ni);
	elementCallback(17, 6, this->e3_ni);
	elementCallback(17, 4, this->e3_no_ni);
	elementCallback(17, 2, this->ni);
	elementCallback(17, 9, (-1.0)*this->ni);
	elementCallback(17, 29, this->e1_e2);
	elementCallback(17, 7, this->no_ni);
	elementCallback(17, 26, this->e1_e2_e3);
	elementCallback(17, 25, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(17, 28, this->e1_e2_e3_ni);
	elementCallback(17, 26, this->e1_e2_e3_no_ni);
	elementCallback(17, 0, this->e1_e2_ni);
	elementCallback(17, 31, (-1.0)*this->e1_e2_ni);
	elementCallback(17, 29, this->e1_e2_no_ni);
	elementCallback(18, 8, this->_1);
	elementCallback(18, 20, (-1.0)*this->e1_e3);
	elementCallback(18, 18, (-1.0)*this->e1_e3_no);
	elementCallback(18, 21, (-1.0)*this->e1_e3_no);
	elementCallback(18, 20, this->e1_e3_no_ni);
	elementCallback(18, 17, (-1.0)*this->e1_no);
	elementCallback(18, 24, (-1.0)*this->e1_no);
	elementCallback(18, 23, (-1.0)*this->e1_no_ni);
	elementCallback(18, 15, (-1.0)*this->e2);
	elementCallback(18, 12, this->e2_e3);
	elementCallback(18, 23, this->e1);
	elementCallback(18, 10, this->e2_e3_no);
	elementCallback(18, 13, this->e2_e3_no);
	elementCallback(18, 12, (-1.0)*this->e2_e3_no_ni);
	elementCallback(18, 1, this->e2_no);
	elementCallback(18, 16, this->e2_no);
	elementCallback(18, 15, this->e2_no_ni);
	elementCallback(18, 5, this->e3);
	elementCallback(18, 3, (-1.0)*this->e3_no);
	elementCallback(18, 6, (-1.0)*this->e3_no);
	elementCallback(18, 5, (-1.0)*this->e3_no_ni);
	elementCallback(18, 30, this->e1_e2);
	elementCallback(18, 2, this->no);
	elementCallback(18, 9, this->no);
	elementCallback(18, 8, (-1.0)*this->no_ni);
	elementCallback(18, 27, this->e1_e2_e3);
	elementCallback(18, 25, (-1.0)*this->e1_e2_e3_no);
	elementCallback(18, 28, (-1.0)*this->e1_e2_e3_no);
	elementCallback(18, 27, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(18, 0, this->e1_e2_no);
	elementCallback(18, 31, this->e1_e2_no);
	elementCallback(18, 30, (-1.0)*this->e1_e2_no_ni);
	elementCallback(19, 11, this->_1);
	elementCallback(19, 29, this->e1_e3);
	elementCallback(19, 0, this->e1_e3_ni);
	elementCallback(19, 31, (-1.0)*this->e1_e3_ni);
	elementCallback(19, 29, this->e1_e3_no_ni);
	elementCallback(19, 25, (-1.0)*this->e1_ni);
	elementCallback(19, 28, this->e1_ni);
	elementCallback(19, 26, this->e1_no_ni);
	elementCallback(19, 4, (-1.0)*this->e2);
	elementCallback(19, 7, (-1.0)*this->e2_e3);
	elementCallback(19, 2, (-1.0)*this->e2_e3_ni);
	elementCallback(19, 9, this->e2_e3_ni);
	elementCallback(19, 26, this->e1);
	elementCallback(19, 7, (-1.0)*this->e2_e3_no_ni);
	elementCallback(19, 3, this->e2_ni);
	elementCallback(19, 6, (-1.0)*this->e2_ni);
	elementCallback(19, 4, (-1.0)*this->e2_no_ni);
	elementCallback(19, 14, (-1.0)*this->e3);
	elementCallback(19, 1, this->e3_ni);
	elementCallback(19, 16, (-1.0)*this->e3_ni);
	elementCallback(19, 14, (-1.0)*this->e3_no_ni);
	elementCallback(19, 10, this->ni);
	elementCallback(19, 13, (-1.0)*this->ni);
	elementCallback(19, 19, this->e1_e2);
	elementCallback(19, 11, this->no_ni);
	elementCallback(19, 22, (-1.0)*this->e1_e2_e3);
	elementCallback(19, 17, this->e1_e2_e3_ni);
	elementCallback(19, 24, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(19, 22, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(19, 18, this->e1_e2_ni);
	elementCallback(19, 21, (-1.0)*this->e1_e2_ni);
	elementCallback(19, 19, this->e1_e2_no_ni);
	elementCallback(20, 12, this->_1);
	elementCallback(20, 30, this->e1_e3);
	elementCallback(20, 0, this->e1_e3_no);
	elementCallback(20, 31, this->e1_e3_no);
	elementCallback(20, 30, (-1.0)*this->e1_e3_no_ni);
	elementCallback(20, 25, (-1.0)*this->e1_no);
	elementCallback(20, 28, (-1.0)*this->e1_no);
	elementCallback(20, 27, (-1.0)*this->e1_no_ni);
	elementCallback(20, 5, (-1.0)*this->e2);
	elementCallback(20, 8, (-1.0)*this->e2_e3);
	elementCallback(20, 27, this->e1);
	elementCallback(20, 2, (-1.0)*this->e2_e3_no);
	elementCallback(20, 9, (-1.0)*this->e2_e3_no);
	elementCallback(20, 8, this->e2_e3_no_ni);
	elementCallback(20, 3, this->e2_no);
	elementCallback(20, 6, this->e2_no);
	elementCallback(20, 5, this->e2_no_ni);
	elementCallback(20, 15, (-1.0)*this->e3);
	elementCallback(20, 1, this->e3_no);
	elementCallback(20, 16, this->e3_no);
	elementCallback(20, 15, this->e3_no_ni);
	elementCallback(20, 20, this->e1_e2);
	elementCallback(20, 10, this->no);
	elementCallback(20, 13, this->no);
	elementCallback(20, 12, (-1.0)*this->no_ni);
	elementCallback(20, 23, (-1.0)*this->e1_e2_e3);
	elementCallback(20, 17, this->e1_e2_e3_no);
	elementCallback(20, 24, this->e1_e2_e3_no);
	elementCallback(20, 23, this->e1_e2_e3_no_ni);
	elementCallback(20, 18, this->e1_e2_no);
	elementCallback(20, 21, this->e1_e2_no);
	elementCallback(20, 20, (-1.0)*this->e1_e2_no_ni);
	elementCallback(21, 16, (-1.0)*this->_1);
	elementCallback(21, 28, (-1.0)*this->e1_e3);
	elementCallback(21, 27, (-1.0)*this->e1_e3_ni);
	elementCallback(21, 26, this->e1_e3_no);
	elementCallback(21, 25, (-1.0)*this->e1_e3_no_ni);
	elementCallback(21, 30, this->e1_ni);
	elementCallback(21, 29, (-1.0)*this->e1_no);
	elementCallback(21, 0, (-1.0)*this->e1_no_ni);
	elementCallback(21, 9, this->e2);
	elementCallback(21, 6, this->e2_e3);
	elementCallback(21, 5, this->e2_e3_ni);
	elementCallback(21, 31, (-1.0)*this->e1);
	elementCallback(21, 4, (-1.0)*this->e2_e3_no);
	elementCallback(21, 3, this->e2_e3_no_ni);
	elementCallback(21, 8, (-1.0)*this->e2_ni);
	elementCallback(21, 7, this->e2_no);
	elementCallback(21, 2, this->e2_no_ni);
	elementCallback(21, 13, this->e3);
	elementCallback(21, 12, (-1.0)*this->e3_ni);
	elementCallback(21, 11, this->e3_no);
	elementCallback(21, 10, this->e3_no_ni);
	elementCallback(21, 15, (-1.0)*this->ni);
	elementCallback(21, 24, (-1.0)*this->e1_e2);
	elementCallback(21, 14, this->no);
	elementCallback(21, 1, (-1.0)*this->no_ni);
	elementCallback(21, 21, this->e1_e2_e3);
	elementCallback(21, 20, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(21, 19, this->e1_e2_e3_no);
	elementCallback(21, 18, this->e1_e2_e3_no_ni);
	elementCallback(21, 23, (-1.0)*this->e1_e2_ni);
	elementCallback(21, 22, this->e1_e2_no);
	elementCallback(21, 17, (-1.0)*this->e1_e2_no_ni);
	elementCallback(22, 19, this->_1);
	elementCallback(22, 7, this->e1_e3);
	elementCallback(22, 2, this->e1_e3_ni);
	elementCallback(22, 9, (-1.0)*this->e1_e3_ni);
	elementCallback(22, 7, this->e1_e3_no_ni);
	elementCallback(22, 3, (-1.0)*this->e1_ni);
	elementCallback(22, 6, this->e1_ni);
	elementCallback(22, 4, this->e1_no_ni);
	elementCallback(22, 26, this->e2);
	elementCallback(22, 29, this->e2_e3);
	elementCallback(22, 0, this->e2_e3_ni);
	elementCallback(22, 31, (-1.0)*this->e2_e3_ni);
	elementCallback(22, 4, this->e1);
	elementCallback(22, 29, this->e2_e3_no_ni);
	elementCallback(22, 25, (-1.0)*this->e2_ni);
	elementCallback(22, 28, this->e2_ni);
	elementCallback(22, 26, this->e2_no_ni);
	elementCallback(22, 22, (-1.0)*this->e3);
	elementCallback(22, 17, this->e3_ni);
	elementCallback(22, 24, (-1.0)*this->e3_ni);
	elementCallback(22, 22, (-1.0)*this->e3_no_ni);
	elementCallback(22, 18, this->ni);
	elementCallback(22, 21, (-1.0)*this->ni);
	elementCallback(22, 11, (-1.0)*this->e1_e2);
	elementCallback(22, 19, this->no_ni);
	elementCallback(22, 14, this->e1_e2_e3);
	elementCallback(22, 1, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(22, 16, this->e1_e2_e3_ni);
	elementCallback(22, 14, this->e1_e2_e3_no_ni);
	elementCallback(22, 10, (-1.0)*this->e1_e2_ni);
	elementCallback(22, 13, this->e1_e2_ni);
	elementCallback(22, 11, (-1.0)*this->e1_e2_no_ni);
	elementCallback(23, 20, this->_1);
	elementCallback(23, 8, this->e1_e3);
	elementCallback(23, 2, this->e1_e3_no);
	elementCallback(23, 9, this->e1_e3_no);
	elementCallback(23, 8, (-1.0)*this->e1_e3_no_ni);
	elementCallback(23, 3, (-1.0)*this->e1_no);
	elementCallback(23, 6, (-1.0)*this->e1_no);
	elementCallback(23, 5, (-1.0)*this->e1_no_ni);
	elementCallback(23, 27, this->e2);
	elementCallback(23, 30, this->e2_e3);
	elementCallback(23, 5, this->e1);
	elementCallback(23, 0, this->e2_e3_no);
	elementCallback(23, 31, this->e2_e3_no);
	elementCallback(23, 30, (-1.0)*this->e2_e3_no_ni);
	elementCallback(23, 25, (-1.0)*this->e2_no);
	elementCallback(23, 28, (-1.0)*this->e2_no);
	elementCallback(23, 27, (-1.0)*this->e2_no_ni);
	elementCallback(23, 23, (-1.0)*this->e3);
	elementCallback(23, 17, this->e3_no);
	elementCallback(23, 24, this->e3_no);
	elementCallback(23, 23, this->e3_no_ni);
	elementCallback(23, 12, (-1.0)*this->e1_e2);
	elementCallback(23, 18, this->no);
	elementCallback(23, 21, this->no);
	elementCallback(23, 20, (-1.0)*this->no_ni);
	elementCallback(23, 15, this->e1_e2_e3);
	elementCallback(23, 1, (-1.0)*this->e1_e2_e3_no);
	elementCallback(23, 16, (-1.0)*this->e1_e2_e3_no);
	elementCallback(23, 15, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(23, 10, (-1.0)*this->e1_e2_no);
	elementCallback(23, 13, (-1.0)*this->e1_e2_no);
	elementCallback(23, 12, this->e1_e2_no_ni);
	elementCallback(24, 24, (-1.0)*this->_1);
	elementCallback(24, 6, (-1.0)*this->e1_e3);
	elementCallback(24, 5, (-1.0)*this->e1_e3_ni);
	elementCallback(24, 4, this->e1_e3_no);
	elementCallback(24, 3, (-1.0)*this->e1_e3_no_ni);
	elementCallback(24, 8, this->e1_ni);
	elementCallback(24, 7, (-1.0)*this->e1_no);
	elementCallback(24, 2, (-1.0)*this->e1_no_ni);
	elementCallback(24, 31, (-1.0)*this->e2);
	elementCallback(24, 28, (-1.0)*this->e2_e3);
	elementCallback(24, 27, (-1.0)*this->e2_e3_ni);
	elementCallback(24, 9, (-1.0)*this->e1);
	elementCallback(24, 26, this->e2_e3_no);
	elementCallback(24, 25, (-1.0)*this->e2_e3_no_ni);
	elementCallback(24, 30, this->e2_ni);
	elementCallback(24, 29, (-1.0)*this->e2_no);
	elementCallback(24, 0, (-1.0)*this->e2_no_ni);
	elementCallback(24, 21, this->e3);
	elementCallback(24, 20, (-1.0)*this->e3_ni);
	elementCallback(24, 19, this->e3_no);
	elementCallback(24, 18, this->e3_no_ni);
	elementCallback(24, 23, (-1.0)*this->ni);
	elementCallback(24, 16, this->e1_e2);
	elementCallback(24, 22, this->no);
	elementCallback(24, 17, (-1.0)*this->no_ni);
	elementCallback(24, 13, (-1.0)*this->e1_e2_e3);
	elementCallback(24, 12, this->e1_e2_e3_ni);
	elementCallback(24, 11, (-1.0)*this->e1_e2_e3_no);
	elementCallback(24, 10, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(24, 15, this->e1_e2_ni);
	elementCallback(24, 14, (-1.0)*this->e1_e2_no);
	elementCallback(24, 1, this->e1_e2_no_ni);
	elementCallback(25, 28, (-1.0)*this->_1);
	elementCallback(25, 16, this->e1_e3);
	elementCallback(25, 15, this->e1_e3_ni);
	elementCallback(25, 14, (-1.0)*this->e1_e3_no);
	elementCallback(25, 1, this->e1_e3_no_ni);
	elementCallback(25, 12, this->e1_ni);
	elementCallback(25, 11, (-1.0)*this->e1_no);
	elementCallback(25, 10, (-1.0)*this->e1_no_ni);
	elementCallback(25, 21, (-1.0)*this->e2);
	elementCallback(25, 24, this->e2_e3);
	elementCallback(25, 23, this->e2_e3_ni);
	elementCallback(25, 13, (-1.0)*this->e1);
	elementCallback(25, 22, (-1.0)*this->e2_e3_no);
	elementCallback(25, 17, this->e2_e3_no_ni);
	elementCallback(25, 20, this->e2_ni);
	elementCallback(25, 19, (-1.0)*this->e2_no);
	elementCallback(25, 18, (-1.0)*this->e2_no_ni);
	elementCallback(25, 31, (-1.0)*this->e3);
	elementCallback(25, 30, this->e3_ni);
	elementCallback(25, 29, (-1.0)*this->e3_no);
	elementCallback(25, 0, (-1.0)*this->e3_no_ni);
	elementCallback(25, 27, (-1.0)*this->ni);
	elementCallback(25, 6, this->e1_e2);
	elementCallback(25, 26, this->no);
	elementCallback(25, 25, (-1.0)*this->no_ni);
	elementCallback(25, 9, this->e1_e2_e3);
	elementCallback(25, 8, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(25, 7, this->e1_e2_e3_no);
	elementCallback(25, 2, this->e1_e2_e3_no_ni);
	elementCallback(25, 5, this->e1_e2_ni);
	elementCallback(25, 4, (-1.0)*this->e1_e2_no);
	elementCallback(25, 3, this->e1_e2_no_ni);
	elementCallback(26, 4, this->_1);
	elementCallback(26, 22, (-1.0)*this->e1_e3);
	elementCallback(26, 17, this->e1_e3_ni);
	elementCallback(26, 24, (-1.0)*this->e1_e3_ni);
	elementCallback(26, 22, (-1.0)*this->e1_e3_no_ni);
	elementCallback(26, 18, this->e1_ni);
	elementCallback(26, 21, (-1.0)*this->e1_ni);
	elementCallback(26, 19, this->e1_no_ni);
	elementCallback(26, 11, (-1.0)*this->e2);
	elementCallback(26, 14, this->e2_e3);
	elementCallback(26, 1, (-1.0)*this->e2_e3_ni);
	elementCallback(26, 16, this->e2_e3_ni);
	elementCallback(26, 19, this->e1);
	elementCallback(26, 14, this->e2_e3_no_ni);
	elementCallback(26, 10, (-1.0)*this->e2_ni);
	elementCallback(26, 13, this->e2_ni);
	elementCallback(26, 11, (-1.0)*this->e2_no_ni);
	elementCallback(26, 7, this->e3);
	elementCallback(26, 2, this->e3_ni);
	elementCallback(26, 9, (-1.0)*this->e3_ni);
	elementCallback(26, 7, this->e3_no_ni);
	elementCallback(26, 3, (-1.0)*this->ni);
	elementCallback(26, 6, this->ni);
	elementCallback(26, 26, this->e1_e2);
	elementCallback(26, 4, this->no_ni);
	elementCallback(26, 29, this->e1_e2_e3);
	elementCallback(26, 0, this->e1_e2_e3_ni);
	elementCallback(26, 31, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(26, 29, this->e1_e2_e3_no_ni);
	elementCallback(26, 25, (-1.0)*this->e1_e2_ni);
	elementCallback(26, 28, this->e1_e2_ni);
	elementCallback(26, 26, this->e1_e2_no_ni);
	elementCallback(27, 5, this->_1);
	elementCallback(27, 23, (-1.0)*this->e1_e3);
	elementCallback(27, 17, this->e1_e3_no);
	elementCallback(27, 24, this->e1_e3_no);
	elementCallback(27, 23, this->e1_e3_no_ni);
	elementCallback(27, 18, this->e1_no);
	elementCallback(27, 21, this->e1_no);
	elementCallback(27, 20, (-1.0)*this->e1_no_ni);
	elementCallback(27, 12, (-1.0)*this->e2);
	elementCallback(27, 15, this->e2_e3);
	elementCallback(27, 20, this->e1);
	elementCallback(27, 1, (-1.0)*this->e2_e3_no);
	elementCallback(27, 16, (-1.0)*this->e2_e3_no);
	elementCallback(27, 15, (-1.0)*this->e2_e3_no_ni);
	elementCallback(27, 10, (-1.0)*this->e2_no);
	elementCallback(27, 13, (-1.0)*this->e2_no);
	elementCallback(27, 12, this->e2_no_ni);
	elementCallback(27, 8, this->e3);
	elementCallback(27, 2, this->e3_no);
	elementCallback(27, 9, this->e3_no);
	elementCallback(27, 8, (-1.0)*this->e3_no_ni);
	elementCallback(27, 27, this->e1_e2);
	elementCallback(27, 3, (-1.0)*this->no);
	elementCallback(27, 6, (-1.0)*this->no);
	elementCallback(27, 5, (-1.0)*this->no_ni);
	elementCallback(27, 30, this->e1_e2_e3);
	elementCallback(27, 0, this->e1_e2_e3_no);
	elementCallback(27, 31, this->e1_e2_e3_no);
	elementCallback(27, 30, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(27, 25, (-1.0)*this->e1_e2_no);
	elementCallback(27, 28, (-1.0)*this->e1_e2_no);
	elementCallback(27, 27, (-1.0)*this->e1_e2_no_ni);
	elementCallback(28, 9, (-1.0)*this->_1);
	elementCallback(28, 21, this->e1_e3);
	elementCallback(28, 20, (-1.0)*this->e1_e3_ni);
	elementCallback(28, 19, this->e1_e3_no);
	elementCallback(28, 18, this->e1_e3_no_ni);
	elementCallback(28, 23, (-1.0)*this->e1_ni);
	elementCallback(28, 22, this->e1_no);
	elementCallback(28, 17, (-1.0)*this->e1_no_ni);
	elementCallback(28, 16, this->e2);
	elementCallback(28, 13, (-1.0)*this->e2_e3);
	elementCallback(28, 12, this->e2_e3_ni);
	elementCallback(28, 24, (-1.0)*this->e1);
	elementCallback(28, 11, (-1.0)*this->e2_e3_no);
	elementCallback(28, 10, (-1.0)*this->e2_e3_no_ni);
	elementCallback(28, 15, this->e2_ni);
	elementCallback(28, 14, (-1.0)*this->e2_no);
	elementCallback(28, 1, this->e2_no_ni);
	elementCallback(28, 6, (-1.0)*this->e3);
	elementCallback(28, 5, (-1.0)*this->e3_ni);
	elementCallback(28, 4, this->e3_no);
	elementCallback(28, 3, (-1.0)*this->e3_no_ni);
	elementCallback(28, 8, this->ni);
	elementCallback(28, 31, (-1.0)*this->e1_e2);
	elementCallback(28, 7, (-1.0)*this->no);
	elementCallback(28, 2, (-1.0)*this->no_ni);
	elementCallback(28, 28, (-1.0)*this->e1_e2_e3);
	elementCallback(28, 27, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(28, 26, this->e1_e2_e3_no);
	elementCallback(28, 25, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(28, 30, this->e1_e2_ni);
	elementCallback(28, 29, (-1.0)*this->e1_e2_no);
	elementCallback(28, 0, (-1.0)*this->e1_e2_no_ni);
	elementCallback(29, 13, (-1.0)*this->_1);
	elementCallback(29, 31, (-1.0)*this->e1_e3);
	elementCallback(29, 30, this->e1_e3_ni);
	elementCallback(29, 29, (-1.0)*this->e1_e3_no);
	elementCallback(29, 0, (-1.0)*this->e1_e3_no_ni);
	elementCallback(29, 27, (-1.0)*this->e1_ni);
	elementCallback(29, 26, this->e1_no);
	elementCallback(29, 25, (-1.0)*this->e1_no_ni);
	elementCallback(29, 6, this->e2);
	elementCallback(29, 9, this->e2_e3);
	elementCallback(29, 8, (-1.0)*this->e2_e3_ni);
	elementCallback(29, 28, (-1.0)*this->e1);
	elementCallback(29, 7, this->e2_e3_no);
	elementCallback(29, 2, this->e2_e3_no_ni);
	elementCallback(29, 5, this->e2_ni);
	elementCallback(29, 4, (-1.0)*this->e2_no);
	elementCallback(29, 3, this->e2_no_ni);
	elementCallback(29, 16, this->e3);
	elementCallback(29, 15, this->e3_ni);
	elementCallback(29, 14, (-1.0)*this->e3_no);
	elementCallback(29, 1, this->e3_no_ni);
	elementCallback(29, 12, this->ni);
	elementCallback(29, 21, (-1.0)*this->e1_e2);
	elementCallback(29, 11, (-1.0)*this->no);
	elementCallback(29, 10, (-1.0)*this->no_ni);
	elementCallback(29, 24, this->e1_e2_e3);
	elementCallback(29, 23, this->e1_e2_e3_ni);
	elementCallback(29, 22, (-1.0)*this->e1_e2_e3_no);
	elementCallback(29, 17, this->e1_e2_e3_no_ni);
	elementCallback(29, 20, this->e1_e2_ni);
	elementCallback(29, 19, (-1.0)*this->e1_e2_no);
	elementCallback(29, 18, (-1.0)*this->e1_e2_no_ni);
	elementCallback(30, 21, (-1.0)*this->_1);
	elementCallback(30, 9, (-1.0)*this->e1_e3);
	elementCallback(30, 8, this->e1_e3_ni);
	elementCallback(30, 7, (-1.0)*this->e1_e3_no);
	elementCallback(30, 2, (-1.0)*this->e1_e3_no_ni);
	elementCallback(30, 5, (-1.0)*this->e1_ni);
	elementCallback(30, 4, this->e1_no);
	elementCallback(30, 3, (-1.0)*this->e1_no_ni);
	elementCallback(30, 28, (-1.0)*this->e2);
	elementCallback(30, 31, (-1.0)*this->e2_e3);
	elementCallback(30, 30, this->e2_e3_ni);
	elementCallback(30, 6, (-1.0)*this->e1);
	elementCallback(30, 29, (-1.0)*this->e2_e3_no);
	elementCallback(30, 0, (-1.0)*this->e2_e3_no_ni);
	elementCallback(30, 27, (-1.0)*this->e2_ni);
	elementCallback(30, 26, this->e2_no);
	elementCallback(30, 25, (-1.0)*this->e2_no_ni);
	elementCallback(30, 24, this->e3);
	elementCallback(30, 23, this->e3_ni);
	elementCallback(30, 22, (-1.0)*this->e3_no);
	elementCallback(30, 17, this->e3_no_ni);
	elementCallback(30, 20, this->ni);
	elementCallback(30, 13, this->e1_e2);
	elementCallback(30, 19, (-1.0)*this->no);
	elementCallback(30, 18, (-1.0)*this->no_ni);
	elementCallback(30, 16, (-1.0)*this->e1_e2_e3);
	elementCallback(30, 15, (-1.0)*this->e1_e2_e3_ni);
	elementCallback(30, 14, this->e1_e2_e3_no);
	elementCallback(30, 1, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(30, 12, (-1.0)*this->e1_e2_ni);
	elementCallback(30, 11, this->e1_e2_no);
	elementCallback(30, 10, this->e1_e2_no_ni);
	elementCallback(31, 6, (-1.0)*this->_1);
	elementCallback(31, 24, this->e1_e3);
	elementCallback(31, 23, this->e1_e3_ni);
	elementCallback(31, 22, (-1.0)*this->e1_e3_no);
	elementCallback(31, 17, this->e1_e3_no_ni);
	elementCallback(31, 20, this->e1_ni);
	elementCallback(31, 19, (-1.0)*this->e1_no);
	elementCallback(31, 18, (-1.0)*this->e1_no_ni);
	elementCallback(31, 13, this->e2);
	elementCallback(31, 16, (-1.0)*this->e2_e3);
	elementCallback(31, 15, (-1.0)*this->e2_e3_ni);
	elementCallback(31, 21, (-1.0)*this->e1);
	elementCallback(31, 14, this->e2_e3_no);
	elementCallback(31, 1, (-1.0)*this->e2_e3_no_ni);
	elementCallback(31, 12, (-1.0)*this->e2_ni);
	elementCallback(31, 11, this->e2_no);
	elementCallback(31, 10, this->e2_no_ni);
	elementCallback(31, 9, (-1.0)*this->e3);
	elementCallback(31, 8, this->e3_ni);
	elementCallback(31, 7, (-1.0)*this->e3_no);
	elementCallback(31, 2, (-1.0)*this->e3_no_ni);
	elementCallback(31, 5, (-1.0)*this->ni);
	elementCallback(31, 28, (-1.0)*this->e1_e2);
	elementCallback(31, 4, this->no);
	elementCallback(31, 3, (-1.0)*this->no_ni);
	elementCallback(31, 31, (-1.0)*this->e1_e2_e3);
	elementCallback(31, 30, this->e1_e2_e3_ni);
	elementCallback(31, 29, (-1.0)*this->e1_e2_e3_no);
	elementCallback(31, 0, (-1.0)*this->e1_e2_e3_no_ni);
	elementCallback(31, 27, (-1.0)*this->e1_e2_ni);
	elementCallback(31, 26, this->e1_e2_no);
	elementCallback(31, 25, (-1.0)*this->e1_e2_no_ni);
}

void Multivector::ToColumnMatrix(std::function<void(int, double)> elementCallback) const
{
	elementCallback(0, this->_1);
	elementCallback(1, this->e1);
	elementCallback(2, this->e1_e2);
	elementCallback(3, this->e1_e2_e3);
	elementCallback(4, this->e1_e2_e3_ni);
	elementCallback(5, this->e1_e2_e3_no);
	elementCallback(6, this->e1_e2_e3_no_ni);
	elementCallback(7, this->e1_e2_ni);
	elementCallback(8, this->e1_e2_no);
	elementCallback(9, this->e1_e2_no_ni);
	elementCallback(10, this->e1_e3);
	elementCallback(11, this->e1_e3_ni);
	elementCallback(12, this->e1_e3_no);
	elementCallback(13, this->e1_e3_no_ni);
	elementCallback(14, this->e1_ni);
	elementCallback(15, this->e1_no);
	elementCallback(16, this->e1_no_ni);
	elementCallback(17, this->e2);
	elementCallback(18, this->e2_e3);
	elementCallback(19, this->e2_e3_ni);
	elementCallback(20, this->e2_e3_no);
	elementCallback(21, this->e2_e3_no_ni);
	elementCallback(22, this->e2_ni);
	elementCallback(23, this->e2_no);
	elementCallback(24, this->e2_no_ni);
	elementCallback(25, this->e3);
	elementCallback(26, this->e3_ni);
	elementCallback(27, this->e3_no);
	elementCallback(28, this->e3_no_ni);
	elementCallback(29, this->ni);
	elementCallback(30, this->no);
	elementCallback(31, this->no_ni);
}

void Multivector::FromColumnMatrix(std::function<void(int, double&)> elementCallback)
{
	elementCallback(0, this->_1);
	elementCallback(1, this->e1);
	elementCallback(2, this->e1_e2);
	elementCallback(3, this->e1_e2_e3);
	elementCallback(4, this->e1_e2_e3_ni);
	elementCallback(5, this->e1_e2_e3_no);
	elementCallback(6, this->e1_e2_e3_no_ni);
	elementCallback(7, this->e1_e2_ni);
	elementCallback(8, this->e1_e2_no);
	elementCallback(9, this->e1_e2_no_ni);
	elementCallback(10, this->e1_e3);
	elementCallback(11, this->e1_e3_ni);
	elementCallback(12, this->e1_e3_no);
	elementCallback(13, this->e1_e3_no_ni);
	elementCallback(14, this->e1_ni);
	elementCallback(15, this->e1_no);
	elementCallback(16, this->e1_no_ni);
	elementCallback(17, this->e2);
	elementCallback(18, this->e2_e3);
	elementCallback(19, this->e2_e3_ni);
	elementCallback(20, this->e2_e3_no);
	elementCallback(21, this->e2_e3_no_ni);
	elementCallback(22, this->e2_ni);
	elementCallback(23, this->e2_no);
	elementCallback(24, this->e2_no_ni);
	elementCallback(25, this->e3);
	elementCallback(26, this->e3_ni);
	elementCallback(27, this->e3_no);
	elementCallback(28, this->e3_no_ni);
	elementCallback(29, this->ni);
	elementCallback(30, this->no);
	elementCallback(31, this->no_ni);
}

