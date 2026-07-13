// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Trivector.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"
#include "Rotor.h"

using namespace C3GA;

Trivector::Trivector()
{
	this->e1_e2_e3 = 0.0;
	this->e1_e2_no = 0.0;
	this->e1_e2_ni = 0.0;
	this->e1_e3_no = 0.0;
	this->e1_e3_ni = 0.0;
	this->e1_no_ni = 0.0;
	this->e2_e3_no = 0.0;
	this->e2_e3_ni = 0.0;
	this->e2_no_ni = 0.0;
	this->e3_no_ni = 0.0;
}

Trivector::Trivector(double e1_e2_e3, double e1_e2_no, double e1_e2_ni, double e1_e3_no, double e1_e3_ni, double e1_no_ni, double e2_e3_no, double e2_e3_ni, double e2_no_ni, double e3_no_ni)
{
	this->e1_e2_e3 = e1_e2_e3;
	this->e1_e2_no = e1_e2_no;
	this->e1_e2_ni = e1_e2_ni;
	this->e1_e3_no = e1_e3_no;
	this->e1_e3_ni = e1_e3_ni;
	this->e1_no_ni = e1_no_ni;
	this->e2_e3_no = e2_e3_no;
	this->e2_e3_ni = e2_e3_ni;
	this->e2_no_ni = e2_no_ni;
	this->e3_no_ni = e3_no_ni;
}

Trivector::Trivector(const Trivector& trivector)
{
	this->e1_e2_e3 = trivector.e1_e2_e3;
	this->e1_e2_no = trivector.e1_e2_no;
	this->e1_e2_ni = trivector.e1_e2_ni;
	this->e1_e3_no = trivector.e1_e3_no;
	this->e1_e3_ni = trivector.e1_e3_ni;
	this->e1_no_ni = trivector.e1_no_ni;
	this->e2_e3_no = trivector.e2_e3_no;
	this->e2_e3_ni = trivector.e2_e3_ni;
	this->e2_no_ni = trivector.e2_no_ni;
	this->e3_no_ni = trivector.e3_no_ni;
}

bool Trivector::IsEqualTo(const Trivector& trivector, double epsilon /*= 1e-5*/) const
{
	if(::fabs(this->e1_e2_e3 - trivector.e1_e2_e3) >= epsilon)
		return false;

	if(::fabs(this->e1_e2_no - trivector.e1_e2_no) >= epsilon)
		return false;

	if(::fabs(this->e1_e2_ni - trivector.e1_e2_ni) >= epsilon)
		return false;

	if(::fabs(this->e1_e3_no - trivector.e1_e3_no) >= epsilon)
		return false;

	if(::fabs(this->e1_e3_ni - trivector.e1_e3_ni) >= epsilon)
		return false;

	if(::fabs(this->e1_no_ni - trivector.e1_no_ni) >= epsilon)
		return false;

	if(::fabs(this->e2_e3_no - trivector.e2_e3_no) >= epsilon)
		return false;

	if(::fabs(this->e2_e3_ni - trivector.e2_e3_ni) >= epsilon)
		return false;

	if(::fabs(this->e2_no_ni - trivector.e2_no_ni) >= epsilon)
		return false;

	if(::fabs(this->e3_no_ni - trivector.e3_no_ni) >= epsilon)
		return false;

	return true;
}

void Trivector::Add(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->e1_e2_e3 = trivectorA.e1_e2_e3 + trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no + trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni + trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no + trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni + trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni + trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no + trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni + trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni + trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni + trivectorB.e3_no_ni;
}

void Trivector::Subtract(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->e1_e2_e3 = trivectorA.e1_e2_e3 - trivectorB.e1_e2_e3;
	this->e1_e2_no = trivectorA.e1_e2_no - trivectorB.e1_e2_no;
	this->e1_e2_ni = trivectorA.e1_e2_ni - trivectorB.e1_e2_ni;
	this->e1_e3_no = trivectorA.e1_e3_no - trivectorB.e1_e3_no;
	this->e1_e3_ni = trivectorA.e1_e3_ni - trivectorB.e1_e3_ni;
	this->e1_no_ni = trivectorA.e1_no_ni - trivectorB.e1_no_ni;
	this->e2_e3_no = trivectorA.e2_e3_no - trivectorB.e2_e3_no;
	this->e2_e3_ni = trivectorA.e2_e3_ni - trivectorB.e2_e3_ni;
	this->e2_no_ni = trivectorA.e2_no_ni - trivectorB.e2_no_ni;
	this->e3_no_ni = trivectorA.e3_no_ni - trivectorB.e3_no_ni;
}

