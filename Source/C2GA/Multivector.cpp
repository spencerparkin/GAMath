#include "Multivector.h"

using namespace C2GA;

Multivector::Multivector(double _1, double e1, double e2, double no, double ni, double e1_e2, double e1_no, double e1_ni, double e2_no, double e2_ni, double no_ni, double e1_e2_no, double e1_e2_ni, double e1_no_ni, double e2_no_ni, double e1_e2_no_ni)
{
	this->_1 = _1;
	this->e1 = e1;
	this->e2 = e2;
	this->no = no;
	this->ni = ni;
	this->e1_e2 = e1_e2;
	this->e1_no = e1_no;
	this->e1_ni = e1_ni;
	this->e2_no = e2_no;
	this->e2_ni = e2_ni;
	this->no_ni = no_ni;
	this->e1_e2_no = e1_e2_no;
	this->e1_e2_ni = e1_e2_ni;
	this->e1_no_ni = e1_no_ni;
	this->e2_no_ni = e2_no_ni;
	this->e1_e2_no_ni = e1_e2_no_ni;
}

Multivector::Multivector(const Scalar& scalar)
{
	this->_1 = scalar._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

Multivector::Multivector(const Vector& vector)
{
	this->_1 = 0.0;
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->no = vector.no;
	this->ni = vector.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

Multivector::Multivector(const Bivector& bivector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivector.e1_e2;
	this->e1_no = bivector.e1_no;
	this->e1_ni = bivector.e1_ni;
	this->e2_no = bivector.e2_no;
	this->e2_ni = bivector.e2_ni;
	this->no_ni = bivector.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

Multivector::Multivector(const Trivector& trivector)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivector.e1_e2_no;
	this->e1_e2_ni = trivector.e1_e2_ni;
	this->e1_no_ni = trivector.e1_no_ni;
	this->e2_no_ni = trivector.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

Multivector::Multivector(const PsuedoScalar& psuedoscalar)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalar.e1_e2_no_ni;
}

Multivector::Multivector(const Multivector& multivector)
{
	this->_1 = multivector._1;
	this->e1 = multivector.e1;
	this->e2 = multivector.e2;
	this->no = multivector.no;
	this->ni = multivector.ni;
	this->e1_e2 = multivector.e1_e2;
	this->e1_no = multivector.e1_no;
	this->e1_ni = multivector.e1_ni;
	this->e2_no = multivector.e2_no;
	this->e2_ni = multivector.e2_ni;
	this->no_ni = multivector.no_ni;
	this->e1_e2_no = multivector.e1_e2_no;
	this->e1_e2_ni = multivector.e1_e2_ni;
	this->e1_no_ni = multivector.e1_no_ni;
	this->e2_no_ni = multivector.e2_no_ni;
	this->e1_e2_no_ni = multivector.e1_e2_no_ni;
}

void Multivector::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 + multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
}

void Multivector::Add(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->no = vectorA.no + vectorB.no;
	this->ni = vectorA.ni + vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = vectorA.e1 + multivectorB.e1;
	this->e2 = vectorA.e2 + multivectorB.e2;
	this->no = vectorA.no + multivectorB.no;
	this->ni = vectorA.ni + multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
}

void Multivector::Add(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e1_no = bivectorA.e1_no + bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + bivectorB.e1_ni;
	this->e2_no = bivectorA.e2_no + bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + bivectorB.e2_ni;
	this->no_ni = bivectorA.no_ni + bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 + multivectorB.e1_e2;
	this->e1_no = bivectorA.e1_no + multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + multivectorB.e1_ni;
	this->e2_no = bivectorA.e2_no + multivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + multivectorB.e2_ni;
	this->no_ni = bivectorA.no_ni + multivectorB.no_ni;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
}

void Multivector::Add(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Add(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_no = trivectorA.e1_e2_no + multivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + multivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + multivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorB.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorB.e1;
	this->e2 = vectorB.e2;
	this->no = vectorB.no;
	this->ni = vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->no_ni = bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorB.e2_no_ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni + psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = multivectorB._1;
	this->e1 = multivectorB.e1;
	this->e2 = multivectorB.e2;
	this->no = multivectorB.no;
	this->ni = multivectorB.ni;
	this->e1_e2 = multivectorB.e1_e2;
	this->e1_no = multivectorB.e1_no;
	this->e1_ni = multivectorB.e1_ni;
	this->e2_no = multivectorB.e2_no;
	this->e2_ni = multivectorB.e2_ni;
	this->no_ni = multivectorB.no_ni;
	this->e1_e2_no = multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorB.e2_no_ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni + multivectorB.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 + scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 + vectorB.e1;
	this->e2 = multivectorA.e2 + vectorB.e2;
	this->no = multivectorA.no + vectorB.no;
	this->ni = multivectorA.ni + vectorB.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 + bivectorB.e1_e2;
	this->e1_no = multivectorA.e1_no + bivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni + bivectorB.e1_ni;
	this->e2_no = multivectorA.e2_no + bivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni + bivectorB.e2_ni;
	this->no_ni = multivectorA.no_ni + bivectorB.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni + trivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni + psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Add(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 + multivectorB._1;
	this->e1 = multivectorA.e1 + multivectorB.e1;
	this->e2 = multivectorA.e2 + multivectorB.e2;
	this->no = multivectorA.no + multivectorB.no;
	this->ni = multivectorA.ni + multivectorB.ni;
	this->e1_e2 = multivectorA.e1_e2 + multivectorB.e1_e2;
	this->e1_no = multivectorA.e1_no + multivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni + multivectorB.e1_ni;
	this->e2_no = multivectorA.e2_no + multivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni + multivectorB.e2_ni;
	this->no_ni = multivectorA.no_ni + multivectorB.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no + multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni + multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni + multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni + multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni + multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = scalarA._1;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = scalarA._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = -psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 - multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->no = vectorA.no - vectorB.no;
	this->ni = vectorA.ni - vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1;
	this->e2 = vectorA.e2;
	this->no = vectorA.no;
	this->ni = vectorA.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = -psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = vectorA.e1 - multivectorB.e1;
	this->e2 = vectorA.e2 - multivectorB.e2;
	this->no = vectorA.no - multivectorB.no;
	this->ni = vectorA.ni - multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e1_no = bivectorA.e1_no - bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - bivectorB.e1_ni;
	this->e2_no = bivectorA.e2_no - bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - bivectorB.e2_ni;
	this->no_ni = bivectorA.no_ni - bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->no_ni = bivectorA.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = -psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 - multivectorB.e1_e2;
	this->e1_no = bivectorA.e1_no - multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - multivectorB.e1_ni;
	this->e2_no = bivectorA.e2_no - multivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - multivectorB.e2_ni;
	this->no_ni = bivectorA.no_ni - multivectorB.no_ni;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::Subtract(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni;
	this->e1_e2_no_ni = -psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_no = trivectorA.e1_e2_no - multivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - multivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - multivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - multivectorB.e2_no_ni;
	this->e1_e2_no_ni = -multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = -vectorB.e1;
	this->e2 = -vectorB.e2;
	this->no = -vectorB.no;
	this->ni = -vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->no_ni = -bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = -trivectorB.e1_e2_no;
	this->e1_e2_ni = -trivectorB.e1_e2_ni;
	this->e1_no_ni = -trivectorB.e1_no_ni;
	this->e2_no_ni = -trivectorB.e2_no_ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni - psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = -multivectorB._1;
	this->e1 = -multivectorB.e1;
	this->e2 = -multivectorB.e2;
	this->no = -multivectorB.no;
	this->ni = -multivectorB.ni;
	this->e1_e2 = -multivectorB.e1_e2;
	this->e1_no = -multivectorB.e1_no;
	this->e1_ni = -multivectorB.e1_ni;
	this->e2_no = -multivectorB.e2_no;
	this->e2_ni = -multivectorB.e2_ni;
	this->no_ni = -multivectorB.no_ni;
	this->e1_e2_no = -multivectorB.e1_e2_no;
	this->e1_e2_ni = -multivectorB.e1_e2_ni;
	this->e1_no_ni = -multivectorB.e1_no_ni;
	this->e2_no_ni = -multivectorB.e2_no_ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni - multivectorB.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 - scalarB._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1 - vectorB.e1;
	this->e2 = multivectorA.e2 - vectorB.e2;
	this->no = multivectorA.no - vectorB.no;
	this->ni = multivectorA.ni - vectorB.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2 - bivectorB.e1_e2;
	this->e1_no = multivectorA.e1_no - bivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni - bivectorB.e1_ni;
	this->e2_no = multivectorA.e2_no - bivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni - bivectorB.e2_ni;
	this->no_ni = multivectorA.no_ni - bivectorB.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni - trivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = multivectorA._1;
	this->e1 = multivectorA.e1;
	this->e2 = multivectorA.e2;
	this->no = multivectorA.no;
	this->ni = multivectorA.ni;
	this->e1_e2 = multivectorA.e1_e2;
	this->e1_no = multivectorA.e1_no;
	this->e1_ni = multivectorA.e1_ni;
	this->e2_no = multivectorA.e2_no;
	this->e2_ni = multivectorA.e2_ni;
	this->no_ni = multivectorA.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni - psuedoscalarB.e1_e2_no_ni;
}

void Multivector::Subtract(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 - multivectorB._1;
	this->e1 = multivectorA.e1 - multivectorB.e1;
	this->e2 = multivectorA.e2 - multivectorB.e2;
	this->no = multivectorA.no - multivectorB.no;
	this->ni = multivectorA.ni - multivectorB.ni;
	this->e1_e2 = multivectorA.e1_e2 - multivectorB.e1_e2;
	this->e1_no = multivectorA.e1_no - multivectorB.e1_no;
	this->e1_ni = multivectorA.e1_ni - multivectorB.e1_ni;
	this->e2_no = multivectorA.e2_no - multivectorB.e2_no;
	this->e2_ni = multivectorA.e2_ni - multivectorB.e2_ni;
	this->no_ni = multivectorA.no_ni - multivectorB.no_ni;
	this->e1_e2_no = multivectorA.e1_e2_no - multivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA.e1_e2_ni - multivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA.e1_no_ni - multivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA.e2_no_ni - multivectorB.e2_no_ni;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni - multivectorB.e1_e2_no_ni;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::InnerProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
}

void Multivector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * vectorA.ni * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_ni;
	this->e1_no = (-1.0) * vectorA.e2 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * trivectorB.e1_e2_ni + vectorA.ni * trivectorB.e1_no_ni;
	this->e2_no = vectorA.e1 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * trivectorB.e1_e2_ni + vectorA.ni * trivectorB.e2_no_ni;
	this->no_ni = vectorA.e1 * trivectorB.e1_no_ni + vectorA.e2 * trivectorB.e2_no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = vectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * vectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + (-1.0) * vectorA.ni * multivectorB.no + (-1.0) * vectorA.no * multivectorB.ni;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + vectorA.ni * multivectorB.e1_no + vectorA.no * multivectorB.e1_ni;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + vectorA.ni * multivectorB.e2_no + vectorA.no * multivectorB.e2_ni;
	this->no = vectorA.e1 * multivectorB.e1_no + vectorA.e2 * multivectorB.e2_no + vectorA.no * multivectorB._1 + vectorA.no * multivectorB.no_ni;
	this->ni = vectorA.e1 * multivectorB.e1_ni + vectorA.e2 * multivectorB.e2_ni + vectorA.ni * multivectorB._1 + (-1.0) * vectorA.ni * multivectorB.no_ni;
	this->e1_e2 = (-1.0) * vectorA.ni * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_ni;
	this->e1_no = (-1.0) * vectorA.e2 * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_ni + vectorA.ni * multivectorB.e1_no_ni;
	this->e2_no = vectorA.e1 * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * multivectorB.e1_e2_ni + vectorA.ni * multivectorB.e2_no_ni;
	this->no_ni = vectorA.e1 * multivectorB.e1_no_ni + vectorA.e2 * multivectorB.e2_no_ni;
	this->e1_e2_no = vectorA.no * multivectorB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * vectorA.ni * multivectorB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * multivectorB.e1_e2_no_ni;
	this->e2_no_ni = vectorA.e1 * multivectorB.e1_e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + bivectorA.no_ni * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e2_no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no = (-1.0) * bivectorA.e2_no * psuedoscalarB.e1_e2_no_ni;
	this->e1_ni = bivectorA.e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2_no = bivectorA.e1_no * psuedoscalarB.e1_e2_no_ni;
	this->e2_ni = (-1.0) * bivectorA.e1_ni * psuedoscalarB.e1_e2_no_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + bivectorA.e1_ni * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_ni + bivectorA.e2_ni * multivectorB.e2_no + bivectorA.e2_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB.no_ni;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + (-1.0) * bivectorA.e1_ni * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.ni + bivectorA.e2_ni * multivectorB.e1_e2_no + bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e2_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1 + (-1.0) * bivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.e2_no * multivectorB.e2 + (-1.0) * bivectorA.no_ni * multivectorB.no;
	this->ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1 + bivectorA.e1_ni * multivectorB.e1_no_ni + bivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2 + bivectorA.no_ni * multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1 + bivectorA.no_ni * multivectorB.e1_e2_no_ni;
	this->e1_no = bivectorA.e1_no * multivectorB._1 + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_no_ni;
	this->e1_ni = bivectorA.e1_ni * multivectorB._1 + bivectorA.e2_ni * multivectorB.e1_e2_no_ni;
	this->e2_no = bivectorA.e1_no * multivectorB.e1_e2_no_ni + bivectorA.e2_no * multivectorB._1;
	this->e2_ni = (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no_ni + bivectorA.e2_ni * multivectorB._1;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no_ni + bivectorA.no_ni * multivectorB._1;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * vectorB.e2 + (-1.0) * trivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.e2 + trivectorA.e1_no_ni * vectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * vectorB.e1 + (-1.0) * trivectorA.e2_no_ni * vectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.e2;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + trivectorA.e1_no_ni * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.e2_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = trivectorA.e1_e2_ni * multivectorB.e1_e2_no + trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_no_ni * multivectorB.e1_no_ni + trivectorA.e2_no_ni * multivectorB.e2_no_ni;
	this->e1 = trivectorA.e1_e2_ni * multivectorB.e2_no + trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e2 = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + trivectorA.e2_no_ni * multivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_no_ni * multivectorB.e2_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + trivectorA.e1_no_ni * multivectorB.e1_ni + trivectorA.e2_no_ni * multivectorB.e2_ni;
	this->e1_e2 = (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * trivectorA.e1_no_ni * multivectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2 + trivectorA.e1_no_ni * multivectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * multivectorB.e1 + (-1.0) * trivectorA.e2_no_ni * multivectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * multivectorB.e1 + trivectorA.e2_no_ni * multivectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * multivectorB.e1 + trivectorA.e2_no_ni * multivectorB.e2;
	this->e1_e2_no = trivectorA.e1_e2_no * multivectorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * multivectorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * multivectorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * multivectorB._1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * vectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.e1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e2_no;
	this->e1_ni = psuedoscalarA.e1_e2_no_ni * bivectorB.e2_ni;
	this->e2_no = psuedoscalarA.e1_e2_no_ni * bivectorB.e1_no;
	this->e2_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e1_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e1_e2;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = psuedoscalarA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e1 = psuedoscalarA.e1_e2_no_ni * multivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_ni;
	this->e1_e2 = psuedoscalarA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e2_no;
	this->e1_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.e2_ni;
	this->e2_no = psuedoscalarA.e1_e2_no_ni * multivectorB.e1_no;
	this->e2_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = (-1.0) * multivectorA.ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.ni + multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2 + (-1.0) * multivectorA.e1_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.ni;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e2_ni * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.ni + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->no = multivectorA._1 * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.e2 + (-1.0) * multivectorA.no_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e1;
	this->ni = multivectorA._1 * vectorB.ni + (-1.0) * multivectorA.e2_ni * vectorB.e2 + multivectorA.no_ni * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e1;
	this->e1_e2 = (-1.0) * multivectorA.e1_e2_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.ni;
	this->e1_no = (-1.0) * multivectorA.e1_e2_no * vectorB.e2 + (-1.0) * multivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * multivectorA.e1_e2_ni * vectorB.e2 + multivectorA.e1_no_ni * vectorB.ni;
	this->e2_no = (-1.0) * multivectorA.e2_no_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.e1;
	this->e2_ni = multivectorA.e2_no_ni * vectorB.ni + multivectorA.e1_e2_ni * vectorB.e1;
	this->no_ni = multivectorA.e2_no_ni * vectorB.e2 + multivectorA.e1_no_ni * vectorB.e1;
	this->e1_e2_no = (-1.0) * multivectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = multivectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_no_ni = multivectorA.e1_e2_no_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * multivectorA.e1_e2_no_ni * vectorB.e1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA.e2_ni * bivectorB.e2_no + multivectorA.e2_no * bivectorB.e2_ni + multivectorA.no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + multivectorA.e1_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_ni;
	this->e1 = multivectorA.ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_ni + multivectorA.e1_e2_ni * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.e2_ni + multivectorA.e1_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_e2;
	this->e2 = multivectorA.e2_no_ni * bivectorB.no_ni + multivectorA.ni * bivectorB.e2_no + multivectorA.no * bivectorB.e2_ni + multivectorA.e1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_ni;
	this->no = (-1.0) * multivectorA.e2_no_ni * bivectorB.e2_no + multivectorA.no * bivectorB.no_ni + multivectorA.e1 * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_no_ni * bivectorB.e1_no + multivectorA.e2 * bivectorB.e2_no;
	this->ni = multivectorA.e2_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.ni * bivectorB.no_ni + multivectorA.e1 * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_e2 + multivectorA.e1_no_ni * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_ni;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2 + multivectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_no = multivectorA._1 * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e2_no;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni + multivectorA.e1_e2_no_ni * bivectorB.e2_ni;
	this->e2_no = multivectorA._1 * bivectorB.e2_no + multivectorA.e1_e2_no_ni * bivectorB.e1_no;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_ni;
	this->no_ni = multivectorA._1 * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_e2;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA.e2_no_ni * trivectorB.e2_no_ni + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_e2_ni + multivectorA.e1_no_ni * trivectorB.e1_no_ni;
	this->e1 = multivectorA.e2_ni * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.no_ni * trivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = multivectorA.no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e2_ni;
	this->no = (-1.0) * multivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_no + multivectorA.e1_e2_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_no_ni;
	this->ni = multivectorA.e2_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e2_ni + multivectorA.e1_ni * trivectorB.e1_no_ni;
	this->e1_e2 = (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_ni;
	this->e1_no = (-1.0) * multivectorA.no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_no;
	this->e1_ni = multivectorA.ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_ni;
	this->e2_no = (-1.0) * multivectorA.no * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_e2_no;
	this->e2_ni = multivectorA.ni * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_e2_ni;
	this->no_ni = multivectorA.e1 * trivectorB.e1_no_ni + multivectorA.e2 * trivectorB.e2_no_ni;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = multivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * multivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = multivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2 = multivectorA.no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no = (-1.0) * multivectorA.e2_no * psuedoscalarB.e1_e2_no_ni;
	this->e1_ni = multivectorA.e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2_no = multivectorA.e1_no * psuedoscalarB.e1_e2_no_ni;
	this->e2_ni = (-1.0) * multivectorA.e1_ni * psuedoscalarB.e1_e2_no_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no = multivectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * multivectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = multivectorA.e1 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::InnerProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e2_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.ni * multivectorB.no + (-1.0) * multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB.no_ni + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1_no_ni + multivectorA.e2 * multivectorB.e2;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e2_ni * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + multivectorA.ni * multivectorB.e1_no + multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1_no_ni + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + multivectorA.e1_e2_ni * multivectorB.e2_no + multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2;
	this->e2 = multivectorA._1 * multivectorB.e2 + (-1.0) * multivectorA.e2_ni * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB.no_ni + multivectorA.ni * multivectorB.e2_no + multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2_no_ni + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e2 * multivectorB._1;
	this->no = multivectorA._1 * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_no * multivectorB.e2 + (-1.0) * multivectorA.e2_no_ni * multivectorB.e2_no + multivectorA.no * multivectorB._1 + multivectorA.no * multivectorB.no_ni + (-1.0) * multivectorA.no_ni * multivectorB.no + multivectorA.e1 * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1 + (-1.0) * multivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_no + multivectorA.e2 * multivectorB.e2_no;
	this->ni = multivectorA._1 * multivectorB.ni + multivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2 + multivectorA.e2_no_ni * multivectorB.e2_ni + multivectorA.ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.no_ni + multivectorA.no_ni * multivectorB.ni + multivectorA.e1 * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1 + multivectorA.e1_ni * multivectorB.e1_no_ni + multivectorA.e1_no_ni * multivectorB.e1_ni + multivectorA.e2 * multivectorB.e2_ni;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e2_no + multivectorA.e1_no * multivectorB._1 + (-1.0) * multivectorA.e1_no_ni * multivectorB.no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + multivectorA.e2_ni * multivectorB.e1_e2_no_ni + multivectorA.ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2 + multivectorA.e1_e2_no_ni * multivectorB.e2_ni + multivectorA.e1_ni * multivectorB._1 + multivectorA.e1_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_ni;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e2_no * multivectorB._1 + (-1.0) * multivectorA.e2_no_ni * multivectorB.no + (-1.0) * multivectorA.no * multivectorB.e2_no_ni + multivectorA.e1 * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1 + multivectorA.e1_e2_no_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_e2_no_ni;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e2_ni * multivectorB._1 + multivectorA.e2_no_ni * multivectorB.ni + multivectorA.ni * multivectorB.e2_no_ni + multivectorA.e1 * multivectorB.e1_e2_ni + multivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no_ni;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + multivectorA.e2_no_ni * multivectorB.e2 + multivectorA.no_ni * multivectorB._1 + multivectorA.e1 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2 + multivectorA.e1_no_ni * multivectorB.e1 + multivectorA.e2 * multivectorB.e2_no_ni;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + multivectorA.no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no * multivectorB._1 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_ni * multivectorB._1 + multivectorA.e1_e2_no_ni * multivectorB.ni;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e2 + multivectorA.e1_no_ni * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no_ni;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + multivectorA.e2_no_ni * multivectorB._1 + multivectorA.e1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB._1;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::OuterProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
}

void Multivector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e1_no = vectorA.e1 * vectorB.no + (-1.0) * vectorA.no * vectorB.e1;
	this->e1_ni = vectorA.e1 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e1;
	this->e2_no = vectorA.e2 * vectorB.no + (-1.0) * vectorA.no * vectorB.e2;
	this->e2_ni = vectorA.e2 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e2;
	this->no_ni = (-1.0) * vectorA.ni * vectorB.no + vectorA.no * vectorB.ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
}

void Multivector::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * multivectorB._1;
	this->e2 = vectorA.e2 * multivectorB._1;
	this->no = vectorA.no * multivectorB._1;
	this->ni = vectorA.ni * multivectorB._1;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1;
	this->e1_no = vectorA.e1 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e1;
	this->e1_ni = vectorA.e1 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e1;
	this->e2_no = vectorA.e2 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e2;
	this->e2_ni = vectorA.e2 * multivectorB.ni + (-1.0) * vectorA.ni * multivectorB.e2;
	this->no_ni = (-1.0) * vectorA.ni * multivectorB.no + vectorA.no * multivectorB.ni;
	this->e1_e2_no = vectorA.e1 * multivectorB.e2_no + (-1.0) * vectorA.e2 * multivectorB.e1_no + vectorA.no * multivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * multivectorB.e2_ni + (-1.0) * vectorA.e2 * multivectorB.e1_ni + vectorA.ni * multivectorB.e1_e2;
	this->e1_no_ni = vectorA.e1 * multivectorB.no_ni + vectorA.ni * multivectorB.e1_no + (-1.0) * vectorA.no * multivectorB.e1_ni;
	this->e2_no_ni = vectorA.e2 * multivectorB.no_ni + vectorA.ni * multivectorB.e2_no + (-1.0) * vectorA.no * multivectorB.e2_ni;
	this->e1_e2_no_ni = vectorA.e1 * multivectorB.e2_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + vectorA.no * multivectorB.e1_e2_ni;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1;
	this->e1_no = bivectorA.e1_no * multivectorB._1;
	this->e1_ni = bivectorA.e1_ni * multivectorB._1;
	this->e2_no = bivectorA.e2_no * multivectorB._1;
	this->e2_ni = bivectorA.e2_ni * multivectorB._1;
	this->no_ni = bivectorA.no_ni * multivectorB._1;
	this->e1_e2_no = bivectorA.e1_e2 * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.e2 + bivectorA.e2_no * multivectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * multivectorB.ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2 + bivectorA.e2_ni * multivectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * multivectorB.no + bivectorA.e1_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e1;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * multivectorB.no + bivectorA.e2_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * multivectorB.no_ni + bivectorA.e1_ni * multivectorB.e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + bivectorA.e2_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e2;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no * multivectorB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * multivectorB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * multivectorB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * multivectorB._1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = multivectorA._1 * vectorB.e1;
	this->e2 = multivectorA._1 * vectorB.e2;
	this->no = multivectorA._1 * vectorB.no;
	this->ni = multivectorA._1 * vectorB.ni;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + (-1.0) * multivectorA.e2 * vectorB.e1;
	this->e1_no = (-1.0) * multivectorA.no * vectorB.e1 + multivectorA.e1 * vectorB.no;
	this->e1_ni = (-1.0) * multivectorA.ni * vectorB.e1 + multivectorA.e1 * vectorB.ni;
	this->e2_no = (-1.0) * multivectorA.no * vectorB.e2 + multivectorA.e2 * vectorB.no;
	this->e2_ni = (-1.0) * multivectorA.ni * vectorB.e2 + multivectorA.e2 * vectorB.ni;
	this->no_ni = (-1.0) * multivectorA.ni * vectorB.no + multivectorA.no * vectorB.ni;
	this->e1_e2_no = multivectorA.e2_no * vectorB.e1 + multivectorA.e1_e2 * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e2;
	this->e1_e2_ni = multivectorA.e2_ni * vectorB.e1 + multivectorA.e1_e2 * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e2;
	this->e1_no_ni = multivectorA.no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_ni * vectorB.no + multivectorA.e1_no * vectorB.ni;
	this->e2_no_ni = (-1.0) * multivectorA.e2_ni * vectorB.no + multivectorA.e2_no * vectorB.ni + multivectorA.no_ni * vectorB.e2;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e2_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.ni + multivectorA.e1_no_ni * vectorB.e2;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2;
	this->e1_no = multivectorA._1 * bivectorB.e1_no;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni;
	this->e2_no = multivectorA._1 * bivectorB.e2_no;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni;
	this->no_ni = multivectorA._1 * bivectorB.no_ni;
	this->e1_e2_no = multivectorA.no * bivectorB.e1_e2 + multivectorA.e1 * bivectorB.e2_no + (-1.0) * multivectorA.e2 * bivectorB.e1_no;
	this->e1_e2_ni = multivectorA.ni * bivectorB.e1_e2 + multivectorA.e1 * bivectorB.e2_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_ni;
	this->e1_no_ni = multivectorA.ni * bivectorB.e1_no + (-1.0) * multivectorA.no * bivectorB.e1_ni + multivectorA.e1 * bivectorB.no_ni;
	this->e2_no_ni = multivectorA.ni * bivectorB.e2_no + (-1.0) * multivectorA.no * bivectorB.e2_ni + multivectorA.e2 * bivectorB.no_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + multivectorA.e2_no * bivectorB.e1_ni + multivectorA.no_ni * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_no * bivectorB.e2_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_no_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::OuterProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e1 * multivectorB._1;
	this->e2 = multivectorA._1 * multivectorB.e2 + multivectorA.e2 * multivectorB._1;
	this->no = multivectorA._1 * multivectorB.no + multivectorA.no * multivectorB._1;
	this->ni = multivectorA._1 * multivectorB.ni + multivectorA.ni * multivectorB._1;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + (-1.0) * multivectorA.no * multivectorB.e1 + multivectorA.e1 * multivectorB.no + multivectorA.e1_no * multivectorB._1;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + (-1.0) * multivectorA.ni * multivectorB.e1 + multivectorA.e1 * multivectorB.ni + multivectorA.e1_ni * multivectorB._1;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e2_no * multivectorB._1 + (-1.0) * multivectorA.no * multivectorB.e2 + multivectorA.e2 * multivectorB.no;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e2_ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.e2 + multivectorA.e2 * multivectorB.ni;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + (-1.0) * multivectorA.ni * multivectorB.no + multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB._1;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1 + multivectorA.no * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2_no + multivectorA.e1_e2 * multivectorB.no + multivectorA.e1_e2_no * multivectorB._1 + (-1.0) * multivectorA.e1_no * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + multivectorA.e2_ni * multivectorB.e1 + multivectorA.ni * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2_ni + multivectorA.e1_e2 * multivectorB.ni + multivectorA.e1_e2_ni * multivectorB._1 + (-1.0) * multivectorA.e1_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_ni;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + multivectorA.ni * multivectorB.e1_no + (-1.0) * multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1 + multivectorA.e1 * multivectorB.no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB._1;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.no + multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB._1 + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2 + multivectorA.e2 * multivectorB.no_ni;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2_no_ni + multivectorA.e1_e2 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB._1 + multivectorA.e1_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no_ni;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::GeometricProduct(const Scalar& scalarA, const Multivector& multivectorB)
{
	this->_1 = scalarA._1 * multivectorB._1;
	this->e1 = scalarA._1 * multivectorB.e1;
	this->e2 = scalarA._1 * multivectorB.e2;
	this->no = scalarA._1 * multivectorB.no;
	this->ni = scalarA._1 * multivectorB.ni;
	this->e1_e2 = scalarA._1 * multivectorB.e1_e2;
	this->e1_no = scalarA._1 * multivectorB.e1_no;
	this->e1_ni = scalarA._1 * multivectorB.e1_ni;
	this->e2_no = scalarA._1 * multivectorB.e2_no;
	this->e2_ni = scalarA._1 * multivectorB.e2_ni;
	this->no_ni = scalarA._1 * multivectorB.no_ni;
	this->e1_e2_no = scalarA._1 * multivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * multivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * multivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * multivectorB.e2_no_ni;
	this->e1_e2_no_ni = scalarA._1 * multivectorB.e1_e2_no_ni;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e1_no = vectorA.e1 * vectorB.no + (-1.0) * vectorA.no * vectorB.e1;
	this->e1_ni = vectorA.e1 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e1;
	this->e2_no = vectorA.e2 * vectorB.no + (-1.0) * vectorA.no * vectorB.e2;
	this->e2_ni = vectorA.e2 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e2;
	this->no_ni = (-1.0) * vectorA.ni * vectorB.no + vectorA.no * vectorB.ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * vectorA.ni * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_ni;
	this->e1_no = (-1.0) * vectorA.e2 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * trivectorB.e1_e2_ni + vectorA.ni * trivectorB.e1_no_ni;
	this->e2_no = vectorA.e1 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * trivectorB.e1_e2_ni + vectorA.ni * trivectorB.e2_no_ni;
	this->no_ni = vectorA.e1 * trivectorB.e1_no_ni + vectorA.e2 * trivectorB.e2_no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
}

void Multivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = vectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * vectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Vector& vectorA, const Multivector& multivectorB)
{
	this->_1 = vectorA.e1 * multivectorB.e1 + vectorA.e2 * multivectorB.e2 + (-1.0) * vectorA.ni * multivectorB.no + (-1.0) * vectorA.no * multivectorB.ni;
	this->e1 = vectorA.e1 * multivectorB._1 + (-1.0) * vectorA.e2 * multivectorB.e1_e2 + vectorA.ni * multivectorB.e1_no + vectorA.no * multivectorB.e1_ni;
	this->e2 = vectorA.e1 * multivectorB.e1_e2 + vectorA.e2 * multivectorB._1 + vectorA.ni * multivectorB.e2_no + vectorA.no * multivectorB.e2_ni;
	this->no = vectorA.e1 * multivectorB.e1_no + vectorA.e2 * multivectorB.e2_no + vectorA.no * multivectorB._1 + vectorA.no * multivectorB.no_ni;
	this->ni = vectorA.e1 * multivectorB.e1_ni + vectorA.e2 * multivectorB.e2_ni + vectorA.ni * multivectorB._1 + (-1.0) * vectorA.ni * multivectorB.no_ni;
	this->e1_e2 = vectorA.e1 * multivectorB.e2 + (-1.0) * vectorA.e2 * multivectorB.e1 + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1_e2_ni;
	this->e1_no = vectorA.e1 * multivectorB.no + (-1.0) * vectorA.e2 * multivectorB.e1_e2_no + (-1.0) * vectorA.no * multivectorB.e1 + (-1.0) * vectorA.no * multivectorB.e1_no_ni;
	this->e1_ni = vectorA.e1 * multivectorB.ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_ni + (-1.0) * vectorA.ni * multivectorB.e1 + vectorA.ni * multivectorB.e1_no_ni;
	this->e2_no = vectorA.e1 * multivectorB.e1_e2_no + vectorA.e2 * multivectorB.no + (-1.0) * vectorA.no * multivectorB.e2_no_ni + (-1.0) * vectorA.no * multivectorB.e2;
	this->e2_ni = vectorA.e1 * multivectorB.e1_e2_ni + vectorA.e2 * multivectorB.ni + vectorA.ni * multivectorB.e2_no_ni + (-1.0) * vectorA.ni * multivectorB.e2;
	this->no_ni = vectorA.e1 * multivectorB.e1_no_ni + vectorA.e2 * multivectorB.e2_no_ni + (-1.0) * vectorA.ni * multivectorB.no + vectorA.no * multivectorB.ni;
	this->e1_e2_no = vectorA.e1 * multivectorB.e2_no + (-1.0) * vectorA.e2 * multivectorB.e1_no + vectorA.no * multivectorB.e1_e2 + vectorA.no * multivectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e1 * multivectorB.e2_ni + (-1.0) * vectorA.e2 * multivectorB.e1_ni + vectorA.ni * multivectorB.e1_e2 + (-1.0) * vectorA.ni * multivectorB.e1_e2_no_ni;
	this->e1_no_ni = vectorA.e1 * multivectorB.no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_e2_no_ni + vectorA.ni * multivectorB.e1_no + (-1.0) * vectorA.no * multivectorB.e1_ni;
	this->e2_no_ni = vectorA.e1 * multivectorB.e1_e2_no_ni + vectorA.e2 * multivectorB.no_ni + vectorA.ni * multivectorB.e2_no + (-1.0) * vectorA.no * multivectorB.e2_ni;
	this->e1_e2_no_ni = vectorA.e1 * multivectorB.e2_no_ni + (-1.0) * vectorA.e2 * multivectorB.e1_no_ni + (-1.0) * vectorA.ni * multivectorB.e1_e2_no + vectorA.no * multivectorB.e1_e2_ni;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + bivectorA.no_ni * vectorB.ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.e1_ni * bivectorB.e2_no + bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + (-1.0) * bivectorA.e2_no * bivectorB.e1_ni;
	this->e1_no = bivectorA.e1_e2 * bivectorB.e2_no + bivectorA.e1_no * bivectorB.no_ni + (-1.0) * bivectorA.e2_no * bivectorB.e1_e2 + (-1.0) * bivectorA.no_ni * bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_e2 * bivectorB.e2_ni + (-1.0) * bivectorA.e1_ni * bivectorB.no_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_e2 + bivectorA.no_ni * bivectorB.e1_ni;
	this->e2_no = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_e2 + bivectorA.e2_no * bivectorB.no_ni + (-1.0) * bivectorA.no_ni * bivectorB.e2_no;
	this->e2_ni = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_ni + bivectorA.e1_ni * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_ni * bivectorB.no_ni + bivectorA.no_ni * bivectorB.e2_ni;
	this->no_ni = bivectorA.e1_ni * bivectorB.e1_no + (-1.0) * bivectorA.e1_no * bivectorB.e1_ni + bivectorA.e2_ni * bivectorB.e2_no + (-1.0) * bivectorA.e2_no * bivectorB.e2_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e2_no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = (-1.0) * bivectorA.e1_no * trivectorB.e2_no_ni + bivectorA.e2_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.no_ni * trivectorB.e1_e2_no;
	this->e1_e2_ni = bivectorA.e1_ni * trivectorB.e2_no_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e1_no_ni + bivectorA.no_ni * trivectorB.e1_e2_ni;
	this->e1_no_ni = bivectorA.e1_e2 * trivectorB.e2_no_ni + bivectorA.e2_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e2_no * trivectorB.e1_e2_ni;
	this->e2_no_ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + bivectorA.e1_no * trivectorB.e1_e2_ni;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = bivectorA.no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no = (-1.0) * bivectorA.e2_no * psuedoscalarB.e1_e2_no_ni;
	this->e1_ni = bivectorA.e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2_no = bivectorA.e1_no * psuedoscalarB.e1_e2_no_ni;
	this->e2_ni = (-1.0) * bivectorA.e1_ni * psuedoscalarB.e1_e2_no_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Bivector& bivectorA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2 + bivectorA.e1_ni * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_ni + bivectorA.e2_ni * multivectorB.e2_no + bivectorA.e2_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB.no_ni;
	this->e1 = bivectorA.e1_e2 * multivectorB.e2 + (-1.0) * bivectorA.e1_ni * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.ni + bivectorA.e2_ni * multivectorB.e1_e2_no + bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * multivectorB.e1 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.no + (-1.0) * bivectorA.e2_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e2_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e1 + (-1.0) * bivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.e2_no * multivectorB.e2 + (-1.0) * bivectorA.no_ni * multivectorB.no;
	this->ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1 + bivectorA.e1_ni * multivectorB.e1_no_ni + bivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e2 + bivectorA.no_ni * multivectorB.ni;
	this->e1_e2 = bivectorA.e1_e2 * multivectorB._1 + bivectorA.e1_ni * multivectorB.e2_no + bivectorA.e1_no * multivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e2_no_ni;
	this->e1_no = bivectorA.e1_e2 * multivectorB.e2_no + bivectorA.e1_no * multivectorB._1 + bivectorA.e1_no * multivectorB.no_ni + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2 + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_no;
	this->e1_ni = bivectorA.e1_e2 * multivectorB.e2_ni + bivectorA.e1_ni * multivectorB._1 + (-1.0) * bivectorA.e1_ni * multivectorB.no_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_e2 + bivectorA.e2_ni * multivectorB.e1_e2_no_ni + bivectorA.no_ni * multivectorB.e1_ni;
	this->e2_no = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_no + bivectorA.e1_no * multivectorB.e1_e2 + bivectorA.e1_no * multivectorB.e1_e2_no_ni + bivectorA.e2_no * multivectorB._1 + bivectorA.e2_no * multivectorB.no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e2_no;
	this->e2_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_ni + bivectorA.e1_ni * multivectorB.e1_e2 + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no_ni + bivectorA.e2_ni * multivectorB._1 + (-1.0) * bivectorA.e2_ni * multivectorB.no_ni + bivectorA.no_ni * multivectorB.e2_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_e2_no_ni + bivectorA.e1_ni * multivectorB.e1_no + (-1.0) * bivectorA.e1_no * multivectorB.e1_ni + bivectorA.e2_ni * multivectorB.e2_no + (-1.0) * bivectorA.e2_no * multivectorB.e2_ni + bivectorA.no_ni * multivectorB._1;
	this->e1_e2_no = bivectorA.e1_e2 * multivectorB.no + (-1.0) * bivectorA.e1_no * multivectorB.e2_no_ni + (-1.0) * bivectorA.e1_no * multivectorB.e2 + bivectorA.e2_no * multivectorB.e1 + bivectorA.e2_no * multivectorB.e1_no_ni + (-1.0) * bivectorA.no_ni * multivectorB.e1_e2_no;
	this->e1_e2_ni = bivectorA.e1_e2 * multivectorB.ni + bivectorA.e1_ni * multivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e2 + bivectorA.e2_ni * multivectorB.e1 + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no_ni + bivectorA.no_ni * multivectorB.e1_e2_ni;
	this->e1_no_ni = bivectorA.e1_e2 * multivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.no + bivectorA.e1_no * multivectorB.ni + bivectorA.e2_ni * multivectorB.e1_e2_no + (-1.0) * bivectorA.e2_no * multivectorB.e1_e2_ni + bivectorA.no_ni * multivectorB.e1;
	this->e2_no_ni = (-1.0) * bivectorA.e1_e2 * multivectorB.e1_no_ni + (-1.0) * bivectorA.e1_ni * multivectorB.e1_e2_no + bivectorA.e1_no * multivectorB.e1_e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.no + bivectorA.e2_no * multivectorB.ni + bivectorA.no_ni * multivectorB.e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * multivectorB.no_ni + bivectorA.e1_ni * multivectorB.e2_no + (-1.0) * bivectorA.e1_no * multivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * multivectorB.e1_no + bivectorA.e2_no * multivectorB.e1_ni + bivectorA.no_ni * multivectorB.e1_e2;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * vectorB.e2 + (-1.0) * trivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.e2 + trivectorA.e1_no_ni * vectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * vectorB.e1 + (-1.0) * trivectorA.e2_no_ni * vectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.e2;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + trivectorA.e1_no_ni * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.e2_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = trivectorA.e1_e2_no * bivectorB.no_ni + (-1.0) * trivectorA.e1_no_ni * bivectorB.e2_no + trivectorA.e2_no_ni * bivectorB.e1_no;
	this->e1_e2_ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.no_ni + trivectorA.e1_no_ni * bivectorB.e2_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_ni;
	this->e1_no_ni = trivectorA.e1_e2_ni * bivectorB.e2_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e2_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_e2;
	this->e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e1_no_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = trivectorA.e1_no_ni * trivectorB.e2_no_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_no_ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * trivectorB.e2_no_ni + trivectorA.e2_no_ni * trivectorB.e1_e2_no;
	this->e1_ni = trivectorA.e1_e2_ni * trivectorB.e2_no_ni + (-1.0) * trivectorA.e2_no_ni * trivectorB.e1_e2_ni;
	this->e2_no = trivectorA.e1_e2_no * trivectorB.e1_no_ni + (-1.0) * trivectorA.e1_no_ni * trivectorB.e1_e2_no;
	this->e2_ni = (-1.0) * trivectorA.e1_e2_ni * trivectorB.e1_no_ni + trivectorA.e1_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = trivectorA.e1_e2_ni * trivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e2_no * trivectorB.e1_e2_ni;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
	this->e1 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const Trivector& trivectorA, const Multivector& multivectorB)
{
	this->_1 = trivectorA.e1_e2_ni * multivectorB.e1_e2_no + trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_no_ni * multivectorB.e1_no_ni + trivectorA.e2_no_ni * multivectorB.e2_no_ni;
	this->e1 = trivectorA.e1_e2_ni * multivectorB.e2_no + trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e2 = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + trivectorA.e2_no_ni * multivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_no + (-1.0) * trivectorA.e2_no_ni * multivectorB.e2_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_e2 + trivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + trivectorA.e1_no_ni * multivectorB.e1_ni + trivectorA.e2_no_ni * multivectorB.e2_ni;
	this->e1_e2 = (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + (-1.0) * trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e2_no_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_no_ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * trivectorA.e1_no_ni * multivectorB.no + trivectorA.e2_no_ni * multivectorB.e1_e2_no;
	this->e1_ni = trivectorA.e1_e2_ni * multivectorB.e2_no_ni + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e2 + trivectorA.e1_no_ni * multivectorB.ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2_ni;
	this->e2_no = trivectorA.e1_e2_no * multivectorB.e1 + trivectorA.e1_e2_no * multivectorB.e1_no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e2_no_ni * multivectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no_ni + trivectorA.e1_no_ni * multivectorB.e1_e2_ni + trivectorA.e2_no_ni * multivectorB.ni;
	this->no_ni = trivectorA.e1_e2_ni * multivectorB.e1_e2_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e1_e2_ni + trivectorA.e1_no_ni * multivectorB.e1 + trivectorA.e2_no_ni * multivectorB.e2;
	this->e1_e2_no = trivectorA.e1_e2_no * multivectorB._1 + trivectorA.e1_e2_no * multivectorB.no_ni + (-1.0) * trivectorA.e1_no_ni * multivectorB.e2_no + trivectorA.e2_no_ni * multivectorB.e1_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni * multivectorB._1 + (-1.0) * trivectorA.e1_e2_ni * multivectorB.no_ni + trivectorA.e1_no_ni * multivectorB.e2_ni + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_ni;
	this->e1_no_ni = trivectorA.e1_e2_ni * multivectorB.e2_no + (-1.0) * trivectorA.e1_e2_no * multivectorB.e2_ni + trivectorA.e1_no_ni * multivectorB._1 + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1_e2;
	this->e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.e1_no + trivectorA.e1_e2_no * multivectorB.e1_ni + trivectorA.e1_no_ni * multivectorB.e1_e2 + trivectorA.e2_no_ni * multivectorB._1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * multivectorB.no + trivectorA.e1_e2_no * multivectorB.ni + trivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * trivectorA.e2_no_ni * multivectorB.e1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * vectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.e1;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = psuedoscalarA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e2_no;
	this->e1_ni = psuedoscalarA.e1_e2_no_ni * bivectorB.e2_ni;
	this->e2_no = psuedoscalarA.e1_e2_no_ni * bivectorB.e1_no;
	this->e2_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e1_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * bivectorB.e1_e2;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
	this->e1 = psuedoscalarA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_ni;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
	this->e1_e2 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->no_ni = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e1_e2_no_ni = 0.0;
}

void Multivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_no_ni;
	this->e1 = psuedoscalarA.e1_e2_no_ni * multivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2_ni;
	this->e1_e2 = psuedoscalarA.e1_e2_no_ni * multivectorB.no_ni;
	this->e1_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e2_no;
	this->e1_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.e2_ni;
	this->e2_no = psuedoscalarA.e1_e2_no_ni * multivectorB.e1_no;
	this->e2_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1_e2;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * multivectorB.e1;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Scalar& scalarB)
{
	this->_1 = multivectorA._1 * scalarB._1;
	this->e1 = multivectorA.e1 * scalarB._1;
	this->e2 = multivectorA.e2 * scalarB._1;
	this->no = multivectorA.no * scalarB._1;
	this->ni = multivectorA.ni * scalarB._1;
	this->e1_e2 = multivectorA.e1_e2 * scalarB._1;
	this->e1_no = multivectorA.e1_no * scalarB._1;
	this->e1_ni = multivectorA.e1_ni * scalarB._1;
	this->e2_no = multivectorA.e2_no * scalarB._1;
	this->e2_ni = multivectorA.e2_ni * scalarB._1;
	this->no_ni = multivectorA.no_ni * scalarB._1;
	this->e1_e2_no = multivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = multivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = multivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = multivectorA.e2_no_ni * scalarB._1;
	this->e1_e2_no_ni = multivectorA.e1_e2_no_ni * scalarB._1;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Vector& vectorB)
{
	this->_1 = (-1.0) * multivectorA.ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.ni + multivectorA.e1 * vectorB.e1 + multivectorA.e2 * vectorB.e2;
	this->e1 = multivectorA._1 * vectorB.e1 + multivectorA.e1_e2 * vectorB.e2 + (-1.0) * multivectorA.e1_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.ni;
	this->e2 = multivectorA._1 * vectorB.e2 + (-1.0) * multivectorA.e2_ni * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.ni + (-1.0) * multivectorA.e1_e2 * vectorB.e1;
	this->no = multivectorA._1 * vectorB.no + (-1.0) * multivectorA.e2_no * vectorB.e2 + (-1.0) * multivectorA.no_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e1;
	this->ni = multivectorA._1 * vectorB.ni + (-1.0) * multivectorA.e2_ni * vectorB.e2 + multivectorA.no_ni * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e1;
	this->e1_e2 = multivectorA.e1 * vectorB.e2 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.ni + (-1.0) * multivectorA.e2 * vectorB.e1;
	this->e1_no = (-1.0) * multivectorA.no * vectorB.e1 + multivectorA.e1 * vectorB.no + (-1.0) * multivectorA.e1_e2_no * vectorB.e2 + (-1.0) * multivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * multivectorA.ni * vectorB.e1 + multivectorA.e1 * vectorB.ni + (-1.0) * multivectorA.e1_e2_ni * vectorB.e2 + multivectorA.e1_no_ni * vectorB.ni;
	this->e2_no = (-1.0) * multivectorA.e2_no_ni * vectorB.no + (-1.0) * multivectorA.no * vectorB.e2 + multivectorA.e1_e2_no * vectorB.e1 + multivectorA.e2 * vectorB.no;
	this->e2_ni = multivectorA.e2_no_ni * vectorB.ni + (-1.0) * multivectorA.ni * vectorB.e2 + multivectorA.e1_e2_ni * vectorB.e1 + multivectorA.e2 * vectorB.ni;
	this->no_ni = multivectorA.e2_no_ni * vectorB.e2 + (-1.0) * multivectorA.ni * vectorB.no + multivectorA.no * vectorB.ni + multivectorA.e1_no_ni * vectorB.e1;
	this->e1_e2_no = multivectorA.e2_no * vectorB.e1 + multivectorA.e1_e2 * vectorB.no + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.no + (-1.0) * multivectorA.e1_no * vectorB.e2;
	this->e1_e2_ni = multivectorA.e2_ni * vectorB.e1 + multivectorA.e1_e2 * vectorB.ni + multivectorA.e1_e2_no_ni * vectorB.ni + (-1.0) * multivectorA.e1_ni * vectorB.e2;
	this->e1_no_ni = multivectorA.no_ni * vectorB.e1 + multivectorA.e1_e2_no_ni * vectorB.e2 + (-1.0) * multivectorA.e1_ni * vectorB.no + multivectorA.e1_no * vectorB.ni;
	this->e2_no_ni = (-1.0) * multivectorA.e2_ni * vectorB.no + multivectorA.e2_no * vectorB.ni + multivectorA.no_ni * vectorB.e2 + (-1.0) * multivectorA.e1_e2_no_ni * vectorB.e1;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e2_no_ni * vectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * vectorB.no + multivectorA.e1_e2_no * vectorB.ni + multivectorA.e1_no_ni * vectorB.e2;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Bivector& bivectorB)
{
	this->_1 = multivectorA.e2_ni * bivectorB.e2_no + multivectorA.e2_no * bivectorB.e2_ni + multivectorA.no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_e2 + multivectorA.e1_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_ni;
	this->e1 = multivectorA.ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_ni + multivectorA.e1_e2_ni * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.e2_ni + multivectorA.e1_no_ni * bivectorB.no_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_e2;
	this->e2 = multivectorA.e2_no_ni * bivectorB.no_ni + multivectorA.ni * bivectorB.e2_no + multivectorA.no * bivectorB.e2_ni + multivectorA.e1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_ni;
	this->no = (-1.0) * multivectorA.e2_no_ni * bivectorB.e2_no + multivectorA.no * bivectorB.no_ni + multivectorA.e1 * bivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * multivectorA.e1_no_ni * bivectorB.e1_no + multivectorA.e2 * bivectorB.e2_no;
	this->ni = multivectorA.e2_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.ni * bivectorB.no_ni + multivectorA.e1 * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_e2 + multivectorA.e1_no_ni * bivectorB.e1_ni + multivectorA.e2 * bivectorB.e2_ni;
	this->e1_e2 = multivectorA._1 * bivectorB.e1_e2 + (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + (-1.0) * multivectorA.e2_no * bivectorB.e1_ni + multivectorA.e1_e2_no_ni * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e2_no + multivectorA.e1_no * bivectorB.e2_ni;
	this->e1_no = multivectorA._1 * bivectorB.e1_no + (-1.0) * multivectorA.e2_no * bivectorB.e1_e2 + (-1.0) * multivectorA.no_ni * bivectorB.e1_no + multivectorA.e1_e2 * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e2_no + multivectorA.e1_no * bivectorB.no_ni;
	this->e1_ni = multivectorA._1 * bivectorB.e1_ni + (-1.0) * multivectorA.e2_ni * bivectorB.e1_e2 + multivectorA.no_ni * bivectorB.e1_ni + multivectorA.e1_e2 * bivectorB.e2_ni + multivectorA.e1_e2_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.e1_ni * bivectorB.no_ni;
	this->e2_no = multivectorA._1 * bivectorB.e2_no + multivectorA.e2_no * bivectorB.no_ni + (-1.0) * multivectorA.no_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_no + multivectorA.e1_e2_no_ni * bivectorB.e1_no + multivectorA.e1_no * bivectorB.e1_e2;
	this->e2_ni = multivectorA._1 * bivectorB.e2_ni + (-1.0) * multivectorA.e2_ni * bivectorB.no_ni + multivectorA.no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2 * bivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_ni + multivectorA.e1_ni * bivectorB.e1_e2;
	this->no_ni = multivectorA._1 * bivectorB.no_ni + multivectorA.e2_ni * bivectorB.e2_no + (-1.0) * multivectorA.e2_no * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * bivectorB.e1_e2 + multivectorA.e1_ni * bivectorB.e1_no + (-1.0) * multivectorA.e1_no * bivectorB.e1_ni;
	this->e1_e2_no = multivectorA.e2_no_ni * bivectorB.e1_no + multivectorA.no * bivectorB.e1_e2 + multivectorA.e1 * bivectorB.e2_no + multivectorA.e1_e2_no * bivectorB.no_ni + (-1.0) * multivectorA.e1_no_ni * bivectorB.e2_no + (-1.0) * multivectorA.e2 * bivectorB.e1_no;
	this->e1_e2_ni = (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_ni + multivectorA.ni * bivectorB.e1_e2 + multivectorA.e1 * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.no_ni + multivectorA.e1_no_ni * bivectorB.e2_ni + (-1.0) * multivectorA.e2 * bivectorB.e1_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2_no_ni * bivectorB.e1_e2 + multivectorA.ni * bivectorB.e1_no + (-1.0) * multivectorA.no * bivectorB.e1_ni + multivectorA.e1 * bivectorB.no_ni + multivectorA.e1_e2_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no * bivectorB.e2_ni;
	this->e2_no_ni = multivectorA.ni * bivectorB.e2_no + (-1.0) * multivectorA.no * bivectorB.e2_ni + (-1.0) * multivectorA.e1_e2_ni * bivectorB.e1_no + multivectorA.e1_e2_no * bivectorB.e1_ni + multivectorA.e1_no_ni * bivectorB.e1_e2 + multivectorA.e2 * bivectorB.no_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.e2_ni * bivectorB.e1_no + multivectorA.e2_no * bivectorB.e1_ni + multivectorA.no_ni * bivectorB.e1_e2 + multivectorA.e1_e2 * bivectorB.no_ni + multivectorA.e1_ni * bivectorB.e2_no + (-1.0) * multivectorA.e1_no * bivectorB.e2_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Trivector& trivectorB)
{
	this->_1 = multivectorA.e2_no_ni * trivectorB.e2_no_ni + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_e2_ni + multivectorA.e1_no_ni * trivectorB.e1_no_ni;
	this->e1 = multivectorA.e2_ni * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.no_ni * trivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = multivectorA.no_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_e2_ni;
	this->no = (-1.0) * multivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_no + multivectorA.e1_e2_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e1_no_ni;
	this->ni = multivectorA.e2_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * trivectorB.e1_e2_ni + multivectorA.e1_ni * trivectorB.e1_no_ni;
	this->e1_e2 = (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_no_ni + (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1_no_ni * trivectorB.e2_no_ni;
	this->e1_no = multivectorA.e2_no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_no * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_no;
	this->e1_ni = (-1.0) * multivectorA.e2_no_ni * trivectorB.e1_e2_ni + multivectorA.ni * trivectorB.e1_no_ni + multivectorA.e1_e2_ni * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_e2_ni;
	this->e2_no = (-1.0) * multivectorA.no * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_e2_no + multivectorA.e1_e2_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * trivectorB.e1_e2_no;
	this->e2_ni = multivectorA.ni * trivectorB.e2_no_ni + multivectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_ni * trivectorB.e1_no_ni + multivectorA.e1_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = multivectorA.e1 * trivectorB.e1_no_ni + multivectorA.e1_e2_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * trivectorB.e1_e2_ni + multivectorA.e2 * trivectorB.e2_no_ni;
	this->e1_e2_no = multivectorA._1 * trivectorB.e1_e2_no + multivectorA.e2_no * trivectorB.e1_no_ni + (-1.0) * multivectorA.no_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * trivectorB.e2_no_ni;
	this->e1_e2_ni = multivectorA._1 * trivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_ni * trivectorB.e1_no_ni + multivectorA.no_ni * trivectorB.e1_e2_ni + multivectorA.e1_ni * trivectorB.e2_no_ni;
	this->e1_no_ni = multivectorA._1 * trivectorB.e1_no_ni + multivectorA.e2_ni * trivectorB.e1_e2_no + (-1.0) * multivectorA.e2_no * trivectorB.e1_e2_ni + multivectorA.e1_e2 * trivectorB.e2_no_ni;
	this->e2_no_ni = multivectorA._1 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2 * trivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * trivectorB.e1_e2_no + multivectorA.e1_no * trivectorB.e1_e2_ni;
	this->e1_e2_no_ni = (-1.0) * multivectorA.ni * trivectorB.e1_e2_no + multivectorA.no * trivectorB.e1_e2_ni + multivectorA.e1 * trivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * trivectorB.e1_no_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * multivectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1 = (-1.0) * multivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = multivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * multivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = multivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2 = multivectorA.no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no = (-1.0) * multivectorA.e2_no * psuedoscalarB.e1_e2_no_ni;
	this->e1_ni = multivectorA.e2_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2_no = multivectorA.e1_no * psuedoscalarB.e1_e2_no_ni;
	this->e2_ni = (-1.0) * multivectorA.e1_ni * psuedoscalarB.e1_e2_no_ni;
	this->no_ni = (-1.0) * multivectorA.e1_e2 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no = multivectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * multivectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * multivectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = multivectorA.e1 * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_no_ni;
}

void Multivector::GeometricProduct(const Multivector& multivectorA, const Multivector& multivectorB)
{
	this->_1 = multivectorA._1 * multivectorB._1 + multivectorA.e2_ni * multivectorB.e2_no + multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.ni * multivectorB.no + (-1.0) * multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB.no_ni + multivectorA.e1 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1_no_ni + multivectorA.e2 * multivectorB.e2;
	this->e1 = multivectorA._1 * multivectorB.e1 + multivectorA.e2_ni * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_no_ni + multivectorA.ni * multivectorB.e1_no + multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1_no_ni + multivectorA.e1 * multivectorB._1 + multivectorA.e1_e2 * multivectorB.e2 + multivectorA.e1_e2_ni * multivectorB.e2_no + multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB.no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2;
	this->e2 = multivectorA._1 * multivectorB.e2 + (-1.0) * multivectorA.e2_ni * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB.no_ni + multivectorA.ni * multivectorB.e2_no + multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2_no_ni + multivectorA.e1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2 * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_no_ni + multivectorA.e2 * multivectorB._1;
	this->no = multivectorA._1 * multivectorB.no + (-1.0) * multivectorA.e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_no * multivectorB.e2 + (-1.0) * multivectorA.e2_no_ni * multivectorB.e2_no + multivectorA.no * multivectorB._1 + multivectorA.no * multivectorB.no_ni + (-1.0) * multivectorA.no_ni * multivectorB.no + multivectorA.e1 * multivectorB.e1_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e1 + (-1.0) * multivectorA.e1_no * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_no + multivectorA.e2 * multivectorB.e2_no;
	this->ni = multivectorA._1 * multivectorB.ni + multivectorA.e2_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e2 + multivectorA.e2_no_ni * multivectorB.e2_ni + multivectorA.ni * multivectorB._1 + (-1.0) * multivectorA.ni * multivectorB.no_ni + multivectorA.no_ni * multivectorB.ni + multivectorA.e1 * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_e2 + multivectorA.e1_e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e1 + multivectorA.e1_ni * multivectorB.e1_no_ni + multivectorA.e1_no_ni * multivectorB.e1_ni + multivectorA.e2 * multivectorB.e2_ni;
	this->e1_e2 = multivectorA._1 * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2_no_ni + multivectorA.e1 * multivectorB.e2 + multivectorA.e1_e2 * multivectorB._1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + (-1.0) * multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB.no_ni + multivectorA.e1_ni * multivectorB.e2_no + multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2 * multivectorB.e1;
	this->e1_no = multivectorA._1 * multivectorB.e1_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2 + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_no_ni + multivectorA.e2_no_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.no * multivectorB.e1 + (-1.0) * multivectorA.no * multivectorB.e1_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_no + multivectorA.e1 * multivectorB.no + multivectorA.e1_e2 * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2 + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e2_no + multivectorA.e1_no * multivectorB._1 + multivectorA.e1_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.no + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no;
	this->e1_ni = multivectorA._1 * multivectorB.e1_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_e2 + multivectorA.e2_ni * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2_ni + (-1.0) * multivectorA.ni * multivectorB.e1 + multivectorA.ni * multivectorB.e1_no_ni + multivectorA.no_ni * multivectorB.e1_ni + multivectorA.e1 * multivectorB.ni + multivectorA.e1_e2 * multivectorB.e2_ni + multivectorA.e1_e2_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e2 + multivectorA.e1_e2_no_ni * multivectorB.e2_ni + multivectorA.e1_ni * multivectorB._1 + (-1.0) * multivectorA.e1_ni * multivectorB.no_ni + multivectorA.e1_no_ni * multivectorB.ni + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_ni;
	this->e2_no = multivectorA._1 * multivectorB.e2_no + multivectorA.e2_no * multivectorB._1 + multivectorA.e2_no * multivectorB.no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.no + (-1.0) * multivectorA.no * multivectorB.e2_no_ni + (-1.0) * multivectorA.no * multivectorB.e2 + (-1.0) * multivectorA.no_ni * multivectorB.e2_no + multivectorA.e1 * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_no + multivectorA.e1_e2_no * multivectorB.e1 + multivectorA.e1_e2_no * multivectorB.e1_no_ni + multivectorA.e1_e2_no_ni * multivectorB.e1_no + multivectorA.e1_no * multivectorB.e1_e2 + multivectorA.e1_no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_no_ni * multivectorB.e1_e2_no + multivectorA.e2 * multivectorB.no;
	this->e2_ni = multivectorA._1 * multivectorB.e2_ni + multivectorA.e2_ni * multivectorB._1 + (-1.0) * multivectorA.e2_ni * multivectorB.no_ni + multivectorA.e2_no_ni * multivectorB.ni + multivectorA.ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.ni * multivectorB.e2 + multivectorA.no_ni * multivectorB.e2_ni + multivectorA.e1 * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_ni + multivectorA.e1_e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_ni + multivectorA.e1_ni * multivectorB.e1_e2 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no_ni + multivectorA.e1_no_ni * multivectorB.e1_e2_ni + multivectorA.e2 * multivectorB.ni;
	this->no_ni = multivectorA._1 * multivectorB.no_ni + multivectorA.e2_ni * multivectorB.e2_no + (-1.0) * multivectorA.e2_no * multivectorB.e2_ni + multivectorA.e2_no_ni * multivectorB.e2 + (-1.0) * multivectorA.ni * multivectorB.no + multivectorA.no * multivectorB.ni + multivectorA.no_ni * multivectorB._1 + multivectorA.e1 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_e2_no_ni + multivectorA.e1_e2_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1_e2 + multivectorA.e1_ni * multivectorB.e1_no + (-1.0) * multivectorA.e1_no * multivectorB.e1_ni + multivectorA.e1_no_ni * multivectorB.e1 + multivectorA.e2 * multivectorB.e2_no_ni;
	this->e1_e2_no = multivectorA._1 * multivectorB.e1_e2_no + multivectorA.e2_no * multivectorB.e1 + multivectorA.e2_no * multivectorB.e1_no_ni + multivectorA.e2_no_ni * multivectorB.e1_no + multivectorA.no * multivectorB.e1_e2 + multivectorA.no * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.no_ni * multivectorB.e1_e2_no + multivectorA.e1 * multivectorB.e2_no + multivectorA.e1_e2 * multivectorB.no + multivectorA.e1_e2_no * multivectorB._1 + multivectorA.e1_e2_no * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.no + (-1.0) * multivectorA.e1_no * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_no * multivectorB.e2 + (-1.0) * multivectorA.e1_no_ni * multivectorB.e2_no + (-1.0) * multivectorA.e2 * multivectorB.e1_no;
	this->e1_e2_ni = multivectorA._1 * multivectorB.e1_e2_ni + multivectorA.e2_ni * multivectorB.e1 + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_ni + multivectorA.ni * multivectorB.e1_e2 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no_ni + multivectorA.no_ni * multivectorB.e1_e2_ni + multivectorA.e1 * multivectorB.e2_ni + multivectorA.e1_e2 * multivectorB.ni + multivectorA.e1_e2_ni * multivectorB._1 + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no_ni + multivectorA.e1_e2_no_ni * multivectorB.ni + multivectorA.e1_ni * multivectorB.e2_no_ni + (-1.0) * multivectorA.e1_ni * multivectorB.e2 + multivectorA.e1_no_ni * multivectorB.e2_ni + (-1.0) * multivectorA.e2 * multivectorB.e1_ni;
	this->e1_no_ni = multivectorA._1 * multivectorB.e1_no_ni + multivectorA.e2_ni * multivectorB.e1_e2_no + (-1.0) * multivectorA.e2_no * multivectorB.e1_e2_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1_e2 + multivectorA.ni * multivectorB.e1_no + (-1.0) * multivectorA.no * multivectorB.e1_ni + multivectorA.no_ni * multivectorB.e1 + multivectorA.e1 * multivectorB.no_ni + multivectorA.e1_e2 * multivectorB.e2_no_ni + multivectorA.e1_e2_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_e2_no * multivectorB.e2_ni + multivectorA.e1_e2_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e1_ni * multivectorB.no + multivectorA.e1_no * multivectorB.ni + multivectorA.e1_no_ni * multivectorB._1 + (-1.0) * multivectorA.e2 * multivectorB.e1_e2_no_ni;
	this->e2_no_ni = multivectorA._1 * multivectorB.e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.no + multivectorA.e2_no * multivectorB.ni + multivectorA.e2_no_ni * multivectorB._1 + multivectorA.ni * multivectorB.e2_no + (-1.0) * multivectorA.no * multivectorB.e2_ni + multivectorA.no_ni * multivectorB.e2 + multivectorA.e1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e1_e2 * multivectorB.e1_no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.e1_no + multivectorA.e1_e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e1_e2_no_ni * multivectorB.e1 + (-1.0) * multivectorA.e1_ni * multivectorB.e1_e2_no + multivectorA.e1_no * multivectorB.e1_e2_ni + multivectorA.e1_no_ni * multivectorB.e1_e2 + multivectorA.e2 * multivectorB.no_ni;
	this->e1_e2_no_ni = multivectorA._1 * multivectorB.e1_e2_no_ni + (-1.0) * multivectorA.e2_ni * multivectorB.e1_no + multivectorA.e2_no * multivectorB.e1_ni + (-1.0) * multivectorA.e2_no_ni * multivectorB.e1 + (-1.0) * multivectorA.ni * multivectorB.e1_e2_no + multivectorA.no * multivectorB.e1_e2_ni + multivectorA.no_ni * multivectorB.e1_e2 + multivectorA.e1 * multivectorB.e2_no_ni + multivectorA.e1_e2 * multivectorB.no_ni + (-1.0) * multivectorA.e1_e2_ni * multivectorB.no + multivectorA.e1_e2_no * multivectorB.ni + multivectorA.e1_e2_no_ni * multivectorB._1 + multivectorA.e1_ni * multivectorB.e2_no + (-1.0) * multivectorA.e1_no * multivectorB.e2_ni + multivectorA.e1_no_ni * multivectorB.e2 + (-1.0) * multivectorA.e2 * multivectorB.e1_no_ni;
}

