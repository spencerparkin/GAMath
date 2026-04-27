#include "PsuedoScalar.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Multivector.h"

using namespace C2GA;

PsuedoScalar::PsuedoScalar(double e1_e2_no_ni)
{
	this->e1_e2_no_ni = e1_e2_no_ni;
}

PsuedoScalar::PsuedoScalar(const PsuedoScalar& psuedoscalar)
{
	this->e1_e2_no_ni = psuedoscalar.e1_e2_no_ni;
}

void PsuedoScalar::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni + psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni - psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

void PsuedoScalar::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::OuterProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
}

void PsuedoScalar::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
}

void PsuedoScalar::OuterProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * multivectorB._1;
}

void PsuedoScalar::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no_ni = scalarA._1 * psuedoscalarB.e1_e2_no_ni;
}

void PsuedoScalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_no_ni * scalarB._1;
}