void Trivector::InnerProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
}

void Trivector::InnerProduct(const Vector& vectorA, const Quadvector& quadvectorB)
{
	this->e1_e2_e3 = vectorA.ni * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_e3_ni;
	this->e1_e2_no = vectorA.e3 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e2_no_ni;
	this->e1_e2_ni = vectorA.e3 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e2_no_ni;
	this->e1_e3_no = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e1_e3_no_ni;
	this->e1_e3_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e1_e3_no_ni;
	this->e1_no_ni = (-1.0) * vectorA.e2 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e1_e3_no_ni;
	this->e2_e3_no = vectorA.e1 * quadvectorB.e1_e2_e3_no + vectorA.no * quadvectorB.e2_e3_no_ni;
	this->e2_e3_ni = vectorA.e1 * quadvectorB.e1_e2_e3_ni + (-1.0) * vectorA.ni * quadvectorB.e2_e3_no_ni;
	this->e2_no_ni = vectorA.e1 * quadvectorB.e1_e2_no_ni + (-1.0) * vectorA.e3 * quadvectorB.e2_e3_no_ni;
	this->e3_no_ni = vectorA.e1 * quadvectorB.e1_e3_no_ni + vectorA.e2 * quadvectorB.e2_e3_no_ni;
}

void Trivector::InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = bivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = bivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = bivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * bivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = bivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = bivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Trivector::InnerProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
}

void Trivector::InnerProduct(const Quadvector& quadvectorA, const Vector& vectorB)
{
	this->e1_e2_e3 = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.no + (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.ni;
	this->e1_e2_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e3 + (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.no;
	this->e1_e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e3 + quadvectorA.e1_e2_no_ni * vectorB.ni;
	this->e1_e3_no = quadvectorA.e1_e2_e3_no * vectorB.e2 + (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.no;
	this->e1_e3_ni = quadvectorA.e1_e2_e3_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.ni;
	this->e1_no_ni = quadvectorA.e1_e2_no_ni * vectorB.e2 + quadvectorA.e1_e3_no_ni * vectorB.e3;
	this->e2_e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.no;
	this->e2_e3_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.ni;
	this->e2_no_ni = (-1.0) * quadvectorA.e1_e2_no_ni * vectorB.e1 + quadvectorA.e2_e3_no_ni * vectorB.e3;
	this->e3_no_ni = (-1.0) * quadvectorA.e1_e3_no_ni * vectorB.e1 + (-1.0) * quadvectorA.e2_e3_no_ni * vectorB.e2;
}

void Trivector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e2;
}

void Trivector::OuterProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
}

void Trivector::OuterProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1_e2_e3 = vectorA.e1 * bivectorB.e2_e3 + (-1.0) * vectorA.e2 * bivectorB.e1_e3 + vectorA.e3 * bivectorB.e1_e2;
	this->e1_e2_no = vectorA.e1 * bivectorB.e2_no + (-1.0) * vectorA.e2 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e2;
	this->e1_e2_ni = vectorA.e1 * bivectorB.e2_ni + (-1.0) * vectorA.e2 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e2;
	this->e1_e3_no = vectorA.e1 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e1_no + vectorA.no * bivectorB.e1_e3;
	this->e1_e3_ni = vectorA.e1 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e1_ni + vectorA.ni * bivectorB.e1_e3;
	this->e1_no_ni = vectorA.e1 * bivectorB.no_ni + vectorA.ni * bivectorB.e1_no + (-1.0) * vectorA.no * bivectorB.e1_ni;
	this->e2_e3_no = vectorA.e2 * bivectorB.e3_no + (-1.0) * vectorA.e3 * bivectorB.e2_no + vectorA.no * bivectorB.e2_e3;
	this->e2_e3_ni = vectorA.e2 * bivectorB.e3_ni + (-1.0) * vectorA.e3 * bivectorB.e2_ni + vectorA.ni * bivectorB.e2_e3;
	this->e2_no_ni = vectorA.e2 * bivectorB.no_ni + vectorA.ni * bivectorB.e2_no + (-1.0) * vectorA.no * bivectorB.e2_ni;
	this->e3_no_ni = vectorA.e3 * bivectorB.no_ni + vectorA.ni * bivectorB.e3_no + (-1.0) * vectorA.no * bivectorB.e3_ni;
}

