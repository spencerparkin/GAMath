#include "Quadvector.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C3GA;

Quadvector::Quadvector(double e1_e2_e3_no, double e1_e2_e3_ni, double e1_e2_no_ni, double e1_e3_no_ni, double e2_e3_no_ni)
{
	this->e1_e2_e3_no = e1_e2_e3_no;
	this->e1_e2_e3_ni = e1_e2_e3_ni;
	this->e1_e2_no_ni = e1_e2_no_ni;
	this->e1_e3_no_ni = e1_e3_no_ni;
	this->e2_e3_no_ni = e2_e3_no_ni;
}

Quadvector::Quadvector(const Quadvector& quadvector)
{
	this->e1_e2_e3_no = quadvector.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvector.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvector.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvector.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvector.e2_e3_no_ni;
}

void Quadvector::Add(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no + quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni + quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni + quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni + quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni + quadvectorB.e2_e3_no_ni;
}

void Quadvector::Subtract(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no - quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni - quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni - quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni - quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni - quadvectorB.e2_e3_no_ni;
}

void Quadvector::InnerProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
}

void Quadvector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no = (-1.0) * vectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Quadvector::InnerProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
}

void Quadvector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e1;
}

void Quadvector::OuterProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
}

void Quadvector::OuterProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->e1_e2_e3_no = vectorA.e1 * trivectorB.e2_e3_no + (-1.0) * vectorA.e2 * trivectorB.e1_e3_no + vectorA.e3 * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_e3;
	this->e1_e2_e3_ni = vectorA.e1 * trivectorB.e2_e3_ni + (-1.0) * vectorA.e2 * trivectorB.e1_e3_ni + vectorA.e3 * trivectorB.e1_e2_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_e3;
	this->e1_e2_no_ni = vectorA.e1 * trivectorB.e2_no_ni + (-1.0) * vectorA.e2 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3_no_ni = vectorA.e1 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e1_no_ni + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + vectorA.no * trivectorB.e1_e3_ni;
	this->e2_e3_no_ni = vectorA.e2 * trivectorB.e3_no_ni + (-1.0) * vectorA.e3 * trivectorB.e2_no_ni + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + vectorA.no * trivectorB.e2_e3_ni;
}

void Quadvector::OuterProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2_e3_no = bivectorA.e1_e2 * bivectorB.e3_no + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_no + bivectorA.e1_no * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_no + (-1.0) * bivectorA.e2_no * bivectorB.e1_e3 + bivectorA.e3_no * bivectorB.e1_e2;
	this->e1_e2_e3_ni = bivectorA.e1_e2 * bivectorB.e3_ni + (-1.0) * bivectorA.e1_e3 * bivectorB.e2_ni + bivectorA.e1_ni * bivectorB.e2_e3 + bivectorA.e2_e3 * bivectorB.e1_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_e3 + bivectorA.e3_ni * bivectorB.e1_e2;
	this->e1_e2_no_ni = bivectorA.e1_e2 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e2_no + (-1.0) * bivectorA.e1_no * bivectorB.e2_ni + (-1.0) * bivectorA.e2_ni * bivectorB.e1_no + bivectorA.e2_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e2;
	this->e1_e3_no_ni = bivectorA.e1_e3 * bivectorB.no_ni + bivectorA.e1_ni * bivectorB.e3_no + (-1.0) * bivectorA.e1_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e1_no + bivectorA.e3_no * bivectorB.e1_ni + bivectorA.no_ni * bivectorB.e1_e3;
	this->e2_e3_no_ni = bivectorA.e2_e3 * bivectorB.no_ni + bivectorA.e2_ni * bivectorB.e3_no + (-1.0) * bivectorA.e2_no * bivectorB.e3_ni + (-1.0) * bivectorA.e3_ni * bivectorB.e2_no + bivectorA.e3_no * bivectorB.e2_ni + bivectorA.no_ni * bivectorB.e2_e3;
}

void Quadvector::OuterProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->e1_e2_e3_no = trivectorA.e1_e2_e3 * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.e3 + trivectorA.e1_e3_no * vectorB.e2 + (-1.0) * trivectorA.e2_e3_no * vectorB.e1;
	this->e1_e2_e3_ni = trivectorA.e1_e2_e3 * vectorB.ni + (-1.0) * trivectorA.e1_e2_ni * vectorB.e3 + trivectorA.e1_e3_ni * vectorB.e2 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e1;
	this->e1_e2_no_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.no + trivectorA.e1_e2_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e2 + (-1.0) * trivectorA.e2_no_ni * vectorB.e1;
	this->e1_e3_no_ni = (-1.0) * trivectorA.e1_e3_ni * vectorB.no + trivectorA.e1_e3_no * vectorB.ni + trivectorA.e1_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e1;
	this->e2_e3_no_ni = (-1.0) * trivectorA.e2_e3_ni * vectorB.no + trivectorA.e2_e3_no * vectorB.ni + trivectorA.e2_no_ni * vectorB.e3 + (-1.0) * trivectorA.e3_no_ni * vectorB.e2;
}

void Quadvector::OuterProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
}

void Quadvector::GeometricProduct(const Scalar& scalarA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3_no = scalarA._1 * quadvectorB.e1_e2_e3_no;
	this->e1_e2_e3_ni = scalarA._1 * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no_ni = scalarA._1 * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no_ni = scalarA._1 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no_ni = scalarA._1 * quadvectorB.e2_e3_no_ni;
}

void Quadvector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3_no = (-1.0) * vectorA.no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_e3_ni = vectorA.ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no_ni = vectorA.e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no_ni = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no_ni = vectorA.e1 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Quadvector::GeometricProduct(const Quadvector& quadvectorA, const Scalar& scalarB)
{
	this->e1_e2_e3_no = quadvectorA.e1_e2_e3_no * scalarB._1;
	this->e1_e2_e3_ni = quadvectorA.e1_e2_e3_ni * scalarB._1;
	this->e1_e2_no_ni = quadvectorA.e1_e2_no_ni * scalarB._1;
	this->e1_e3_no_ni = quadvectorA.e1_e3_no_ni * scalarB._1;
	this->e2_e3_no_ni = quadvectorA.e2_e3_no_ni * scalarB._1;
}

void Quadvector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1_e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.no;
	this->e1_e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.ni;
	this->e1_e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e3;
	this->e1_e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * vectorB.e2;
	this->e2_e3_no_ni = psuedoscalarA.e1_e2_e3_no_ni * vectorB.e1;
}

