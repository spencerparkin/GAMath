#include "Bivector.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Vector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E3GA;

Bivector::Bivector(double e1_e2, double e2_e3, double e3_e1)
{
	this->e1_e2 = e1_e2;
	this->e2_e3 = e2_e3;
	this->e3_e1 = e3_e1;
}

Bivector::Bivector(const Bivector& bivector)
{
	this->e1_e2 = bivector.e1_e2;
	this->e2_e3 = bivector.e2_e3;
	this->e3_e1 = bivector.e3_e1;
}

void Bivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + bivectorB.e3_e1;
}

void Bivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - bivectorB.e3_e1;
}

void Bivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Bivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Bivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Bivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e3_e1 = (-1.0) * vectorA.e1 * vectorB.e3 + vectorA.e3 * vectorB.e1;
}

void Bivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

void Bivector::OuterProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e3_e1 = bivectorA.e3_e1 * rotorB._1;
}

void Bivector::OuterProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e3_e1 = rotorA._1 * bivectorB.e3_e1;
}

void Bivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e3_e1 = scalarA._1 * bivectorB.e3_e1;
}

void Bivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3 * vectorB.e3;
	this->e2_e3 = psuedoscalarA.e1_e2_e3 * vectorB.e1;
	this->e3_e1 = psuedoscalarA.e1_e2_e3 * vectorB.e2;
}

void Bivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = vectorA.e3 * psuedoscalarB.e1_e2_e3;
	this->e2_e3 = vectorA.e1 * psuedoscalarB.e1_e2_e3;
	this->e3_e1 = vectorA.e2 * psuedoscalarB.e1_e2_e3;
}

void Bivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e3_e1 = bivectorA.e3_e1 * scalarB._1;
}

