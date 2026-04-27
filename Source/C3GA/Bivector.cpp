#include "Bivector.h"
#include "Scalar.h"
#include "Vector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C3GA;

Bivector::Bivector()
{
	this->e1_e2 = 0.0;
	this->e1_e3 = 0.0;
	this->e1_no = 0.0;
	this->e1_ni = 0.0;
	this->e2_e3 = 0.0;
	this->e2_no = 0.0;
	this->e2_ni = 0.0;
	this->e3_no = 0.0;
	this->e3_ni = 0.0;
	this->no_ni = 0.0;
}

Bivector::Bivector(double e1_e2, double e1_e3, double e1_no, double e1_ni, double e2_e3, double e2_no, double e2_ni, double e3_no, double e3_ni, double no_ni)
{
	this->e1_e2 = e1_e2;
	this->e1_e3 = e1_e3;
	this->e1_no = e1_no;
	this->e1_ni = e1_ni;
	this->e2_e3 = e2_e3;
	this->e2_no = e2_no;
	this->e2_ni = e2_ni;
	this->e3_no = e3_no;
	this->e3_ni = e3_ni;
	this->no_ni = no_ni;
}

Bivector::Bivector(const Bivector& bivector)
{
	this->e1_e2 = bivector.e1_e2;
	this->e1_e3 = bivector.e1_e3;
	this->e1_no = bivector.e1_no;
	this->e1_ni = bivector.e1_ni;
	this->e2_e3 = bivector.e2_e3;
	this->e2_no = bivector.e2_no;
	this->e2_ni = bivector.e2_ni;
	this->e3_no = bivector.e3_no;
	this->e3_ni = bivector.e3_ni;
	this->no_ni = bivector.no_ni;
}

void Bivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 + bivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no + bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + bivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no + bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + bivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no + bivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni + bivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni + bivectorB.no_ni;
}

void Bivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 - bivectorB.e1_e3;
	this->e1_no = bivectorA.e1_no - bivectorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - bivectorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e2_no = bivectorA.e2_no - bivectorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - bivectorB.e2_ni;
	this->e3_no = bivectorA.e3_no - bivectorB.e3_no;
	this->e3_ni = bivectorA.e3_ni - bivectorB.e3_ni;
	this->no_ni = bivectorA.no_ni - bivectorB.no_ni;
}

void Bivector::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
}

void Bivector::InnerProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->e1_e2 = vectorA.e3 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e2_no + (-1.0) * vectorA.no * trivectorB.e1_e2_ni;
	this->e1_e3 = (-1.0) * vectorA.e2 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_e3_ni;
	this->e1_no = (-1.0) * vectorA.e2 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e1_e3_no + (-1.0) * vectorA.no * trivectorB.e1_no_ni;
	this->e1_ni = (-1.0) * vectorA.e2 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e1_e3_ni + vectorA.ni * trivectorB.e1_no_ni;
	this->e2_e3 = vectorA.e1 * trivectorB.e1_e2_e3 + (-1.0) * vectorA.ni * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_e3_ni;
	this->e2_no = vectorA.e1 * trivectorB.e1_e2_no + (-1.0) * vectorA.e3 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e2_no_ni;
	this->e2_ni = vectorA.e1 * trivectorB.e1_e2_ni + (-1.0) * vectorA.e3 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e2_no_ni;
	this->e3_no = vectorA.e1 * trivectorB.e1_e3_no + vectorA.e2 * trivectorB.e2_e3_no + (-1.0) * vectorA.no * trivectorB.e3_no_ni;
	this->e3_ni = vectorA.e1 * trivectorB.e1_e3_ni + vectorA.e2 * trivectorB.e2_e3_ni + vectorA.ni * trivectorB.e3_no_ni;
	this->no_ni = vectorA.e1 * trivectorB.e1_no_ni + vectorA.e2 * trivectorB.e2_no_ni + vectorA.e3 * trivectorB.e3_no_ni;
}

void Bivector::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
}

