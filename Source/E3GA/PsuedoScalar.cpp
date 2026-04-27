#include "PsuedoScalar.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E3GA;

PsuedoScalar::PsuedoScalar()
{
	this->e1_e2_e3 = 0.0;
}

PsuedoScalar::PsuedoScalar(double e1_e2_e3)
{
	this->e1_e2_e3 = e1_e2_e3;
}

PsuedoScalar::PsuedoScalar(const PsuedoScalar& psuedoscalar)
{
	this->e1_e2_e3 = psuedoscalar.e1_e2_e3;
}

void PsuedoScalar::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 + psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 - psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::InnerProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::InnerProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

void PsuedoScalar::OuterProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Rotor& rotorB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * rotorB._1;
}

void PsuedoScalar::OuterProduct(const PsuedoScalar& psuedoscalarA, const Multivector& multivectorB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * multivectorB._1;
}

void PsuedoScalar::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + vectorA.e2 * bivectorB.e3_e1 + vectorA.e3 * bivectorB.e1_e2;
}

void PsuedoScalar::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + bivectorA.e2_e3 * vectorB.e1 + bivectorA.e3_e1 * vectorB.e2;
}

void PsuedoScalar::OuterProduct(const Rotor& rotorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = rotorA._1 * psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::OuterProduct(const Multivector& multivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = multivectorA._1 * psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::GeometricProduct(const Scalar& scalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = scalarA._1 * psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Scalar& scalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 * scalarB._1;
}