void Trivector::OuterProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1_e2_e3 = bivectorA.e1_e2 * vectorB.e3 + (-1.0) * bivectorA.e1_e3 * vectorB.e2 + bivectorA.e2_e3 * vectorB.e1;
	this->e1_e2_no = bivectorA.e1_e2 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e2 + bivectorA.e2_no * vectorB.e1;
	this->e1_e2_ni = bivectorA.e1_e2 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e2 + bivectorA.e2_ni * vectorB.e1;
	this->e1_e3_no = bivectorA.e1_e3 * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.e3 + bivectorA.e3_no * vectorB.e1;
	this->e1_e3_ni = bivectorA.e1_e3 * vectorB.ni + (-1.0) * bivectorA.e1_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e1;
	this->e1_no_ni = (-1.0) * bivectorA.e1_ni * vectorB.no + bivectorA.e1_no * vectorB.ni + bivectorA.no_ni * vectorB.e1;
	this->e2_e3_no = bivectorA.e2_e3 * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.e3 + bivectorA.e3_no * vectorB.e2;
	this->e2_e3_ni = bivectorA.e2_e3 * vectorB.ni + (-1.0) * bivectorA.e2_ni * vectorB.e3 + bivectorA.e3_ni * vectorB.e2;
	this->e2_no_ni = (-1.0) * bivectorA.e2_ni * vectorB.no + bivectorA.e2_no * vectorB.ni + bivectorA.no_ni * vectorB.e2;
	this->e3_no_ni = (-1.0) * bivectorA.e3_ni * vectorB.no + bivectorA.e3_no * vectorB.ni + bivectorA.no_ni * vectorB.e3;
}

void Trivector::OuterProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
}

void Trivector::GeometricProduct(const Scalar& scalarA, const Trivector& trivectorB)
{
	this->e1_e2_e3 = scalarA._1 * trivectorB.e1_e2_e3;
	this->e1_e2_no = scalarA._1 * trivectorB.e1_e2_no;
	this->e1_e2_ni = scalarA._1 * trivectorB.e1_e2_ni;
	this->e1_e3_no = scalarA._1 * trivectorB.e1_e3_no;
	this->e1_e3_ni = scalarA._1 * trivectorB.e1_e3_ni;
	this->e1_no_ni = scalarA._1 * trivectorB.e1_no_ni;
	this->e2_e3_no = scalarA._1 * trivectorB.e2_e3_no;
	this->e2_e3_ni = scalarA._1 * trivectorB.e2_e3_ni;
	this->e2_no_ni = scalarA._1 * trivectorB.e2_no_ni;
	this->e3_no_ni = scalarA._1 * trivectorB.e3_no_ni;
}

void Trivector::GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = bivectorA.no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_no = (-1.0) * bivectorA.e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e2_ni = bivectorA.e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_no = bivectorA.e2_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_e3_ni = (-1.0) * bivectorA.e2_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e1_no_ni = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_no = (-1.0) * bivectorA.e1_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_e3_ni = bivectorA.e1_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2_no_ni = bivectorA.e1_e3 * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3_no_ni = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3_no_ni;
}

void Trivector::GeometricProduct(const Trivector& trivectorA, const Scalar& scalarB)
{
	this->e1_e2_e3 = trivectorA.e1_e2_e3 * scalarB._1;
	this->e1_e2_no = trivectorA.e1_e2_no * scalarB._1;
	this->e1_e2_ni = trivectorA.e1_e2_ni * scalarB._1;
	this->e1_e3_no = trivectorA.e1_e3_no * scalarB._1;
	this->e1_e3_ni = trivectorA.e1_e3_ni * scalarB._1;
	this->e1_no_ni = trivectorA.e1_no_ni * scalarB._1;
	this->e2_e3_no = trivectorA.e2_e3_no * scalarB._1;
	this->e2_e3_ni = trivectorA.e2_e3_ni * scalarB._1;
	this->e2_no_ni = trivectorA.e2_no_ni * scalarB._1;
	this->e3_no_ni = trivectorA.e3_no_ni * scalarB._1;
}

void Trivector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.no_ni;
	this->e1_e2_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_no;
	this->e1_e2_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e3_ni;
	this->e1_e3_no = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_no;
	this->e1_e3_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_ni;
	this->e1_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e2_e3;
	this->e2_e3_no = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_no;
	this->e2_e3_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_ni;
	this->e2_no_ni = psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e3;
	this->e3_no_ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * bivectorB.e1_e2;
}

