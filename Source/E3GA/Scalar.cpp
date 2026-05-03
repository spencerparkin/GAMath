// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E3GA;

Scalar::Scalar()
{
	this->_1 = 0.0;
}

Scalar::Scalar(double _1)
{
	this->_1 = _1;
}

Scalar::Scalar(const Scalar& scalar)
{
	this->_1 = scalar._1;
}

void Scalar::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
}

void Scalar::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
}

void Scalar::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
}

void Scalar::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3;
}

void Scalar::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + (-1.0) * bivectorA.e3_e1 * bivectorB.e3_e1;
}

void Scalar::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
}

void Scalar::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3 * psuedoscalarB.e1_e2_e3;
}