void Bivector::InnerProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->e1_e2 = bivectorA.e3_ni * quadvectorB.e1_e2_e3_no + bivectorA.e3_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3 = (-1.0) * bivectorA.e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_no = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * bivectorA.e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e1_e3_no_ni;
	this->e1_ni = (-1.0) * bivectorA.e2_e3 * quadvectorB.e1_e2_e3_ni + bivectorA.e2_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e1_e3_no_ni;
	this->e2_e3 = bivectorA.e1_ni * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_e3_ni + bivectorA.no_ni * quadvectorB.e2_e3_no_ni;
	this->e2_no = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e3_no * quadvectorB.e2_e3_no_ni;
	this->e2_ni = bivectorA.e1_e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e2_no_ni + bivectorA.e3_ni * quadvectorB.e2_e3_no_ni;
	this->e3_no = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_no + bivectorA.e1_no * quadvectorB.e1_e3_no_ni + bivectorA.e2_no * quadvectorB.e2_e3_no_ni;
	this->e3_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * bivectorA.e1_ni * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_ni * quadvectorB.e2_e3_no_ni;
	this->no_ni = (-1.0) * bivectorA.e1_e2 * quadvectorB.e1_e2_no_ni + (-1.0) * bivectorA.e1_e3 * quadvectorB.e1_e3_no_ni + (-1.0) * bivectorA.e2_e3 * quadvectorB.e2_e3_no_ni;
}

void Bivector::InnerProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->e1_e2 = trivectorA.e1_e2_e3 * vectorB.e3 + (-1.0) * trivectorA.e1_e2_ni * vectorB.no + (-1.0) * trivectorA.e1_e2_no * vectorB.ni;
	this->e1_e3 = (-1.0) * trivectorA.e1_e2_e3 * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.no + (-1.0) * trivectorA.e1_e3_no * vectorB.ni;
	this->e1_no = (-1.0) * trivectorA.e1_e2_no * vectorB.e2 + (-1.0) * trivectorA.e1_e3_no * vectorB.e3 + (-1.0) * trivectorA.e1_no_ni * vectorB.no;
	this->e1_ni = (-1.0) * trivectorA.e1_e2_ni * vectorB.e2 + (-1.0) * trivectorA.e1_e3_ni * vectorB.e3 + trivectorA.e1_no_ni * vectorB.ni;
	this->e2_e3 = trivectorA.e1_e2_e3 * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.no + (-1.0) * trivectorA.e2_e3_no * vectorB.ni;
	this->e2_no = trivectorA.e1_e2_no * vectorB.e1 + (-1.0) * trivectorA.e2_e3_no * vectorB.e3 + (-1.0) * trivectorA.e2_no_ni * vectorB.no;
	this->e2_ni = trivectorA.e1_e2_ni * vectorB.e1 + (-1.0) * trivectorA.e2_e3_ni * vectorB.e3 + trivectorA.e2_no_ni * vectorB.ni;
	this->e3_no = trivectorA.e1_e3_no * vectorB.e1 + trivectorA.e2_e3_no * vectorB.e2 + (-1.0) * trivectorA.e3_no_ni * vectorB.no;
	this->e3_ni = trivectorA.e1_e3_ni * vectorB.e1 + trivectorA.e2_e3_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.ni;
	this->no_ni = trivectorA.e1_no_ni * vectorB.e1 + trivectorA.e2_no_ni * vectorB.e2 + trivectorA.e3_no_ni * vectorB.e3;
}