void Trivector::Reverse(const Trivector& trivectorA)
{
	this->e1_e2_e3 = (-1.0) * trivectorA.e1_e2_e3;
	this->e1_e2_no = (-1.0) * trivectorA.e1_e2_no;
	this->e1_e2_ni = (-1.0) * trivectorA.e1_e2_ni;
	this->e1_e3_no = (-1.0) * trivectorA.e1_e3_no;
	this->e1_e3_ni = (-1.0) * trivectorA.e1_e3_ni;
	this->e1_no_ni = (-1.0) * trivectorA.e1_no_ni;
	this->e2_e3_no = (-1.0) * trivectorA.e2_e3_no;
	this->e2_e3_ni = (-1.0) * trivectorA.e2_e3_ni;
	this->e2_no_ni = (-1.0) * trivectorA.e2_no_ni;
	this->e3_no_ni = (-1.0) * trivectorA.e3_no_ni;
}

double Trivector::SquareMagnitude() const
{
	return (this->e1_e2_e3 * this->e1_e2_e3) + (-2)*this->e1_e2_ni*this->e1_e2_no + (-2)*this->e1_e3_ni*this->e1_e3_no + (-1)*(this->e1_no_ni * this->e1_no_ni) + (-2)*this->e2_e3_ni*this->e2_e3_no + (-1)*(this->e2_no_ni * this->e2_no_ni) + (-1)*(this->e3_no_ni * this->e3_no_ni);
}

void Trivector::GetMatrixSize(int& numRows, int& numCols) const
{
	numRows = 16;
	numCols = 10;
}

