#include "Trivector.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C2GA;

Trivector::Trivector(double e1_e2_no, double e1_e2_ni, double e1_no_ni, double e2_no_ni)
{
	this->e1_e2_no = e1_e2_no;
	this->e1_e2_ni = e1_e2_ni;
	this->e1_no_ni = e1_no_ni;
	this->e2_no_ni = e2_no_ni;
}

Trivector::Trivector(const Trivector& trivector)
{
	this->e1_e2_no = trivector.e1_e2_no;
	this->e1_e2_ni = trivector.e1_e2_ni;
	this->e1_no_ni = trivector.e1_no_ni;
	this->e2_no_ni = trivector.e2_no_ni;
}

void Trivector::Add(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->e1_e2_no = trivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + trivectorB.e2_no_ni;
}

void Trivector::Subtract(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->e1_e2_no = trivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - trivectorB.e2_no_ni;
}

void Trivector::InnerProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
}

void Trivector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no = vectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * vectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_no_ni;
}

void Trivector::InnerProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
}

void Trivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * vectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.e1;
}

void Trivector::OuterProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
}

void Trivector::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
}

void Trivector::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
}

void Trivector::OuterProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
}

void Trivector::GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
}

void Trivector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_no = vectorA.no * psuedoscalarB.e1_e2_no_ni;
	this->e1_e2_ni = (-1.0) * vectorA.ni * psuedoscalarB.e1_e2_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_no_ni;
	this->e2_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_no_ni;
}

void Trivector::GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
}

void Trivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_no_ni * vectorB.ni;
	this->e1_no_ni = psuedoscalarA.e1_e2_no_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * vectorB.e1;
}