void Bivector::InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = trivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = trivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * trivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * trivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = trivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = trivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Bivector::InnerProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->e1_e2 = quadvectorA.e1_e2_e3_ni * bivectorB.e3_no + quadvectorA.e1_e2_e3_no * bivectorB.e3_ni + quadvectorA.e1_e2_no_ni * bivectorB.no_ni;
	this->e1_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e2_no + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e3_no;
	this->e1_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e2_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e2_ni + quadvectorA.e1_e3_no_ni * bivectorB.e3_ni;
	this->e2_e3 = quadvectorA.e1_e2_e3_ni * bivectorB.e1_no + quadvectorA.e1_e2_e3_no * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * bivectorB.e1_e3 + quadvectorA.e1_e2_no_ni * bivectorB.e1_no + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e3_no;
	this->e2_ni = quadvectorA.e1_e2_e3_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_ni + quadvectorA.e2_e3_no_ni * bivectorB.e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * bivectorB.e1_e2 + quadvectorA.e1_e3_no_ni * bivectorB.e1_no + quadvectorA.e2_e3_no_ni * bivectorB.e2_no;
	this->e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_ni + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * bivectorB.e1_e2 + (-1.0) * quadvectorA.e1_e3_no_ni * bivectorB.e1_e3 + (-1.0) * quadvectorA.e2_e3_no_ni * bivectorB.e2_e3;
}

void Bivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3;
}

void Bivector::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
}

void Bivector::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->e1_e2 = vectorA.e1 * vectorB.e2 + (-1.0) * vectorA.e2 * vectorB.e1;
	this->e1_e3 = vectorA.e1 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e1;
	this->e1_no = vectorA.e1 * vectorB.no + (-1.0) * vectorA.no * vectorB.e1;
	this->e1_ni = vectorA.e1 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e1;
	this->e2_e3 = vectorA.e2 * vectorB.e3 + (-1.0) * vectorA.e3 * vectorB.e2;
	this->e2_no = vectorA.e2 * vectorB.no + (-1.0) * vectorA.no * vectorB.e2;
	this->e2_ni = vectorA.e2 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e2;
	this->e3_no = vectorA.e3 * vectorB.no + (-1.0) * vectorA.no * vectorB.e3;
	this->e3_ni = vectorA.e3 * vectorB.ni + (-1.0) * vectorA.ni * vectorB.e3;
	this->no_ni = (-1.0) * vectorA.ni * vectorB.no + vectorA.no * vectorB.ni;
}

void Bivector::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
}

void Bivector::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->e1_e2 = scalarA._1 * bivectorB.e1_e2;
	this->e1_e3 = scalarA._1 * bivectorB.e1_e3;
	this->e1_no = scalarA._1 * bivectorB.e1_no;
	this->e1_ni = scalarA._1 * bivectorB.e1_ni;
	this->e2_e3 = scalarA._1 * bivectorB.e2_e3;
	this->e2_no = scalarA._1 * bivectorB.e2_no;
	this->e2_ni = scalarA._1 * bivectorB.e2_ni;
	this->e3_no = scalarA._1 * bivectorB.e3_no;
	this->e3_ni = scalarA._1 * bivectorB.e3_ni;
	this->no_ni = scalarA._1 * bivectorB.no_ni;
}

void Bivector::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->e1_e2 = bivectorA.e1_e2 * scalarB._1;
	this->e1_e3 = bivectorA.e1_e3 * scalarB._1;
	this->e1_no = bivectorA.e1_no * scalarB._1;
	this->e1_ni = bivectorA.e1_ni * scalarB._1;
	this->e2_e3 = bivectorA.e2_e3 * scalarB._1;
	this->e2_no = bivectorA.e2_no * scalarB._1;
	this->e2_ni = bivectorA.e2_ni * scalarB._1;
	this->e3_no = bivectorA.e3_no * scalarB._1;
	this->e3_ni = bivectorA.e3_ni * scalarB._1;
	this->no_ni = bivectorA.no_ni * scalarB._1;
}

void Bivector::GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2 = trivectorA.e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no = trivectorA.e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_ni = (-1.0) * trivectorA.e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no = (-1.0) * trivectorA.e1_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_ni = trivectorA.e1_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no = trivectorA.e1_e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_ni = (-1.0) * trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no_ni = (-1.0) * trivectorA.e1_e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Bivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->e1_e2 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e1_e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_no_ni;
	this->e1_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_no;
	this->e1_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e2_e3_ni;
	this->e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_no_ni;
	this->e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_no;
	this->e2_ni = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e3_ni;
	this->e3_no = psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_no;
	this->e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_ni;
	this->no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * trivectorB.e1_e2_e3;
}

