#include "PsuedoScalar.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "Multivector.h"

using namespace C3GA;

PsuedoScalar::PsuedoScalar(double e1_e2_e3_no_ni)
{
	this->e1_e2_e3_no_ni = e1_e2_e3_no_ni;
}

PsuedoScalar::PsuedoScalar(const PsuedoScalar& psuedoscalar)
{
	this->e1_e2_e3_no_ni = psuedoscalar.e1_e2_e3_no_ni;
}

void PsuedoScalar::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni + psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni - psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

void PsuedoScalar::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::OuterProduct(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no_ni = vectorA.e1 * quadvectorB.e2_e3_no_ni + (-1.0) * vectorA.e2 * quadvectorB.e1_e3_no_ni + vectorA.e3 * quadvectorB.e1_e2_no_ni + vectorA.ni * quadvectorB.e1_e2_e3_no + (-1.0) * vectorA.no * quadvectorB.e1_e2_e3_ni;
}

void PsuedoScalar::OuterProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->e1_e2_e3_no_ni = bivectorA.e1_e2 * trivectorB.e3_no_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e2_no_ni + (-1.0) * bivectorA.e1_ni * trivectorB.e2_e3_no + bivectorA.e1_no * trivectorB.e2_e3_ni + bivectorA.e2_e3 * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e3_ni * trivectorB.e1_e2_no + bivectorA.e3_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_e2_e3;
}

void PsuedoScalar::OuterProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->e1_e2_e3_no_ni = trivectorA.e1_e2_e3 * bivectorB.no_ni + trivectorA.e1_e2_ni * bivectorB.e3_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e3_ni + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e2_no + trivectorA.e1_e3_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.e2_e3 + trivectorA.e2_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_no_ni * bivectorB.e1_e3 + trivectorA.e3_no_ni * bivectorB.e1_e2;
}

void PsuedoScalar::OuterProduct(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->e1_e2_e3_no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + quadvectorA.e1_e2_e3_no * vectorB.ni + quadvectorA.e1_e2_no_ni * vectorB.e3 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e2 + quadvectorA.e2_e3_no_ni * vectorB.e1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * multivectorB._1;
}

void PsuedoScalar::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = multivectorA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no_ni = scalarA._1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void PsuedoScalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * scalarB._1;
}