void Trivector::ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const
{
	elementCallback(0, 0, (-1.0)*this->e1_e2_e3);
	elementCallback(0, 2, this->e1_e2_ni);
	elementCallback(0, 1, this->e1_e2_no);
	elementCallback(0, 4, this->e1_e3_ni);
	elementCallback(0, 3, this->e1_e3_no);
	elementCallback(0, 5, this->e1_no_ni);
	elementCallback(0, 7, this->e2_e3_ni);
	elementCallback(0, 6, this->e2_e3_no);
	elementCallback(0, 8, this->e2_no_ni);
	elementCallback(0, 9, this->e3_no_ni);
	elementCallback(1, 7, this->e1_e3_ni);
	elementCallback(1, 6, this->e1_e3_no);
	elementCallback(1, 8, this->e1_no_ni);
	elementCallback(1, 4, (-1.0)*this->e2_e3_ni);
	elementCallback(1, 3, (-1.0)*this->e2_e3_no);
	elementCallback(1, 5, (-1.0)*this->e2_no_ni);
	elementCallback(2, 7, (-1.0)*this->e1_e2_ni);
	elementCallback(2, 6, (-1.0)*this->e1_e2_no);
	elementCallback(2, 9, this->e1_no_ni);
	elementCallback(2, 2, this->e2_e3_ni);
	elementCallback(2, 1, this->e2_e3_no);
	elementCallback(2, 5, (-1.0)*this->e3_no_ni);
	elementCallback(3, 6, (-1.0)*this->e1_e2_e3);
	elementCallback(3, 8, this->e1_e2_ni);
	elementCallback(3, 9, this->e1_e3_ni);
	elementCallback(3, 0, this->e2_e3_ni);
	elementCallback(3, 1, (-1.0)*this->e2_no_ni);
	elementCallback(3, 3, (-1.0)*this->e3_no_ni);
	elementCallback(4, 7, (-1.0)*this->e1_e2_e3);
	elementCallback(4, 8, (-1.0)*this->e1_e2_no);
	elementCallback(4, 9, (-1.0)*this->e1_e3_no);
	elementCallback(4, 0, this->e2_e3_no);
	elementCallback(4, 2, this->e2_no_ni);
	elementCallback(4, 4, this->e3_no_ni);
	elementCallback(5, 4, this->e1_e2_ni);
	elementCallback(5, 3, this->e1_e2_no);
	elementCallback(5, 2, (-1.0)*this->e1_e3_ni);
	elementCallback(5, 1, (-1.0)*this->e1_e3_no);
	elementCallback(5, 9, this->e2_no_ni);
	elementCallback(5, 8, (-1.0)*this->e3_no_ni);
	elementCallback(6, 3, this->e1_e2_e3);
	elementCallback(6, 5, (-1.0)*this->e1_e2_ni);
	elementCallback(6, 0, (-1.0)*this->e1_e3_ni);
	elementCallback(6, 1, this->e1_no_ni);
	elementCallback(6, 9, this->e2_e3_ni);
	elementCallback(6, 6, (-1.0)*this->e3_no_ni);
	elementCallback(7, 4, this->e1_e2_e3);
	elementCallback(7, 5, this->e1_e2_no);
	elementCallback(7, 0, (-1.0)*this->e1_e3_no);
	elementCallback(7, 2, (-1.0)*this->e1_no_ni);
	elementCallback(7, 9, (-1.0)*this->e2_e3_no);
	elementCallback(7, 7, this->e3_no_ni);
	elementCallback(8, 1, (-1.0)*this->e1_e2_e3);
	elementCallback(8, 0, this->e1_e2_ni);
	elementCallback(8, 5, (-1.0)*this->e1_e3_ni);
	elementCallback(8, 3, this->e1_no_ni);
	elementCallback(8, 8, (-1.0)*this->e2_e3_ni);
	elementCallback(8, 6, this->e2_no_ni);
	elementCallback(9, 2, (-1.0)*this->e1_e2_e3);
	elementCallback(9, 0, this->e1_e2_no);
	elementCallback(9, 5, this->e1_e3_no);
	elementCallback(9, 4, (-1.0)*this->e1_no_ni);
	elementCallback(9, 8, this->e2_e3_no);
	elementCallback(9, 7, (-1.0)*this->e2_no_ni);
	elementCallback(10, 2, (-1.0)*this->e1_e2_ni);
	elementCallback(10, 1, this->e1_e2_no);
	elementCallback(10, 4, (-1.0)*this->e1_e3_ni);
	elementCallback(10, 3, this->e1_e3_no);
	elementCallback(10, 7, (-1.0)*this->e2_e3_ni);
	elementCallback(10, 6, this->e2_e3_no);
	elementCallback(11, 9, this->e1_e2_ni);
	elementCallback(11, 8, (-1.0)*this->e1_e3_ni);
	elementCallback(11, 6, this->e1_no_ni);
	elementCallback(11, 5, this->e2_e3_ni);
	elementCallback(11, 3, (-1.0)*this->e2_no_ni);
	elementCallback(11, 1, this->e3_no_ni);
	elementCallback(12, 9, (-1.0)*this->e1_e2_no);
	elementCallback(12, 8, this->e1_e3_no);
	elementCallback(12, 7, (-1.0)*this->e1_no_ni);
	elementCallback(12, 5, (-1.0)*this->e2_e3_no);
	elementCallback(12, 4, this->e2_no_ni);
	elementCallback(12, 2, (-1.0)*this->e3_no_ni);
	elementCallback(13, 9, (-1.0)*this->e1_e2_e3);
	elementCallback(13, 7, (-1.0)*this->e1_e3_ni);
	elementCallback(13, 6, this->e1_e3_no);
	elementCallback(13, 4, this->e2_e3_ni);
	elementCallback(13, 3, (-1.0)*this->e2_e3_no);
	elementCallback(13, 0, (-1.0)*this->e3_no_ni);
	elementCallback(14, 8, this->e1_e2_e3);
	elementCallback(14, 7, this->e1_e2_ni);
	elementCallback(14, 6, (-1.0)*this->e1_e2_no);
	elementCallback(14, 2, (-1.0)*this->e2_e3_ni);
	elementCallback(14, 1, this->e2_e3_no);
	elementCallback(14, 0, this->e2_no_ni);
	elementCallback(15, 5, (-1.0)*this->e1_e2_e3);
	elementCallback(15, 4, (-1.0)*this->e1_e2_ni);
	elementCallback(15, 3, this->e1_e2_no);
	elementCallback(15, 2, this->e1_e3_ni);
	elementCallback(15, 1, (-1.0)*this->e1_e3_no);
	elementCallback(15, 0, (-1.0)*this->e1_no_ni);
}

void Trivector::ToColumnMatrix(std::function<void(int, double)> elementCallback) const
{
	elementCallback(0, this->e1_e2_e3);
	elementCallback(1, this->e1_e2_ni);
	elementCallback(2, this->e1_e2_no);
	elementCallback(3, this->e1_e3_ni);
	elementCallback(4, this->e1_e3_no);
	elementCallback(5, this->e1_no_ni);
	elementCallback(6, this->e2_e3_ni);
	elementCallback(7, this->e2_e3_no);
	elementCallback(8, this->e2_no_ni);
	elementCallback(9, this->e3_no_ni);
}

void Trivector::FromColumnMatrix(std::function<void(int, double&)> elementCallback)
{
	elementCallback(0, this->e1_e2_e3);
	elementCallback(1, this->e1_e2_ni);
	elementCallback(2, this->e1_e2_no);
	elementCallback(3, this->e1_e3_ni);
	elementCallback(4, this->e1_e3_no);
	elementCallback(5, this->e1_no_ni);
	elementCallback(6, this->e2_e3_ni);
	elementCallback(7, this->e2_e3_no);
	elementCallback(8, this->e2_no_ni);
	elementCallback(9, this->e3_no_ni);
}

