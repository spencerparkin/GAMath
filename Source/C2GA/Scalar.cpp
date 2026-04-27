#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C2GA;

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

void Scalar::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
}

void Scalar::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.no_ni;
}

void Scalar::InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni;
}

void Scalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
}

void Scalar::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
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

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_no_ni * psuedoscalarB.e1_e2_no_ni;
}

