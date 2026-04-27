#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C3GA;

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

void Scalar::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
}

void Scalar::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * bivectorB.e1_e3 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.e3_ni * bivectorB.e3_no + bivectorA.e3_no * bivectorB.e3_ni + bivectorA.no_ni * bivectorB.no_ni;
}

void Scalar::InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_e3_ni * trivectorB.e1_e3_no + trivectorA.e1_e3_no * trivectorB.e1_e3_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_e3_ni * trivectorB.e2_e3_no + trivectorA.e2_e3_no * trivectorB.e2_e3_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni + trivectorA.e3_no_ni * trivectorB.e3_no_ni;
}

void Scalar::InnerProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
}

void Scalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
}

void Scalar::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
}

void Scalar::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
}

void Scalar::OuterProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
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

void Scalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
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
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
}

