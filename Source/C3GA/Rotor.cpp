// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Rotor.h"
#include "Scalar.h"
#include "Vector.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C3GA;

Rotor::Rotor()
{
	this->_1 = 0.0;
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

Rotor::Rotor(double _1, double e1_e2, double e1_e3, double e1_no, double e1_ni, double e2_e3, double e2_no, double e2_ni, double e3_no, double e3_ni, double no_ni)
{
	this->_1 = _1;
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

Rotor::Rotor(const Scalar& scalar)
{
	this->_1 = scalar._1;
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

Rotor::Rotor(const Bivector& bivector)
{
	this->_1 = 0.0;
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

Rotor::Rotor(const Rotor& rotor)
{
	this->_1 = rotor._1;
	this->e1_e2 = rotor.e1_e2;
	this->e1_e3 = rotor.e1_e3;
	this->e1_no = rotor.e1_no;
	this->e1_ni = rotor.e1_ni;
	this->e2_e3 = rotor.e2_e3;
	this->e2_no = rotor.e2_no;
	this->e2_ni = rotor.e2_ni;
	this->e3_no = rotor.e3_no;
	this->e3_ni = rotor.e3_ni;
	this->no_ni = rotor.no_ni;
}

bool Rotor::IsEqualTo(const Rotor& rotor, double epsilon /*= 1e-5*/) const
{
	if(::fabs(this->_1 - rotor._1) >= epsilon)
		return false;

	if(::fabs(this->e1_e2 - rotor.e1_e2) >= epsilon)
		return false;

	if(::fabs(this->e1_e3 - rotor.e1_e3) >= epsilon)
		return false;

	if(::fabs(this->e1_no - rotor.e1_no) >= epsilon)
		return false;

	if(::fabs(this->e1_ni - rotor.e1_ni) >= epsilon)
		return false;

	if(::fabs(this->e2_e3 - rotor.e2_e3) >= epsilon)
		return false;

	if(::fabs(this->e2_no - rotor.e2_no) >= epsilon)
		return false;

	if(::fabs(this->e2_ni - rotor.e2_ni) >= epsilon)
		return false;

	if(::fabs(this->e3_no - rotor.e3_no) >= epsilon)
		return false;

	if(::fabs(this->e3_ni - rotor.e3_ni) >= epsilon)
		return false;

	if(::fabs(this->no_ni - rotor.no_ni) >= epsilon)
		return false;

	return true;
}

void Rotor::GetScalar(Scalar& scalar) const
{
	scalar._1 = this->_1;
}

void Rotor::GetBivector(Bivector& bivector) const
{
	bivector.e1_e2 = this->e1_e2;
	bivector.e1_e3 = this->e1_e3;
	bivector.e1_no = this->e1_no;
	bivector.e1_ni = this->e1_ni;
	bivector.e2_e3 = this->e2_e3;
	bivector.e2_no = this->e2_no;
	bivector.e2_ni = this->e2_ni;
	bivector.e3_no = this->e3_no;
	bivector.e3_ni = this->e3_ni;
	bivector.no_ni = this->no_ni;
}

void Rotor::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
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

void Rotor::Add(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = bivectorB.e1_e2;
	this->e1_e3 = bivectorB.e1_e3;
	this->e1_no = bivectorB.e1_no;
	this->e1_ni = bivectorB.e1_ni;
	this->e2_e3 = bivectorB.e2_e3;
	this->e2_no = bivectorB.e2_no;
	this->e2_ni = bivectorB.e2_ni;
	this->e3_no = bivectorB.e3_no;
	this->e3_ni = bivectorB.e3_ni;
	this->no_ni = bivectorB.no_ni;
}

void Rotor::Add(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 + rotorB._1;
	this->e1_e2 = rotorB.e1_e2;
	this->e1_e3 = rotorB.e1_e3;
	this->e1_no = rotorB.e1_no;
	this->e1_ni = rotorB.e1_ni;
	this->e2_e3 = rotorB.e2_e3;
	this->e2_no = rotorB.e2_no;
	this->e2_ni = rotorB.e2_ni;
	this->e3_no = rotorB.e3_no;
	this->e3_ni = rotorB.e3_ni;
	this->no_ni = rotorB.no_ni;
}

void Rotor::Add(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = scalarB._1;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
}

void Rotor::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::Add(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = rotorB._1;
	this->e1_e2 = bivectorA.e1_e2 + rotorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 + rotorB.e1_e3;
	this->e1_no = bivectorA.e1_no + rotorB.e1_no;
	this->e1_ni = bivectorA.e1_ni + rotorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 + rotorB.e2_e3;
	this->e2_no = bivectorA.e2_no + rotorB.e2_no;
	this->e2_ni = bivectorA.e2_ni + rotorB.e2_ni;
	this->e3_no = bivectorA.e3_no + rotorB.e3_no;
	this->e3_ni = bivectorA.e3_ni + rotorB.e3_ni;
	this->no_ni = bivectorA.no_ni + rotorB.no_ni;
}

void Rotor::Add(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 + scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
}

void Rotor::Add(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 + bivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 + bivectorB.e1_e3;
	this->e1_no = rotorA.e1_no + bivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni + bivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 + bivectorB.e2_e3;
	this->e2_no = rotorA.e2_no + bivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni + bivectorB.e2_ni;
	this->e3_no = rotorA.e3_no + bivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni + bivectorB.e3_ni;
	this->no_ni = rotorA.no_ni + bivectorB.no_ni;
}

void Rotor::Add(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 + rotorB._1;
	this->e1_e2 = rotorA.e1_e2 + rotorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 + rotorB.e1_e3;
	this->e1_no = rotorA.e1_no + rotorB.e1_no;
	this->e1_ni = rotorA.e1_ni + rotorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 + rotorB.e2_e3;
	this->e2_no = rotorA.e2_no + rotorB.e2_no;
	this->e2_ni = rotorA.e2_ni + rotorB.e2_ni;
	this->e3_no = rotorA.e3_no + rotorB.e3_no;
	this->e3_ni = rotorA.e3_ni + rotorB.e3_ni;
	this->no_ni = rotorA.no_ni + rotorB.no_ni;
}

void Rotor::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
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

void Rotor::Subtract(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = scalarA._1;
	this->e1_e2 = -bivectorB.e1_e2;
	this->e1_e3 = -bivectorB.e1_e3;
	this->e1_no = -bivectorB.e1_no;
	this->e1_ni = -bivectorB.e1_ni;
	this->e2_e3 = -bivectorB.e2_e3;
	this->e2_no = -bivectorB.e2_no;
	this->e2_ni = -bivectorB.e2_ni;
	this->e3_no = -bivectorB.e3_no;
	this->e3_ni = -bivectorB.e3_ni;
	this->no_ni = -bivectorB.no_ni;
}

void Rotor::Subtract(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 - rotorB._1;
	this->e1_e2 = -rotorB.e1_e2;
	this->e1_e3 = -rotorB.e1_e3;
	this->e1_no = -rotorB.e1_no;
	this->e1_ni = -rotorB.e1_ni;
	this->e2_e3 = -rotorB.e2_e3;
	this->e2_no = -rotorB.e2_no;
	this->e2_ni = -rotorB.e2_ni;
	this->e3_no = -rotorB.e3_no;
	this->e3_ni = -rotorB.e3_ni;
	this->no_ni = -rotorB.no_ni;
}

void Rotor::Subtract(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = -scalarB._1;
	this->e1_e2 = bivectorA.e1_e2;
	this->e1_e3 = bivectorA.e1_e3;
	this->e1_no = bivectorA.e1_no;
	this->e1_ni = bivectorA.e1_ni;
	this->e2_e3 = bivectorA.e2_e3;
	this->e2_no = bivectorA.e2_no;
	this->e2_ni = bivectorA.e2_ni;
	this->e3_no = bivectorA.e3_no;
	this->e3_ni = bivectorA.e3_ni;
	this->no_ni = bivectorA.no_ni;
}

void Rotor::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::Subtract(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = -rotorB._1;
	this->e1_e2 = bivectorA.e1_e2 - rotorB.e1_e2;
	this->e1_e3 = bivectorA.e1_e3 - rotorB.e1_e3;
	this->e1_no = bivectorA.e1_no - rotorB.e1_no;
	this->e1_ni = bivectorA.e1_ni - rotorB.e1_ni;
	this->e2_e3 = bivectorA.e2_e3 - rotorB.e2_e3;
	this->e2_no = bivectorA.e2_no - rotorB.e2_no;
	this->e2_ni = bivectorA.e2_ni - rotorB.e2_ni;
	this->e3_no = bivectorA.e3_no - rotorB.e3_no;
	this->e3_ni = bivectorA.e3_ni - rotorB.e3_ni;
	this->no_ni = bivectorA.no_ni - rotorB.no_ni;
}

void Rotor::Subtract(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 - scalarB._1;
	this->e1_e2 = rotorA.e1_e2;
	this->e1_e3 = rotorA.e1_e3;
	this->e1_no = rotorA.e1_no;
	this->e1_ni = rotorA.e1_ni;
	this->e2_e3 = rotorA.e2_e3;
	this->e2_no = rotorA.e2_no;
	this->e2_ni = rotorA.e2_ni;
	this->e3_no = rotorA.e3_no;
	this->e3_ni = rotorA.e3_ni;
	this->no_ni = rotorA.no_ni;
}

void Rotor::Subtract(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA._1;
	this->e1_e2 = rotorA.e1_e2 - bivectorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 - bivectorB.e1_e3;
	this->e1_no = rotorA.e1_no - bivectorB.e1_no;
	this->e1_ni = rotorA.e1_ni - bivectorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 - bivectorB.e2_e3;
	this->e2_no = rotorA.e2_no - bivectorB.e2_no;
	this->e2_ni = rotorA.e2_ni - bivectorB.e2_ni;
	this->e3_no = rotorA.e3_no - bivectorB.e3_no;
	this->e3_ni = rotorA.e3_ni - bivectorB.e3_ni;
	this->no_ni = rotorA.no_ni - bivectorB.no_ni;
}

void Rotor::Subtract(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 - rotorB._1;
	this->e1_e2 = rotorA.e1_e2 - rotorB.e1_e2;
	this->e1_e3 = rotorA.e1_e3 - rotorB.e1_e3;
	this->e1_no = rotorA.e1_no - rotorB.e1_no;
	this->e1_ni = rotorA.e1_ni - rotorB.e1_ni;
	this->e2_e3 = rotorA.e2_e3 - rotorB.e2_e3;
	this->e2_no = rotorA.e2_no - rotorB.e2_no;
	this->e2_ni = rotorA.e2_ni - rotorB.e2_ni;
	this->e3_no = rotorA.e3_no - rotorB.e3_no;
	this->e3_ni = rotorA.e3_ni - rotorB.e3_ni;
	this->no_ni = rotorA.no_ni - rotorB.no_ni;
}

void Rotor::InnerProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
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

void Rotor::InnerProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
}

void Rotor::InnerProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
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

void Rotor::InnerProduct(const Vector& vectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * bivectorB.e1_e3 + bivectorA.e1_ni * bivectorB.e1_no + bivectorA.e1_no * bivectorB.e1_ni + (-1.0) * bivectorA.e2_e3 * bivectorB.e2_e3 + bivectorA.e2_ni * bivectorB.e2_no + bivectorA.e2_no * bivectorB.e2_ni + bivectorA.e3_ni * bivectorB.e3_no + bivectorA.e3_no * bivectorB.e3_ni + bivectorA.no_ni * bivectorB.no_ni;
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

void Rotor::InnerProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Bivector& bivectorA, const Rotor& rotorB)
{
	this->_1 = (-1.0) * bivectorA.e1_e2 * rotorB.e1_e2 + (-1.0) * bivectorA.e1_e3 * rotorB.e1_e3 + bivectorA.e1_ni * rotorB.e1_no + bivectorA.e1_no * rotorB.e1_ni + (-1.0) * bivectorA.e2_e3 * rotorB.e2_e3 + bivectorA.e2_ni * rotorB.e2_no + bivectorA.e2_no * rotorB.e2_ni + bivectorA.e3_ni * rotorB.e3_no + bivectorA.e3_no * rotorB.e3_ni + bivectorA.no_ni * rotorB.no_ni;
	this->e1_e2 = bivectorA.e1_e2 * rotorB._1;
	this->e1_e3 = bivectorA.e1_e3 * rotorB._1;
	this->e1_no = bivectorA.e1_no * rotorB._1;
	this->e1_ni = bivectorA.e1_ni * rotorB._1;
	this->e2_e3 = bivectorA.e2_e3 * rotorB._1;
	this->e2_no = bivectorA.e2_no * rotorB._1;
	this->e2_ni = bivectorA.e2_ni * rotorB._1;
	this->e3_no = bivectorA.e3_no * rotorB._1;
	this->e3_ni = bivectorA.e3_ni * rotorB._1;
	this->no_ni = bivectorA.no_ni * rotorB._1;
}

void Rotor::InnerProduct(const Trivector& trivectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = (-1.0) * trivectorA.e1_e2_e3 * trivectorB.e1_e2_e3 + trivectorA.e1_e2_ni * trivectorB.e1_e2_no + trivectorA.e1_e2_no * trivectorB.e1_e2_ni + trivectorA.e1_e3_ni * trivectorB.e1_e3_no + trivectorA.e1_e3_no * trivectorB.e1_e3_ni + trivectorA.e1_no_ni * trivectorB.e1_no_ni + trivectorA.e2_e3_ni * trivectorB.e2_e3_no + trivectorA.e2_e3_no * trivectorB.e2_e3_ni + trivectorA.e2_no_ni * trivectorB.e2_no_ni + trivectorA.e3_no_ni * trivectorB.e3_no_ni;
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

void Rotor::InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
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

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::InnerProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
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

void Rotor::InnerProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Bivector& bivectorB)
{
	this->_1 = rotorA.no_ni * bivectorB.no_ni + (-1.0) * rotorA.e1_e2 * bivectorB.e1_e2 + (-1.0) * rotorA.e1_e3 * bivectorB.e1_e3 + rotorA.e1_ni * bivectorB.e1_no + rotorA.e1_no * bivectorB.e1_ni + (-1.0) * rotorA.e2_e3 * bivectorB.e2_e3 + rotorA.e2_ni * bivectorB.e2_no + rotorA.e2_no * bivectorB.e2_ni + rotorA.e3_ni * bivectorB.e3_no + rotorA.e3_no * bivectorB.e3_ni;
	this->e1_e2 = rotorA._1 * bivectorB.e1_e2;
	this->e1_e3 = rotorA._1 * bivectorB.e1_e3;
	this->e1_no = rotorA._1 * bivectorB.e1_no;
	this->e1_ni = rotorA._1 * bivectorB.e1_ni;
	this->e2_e3 = rotorA._1 * bivectorB.e2_e3;
	this->e2_no = rotorA._1 * bivectorB.e2_no;
	this->e2_ni = rotorA._1 * bivectorB.e2_ni;
	this->e3_no = rotorA._1 * bivectorB.e3_no;
	this->e3_ni = rotorA._1 * bivectorB.e3_ni;
	this->no_ni = rotorA._1 * bivectorB.no_ni;
}

void Rotor::InnerProduct(const Rotor& rotorA, const Rotor& rotorB)
{
	this->_1 = rotorA._1 * rotorB._1 + rotorA.no_ni * rotorB.no_ni + (-1.0) * rotorA.e1_e2 * rotorB.e1_e2 + (-1.0) * rotorA.e1_e3 * rotorB.e1_e3 + rotorA.e1_ni * rotorB.e1_no + rotorA.e1_no * rotorB.e1_ni + (-1.0) * rotorA.e2_e3 * rotorB.e2_e3 + rotorA.e2_ni * rotorB.e2_no + rotorA.e2_no * rotorB.e2_ni + rotorA.e3_ni * rotorB.e3_no + rotorA.e3_no * rotorB.e3_ni;
	this->e1_e2 = rotorA._1 * rotorB.e1_e2 + rotorA.e1_e2 * rotorB._1;
	this->e1_e3 = rotorA._1 * rotorB.e1_e3 + rotorA.e1_e3 * rotorB._1;
	this->e1_no = rotorA._1 * rotorB.e1_no + rotorA.e1_no * rotorB._1;
	this->e1_ni = rotorA._1 * rotorB.e1_ni + rotorA.e1_ni * rotorB._1;
	this->e2_e3 = rotorA._1 * rotorB.e2_e3 + rotorA.e2_e3 * rotorB._1;
	this->e2_no = rotorA._1 * rotorB.e2_no + rotorA.e2_no * rotorB._1;
	this->e2_ni = rotorA._1 * rotorB.e2_ni + rotorA.e2_ni * rotorB._1;
	this->e3_no = rotorA._1 * rotorB.e3_no + rotorA.e3_no * rotorB._1;
	this->e3_ni = rotorA._1 * rotorB.e3_ni + rotorA.e3_ni * rotorB._1;
	this->no_ni = rotorA._1 * rotorB.no_ni + rotorA.no_ni * rotorB._1;
}

void Rotor::OuterProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
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

void Rotor::OuterProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
}

void Rotor::OuterProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Bivector& bivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Trivector& trivectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Quadvector& quadvectorA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::OuterProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
}

void Rotor::GeometricProduct(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 * scalarB._1;
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

void Rotor::GeometricProduct(const Scalar& scalarA, const Bivector& bivectorB)
{
	this->_1 = 0.0;
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

void Rotor::GeometricProduct(const Scalar& scalarA, const Rotor& rotorB)
{
	this->_1 = scalarA._1 * rotorB._1;
	this->e1_e2 = scalarA._1 * rotorB.e1_e2;
	this->e1_e3 = scalarA._1 * rotorB.e1_e3;
	this->e1_no = scalarA._1 * rotorB.e1_no;
	this->e1_ni = scalarA._1 * rotorB.e1_ni;
	this->e2_e3 = scalarA._1 * rotorB.e2_e3;
	this->e2_no = scalarA._1 * rotorB.e2_no;
	this->e2_ni = scalarA._1 * rotorB.e2_ni;
	this->e3_no = scalarA._1 * rotorB.e3_no;
	this->e3_ni = scalarA._1 * rotorB.e3_ni;
	this->no_ni = scalarA._1 * rotorB.no_ni;
}

void Rotor::GeometricProduct(const Vector& vectorA, const Vector& vectorB)
{
	this->_1 = vectorA.e1 * vectorB.e1 + vectorA.e2 * vectorB.e2 + vectorA.e3 * vectorB.e3 + (-1.0) * vectorA.ni * vectorB.no + (-1.0) * vectorA.no * vectorB.ni;
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

void Rotor::GeometricProduct(const Bivector& bivectorA, const Scalar& scalarB)
{
	this->_1 = 0.0;
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

void Rotor::GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = 0.0;
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

void Rotor::GeometricProduct(const Quadvector& quadvectorA, const Quadvector& quadvectorB)
{
	this->_1 = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e1_e2 = (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e2_e3_no_ni + quadvectorA.e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e1_e3 = quadvectorA.e1_e2_no_ni * quadvectorB.e2_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->e1_no = (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e2_e3_no_ni + quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->e1_ni = quadvectorA.e1_e2_e3_ni * quadvectorB.e2_e3_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e2_e3 = (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e3_no_ni + quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->e2_no = quadvectorA.e1_e2_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->e2_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e3_no_ni + quadvectorA.e1_e3_no_ni * quadvectorB.e1_e2_e3_ni;
	this->e3_no = (-1.0) * quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_no_ni + quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_no;
	this->e3_ni = quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_no_ni + (-1.0) * quadvectorA.e1_e2_no_ni * quadvectorB.e1_e2_e3_ni;
	this->no_ni = (-1.0) * quadvectorA.e1_e2_e3_ni * quadvectorB.e1_e2_e3_no + quadvectorA.e1_e2_e3_no * quadvectorB.e1_e2_e3_ni;
}

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->_1 = 0.0;
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

void Rotor::GeometricProduct(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->_1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
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

void Rotor::GeometricProduct(const Rotor& rotorA, const Scalar& scalarB)
{
	this->_1 = rotorA._1 * scalarB._1;
	this->e1_e2 = rotorA.e1_e2 * scalarB._1;
	this->e1_e3 = rotorA.e1_e3 * scalarB._1;
	this->e1_no = rotorA.e1_no * scalarB._1;
	this->e1_ni = rotorA.e1_ni * scalarB._1;
	this->e2_e3 = rotorA.e2_e3 * scalarB._1;
	this->e2_no = rotorA.e2_no * scalarB._1;
	this->e2_ni = rotorA.e2_ni * scalarB._1;
	this->e3_no = rotorA.e3_no * scalarB._1;
	this->e3_ni = rotorA.e3_ni * scalarB._1;
	this->no_ni = rotorA.no_ni * scalarB._1;
}

void Rotor::Reverse(const Rotor& rotorA)
{
	this->_1 = rotorA._1;
	this->e1_e2 = (-1.0) * rotorA.e1_e2;
	this->e1_e3 = (-1.0) * rotorA.e1_e3;
	this->e1_no = (-1.0) * rotorA.e1_no;
	this->e1_ni = (-1.0) * rotorA.e1_ni;
	this->e2_e3 = (-1.0) * rotorA.e2_e3;
	this->e2_no = (-1.0) * rotorA.e2_no;
	this->e2_ni = (-1.0) * rotorA.e2_ni;
	this->e3_no = (-1.0) * rotorA.e3_no;
	this->e3_ni = (-1.0) * rotorA.e3_ni;
	this->no_ni = (-1.0) * rotorA.no_ni;
}

double Rotor::SquareMagnitude() const
{
	return (this->_1 * this->_1) + (this->e1_e2 * this->e1_e2) + (-1)*(this->no_ni * this->no_ni) + (this->e1_e3 * this->e1_e3) + (-2)*this->e1_ni*this->e1_no + (this->e2_e3 * this->e2_e3) + (-2)*this->e2_ni*this->e2_no + (-2)*this->e3_ni*this->e3_no;
}

void Rotor::GetMatrixSize(int& numRows, int& numCols) const
{
	numRows = 16;
	numCols = 11;
}

void Rotor::ToSquareMatrix(std::function<void(int, int, double)> elementCallback) const
{
	elementCallback(0, 0, this->_1);
	elementCallback(0, 10, this->no_ni);
	elementCallback(0, 1, (-1.0)*this->e1_e2);
	elementCallback(0, 2, (-1.0)*this->e1_e3);
	elementCallback(0, 4, this->e1_ni);
	elementCallback(0, 3, this->e1_no);
	elementCallback(0, 5, (-1.0)*this->e2_e3);
	elementCallback(0, 7, this->e2_ni);
	elementCallback(0, 6, this->e2_no);
	elementCallback(0, 9, this->e3_ni);
	elementCallback(0, 8, this->e3_no);
	elementCallback(1, 1, this->_1);
	elementCallback(1, 0, this->e1_e2);
	elementCallback(1, 5, (-1.0)*this->e1_e3);
	elementCallback(1, 7, this->e1_ni);
	elementCallback(1, 6, this->e1_no);
	elementCallback(1, 2, this->e2_e3);
	elementCallback(1, 4, (-1.0)*this->e2_ni);
	elementCallback(1, 3, (-1.0)*this->e2_no);
	elementCallback(2, 2, this->_1);
	elementCallback(2, 5, this->e1_e2);
	elementCallback(2, 0, this->e1_e3);
	elementCallback(2, 9, this->e1_ni);
	elementCallback(2, 8, this->e1_no);
	elementCallback(2, 1, (-1.0)*this->e2_e3);
	elementCallback(2, 4, (-1.0)*this->e3_ni);
	elementCallback(2, 3, (-1.0)*this->e3_no);
	elementCallback(3, 3, this->_1);
	elementCallback(3, 3, this->no_ni);
	elementCallback(3, 6, this->e1_e2);
	elementCallback(3, 8, this->e1_e3);
	elementCallback(3, 0, this->e1_ni);
	elementCallback(3, 10, (-1.0)*this->e1_ni);
	elementCallback(3, 1, (-1.0)*this->e2_ni);
	elementCallback(3, 2, (-1.0)*this->e3_ni);
	elementCallback(4, 4, this->_1);
	elementCallback(4, 4, (-1.0)*this->no_ni);
	elementCallback(4, 7, this->e1_e2);
	elementCallback(4, 9, this->e1_e3);
	elementCallback(4, 0, this->e1_no);
	elementCallback(4, 10, this->e1_no);
	elementCallback(4, 1, (-1.0)*this->e2_no);
	elementCallback(4, 2, (-1.0)*this->e3_no);
	elementCallback(5, 5, this->_1);
	elementCallback(5, 2, (-1.0)*this->e1_e2);
	elementCallback(5, 1, this->e1_e3);
	elementCallback(5, 0, this->e2_e3);
	elementCallback(5, 9, this->e2_ni);
	elementCallback(5, 8, this->e2_no);
	elementCallback(5, 7, (-1.0)*this->e3_ni);
	elementCallback(5, 6, (-1.0)*this->e3_no);
	elementCallback(6, 6, this->_1);
	elementCallback(6, 6, this->no_ni);
	elementCallback(6, 3, (-1.0)*this->e1_e2);
	elementCallback(6, 1, this->e1_ni);
	elementCallback(6, 8, this->e2_e3);
	elementCallback(6, 0, this->e2_ni);
	elementCallback(6, 10, (-1.0)*this->e2_ni);
	elementCallback(6, 5, (-1.0)*this->e3_ni);
	elementCallback(7, 7, this->_1);
	elementCallback(7, 7, (-1.0)*this->no_ni);
	elementCallback(7, 4, (-1.0)*this->e1_e2);
	elementCallback(7, 1, this->e1_no);
	elementCallback(7, 9, this->e2_e3);
	elementCallback(7, 0, this->e2_no);
	elementCallback(7, 10, this->e2_no);
	elementCallback(7, 5, (-1.0)*this->e3_no);
	elementCallback(8, 8, this->_1);
	elementCallback(8, 8, this->no_ni);
	elementCallback(8, 3, (-1.0)*this->e1_e3);
	elementCallback(8, 2, this->e1_ni);
	elementCallback(8, 6, (-1.0)*this->e2_e3);
	elementCallback(8, 5, this->e2_ni);
	elementCallback(8, 0, this->e3_ni);
	elementCallback(8, 10, (-1.0)*this->e3_ni);
	elementCallback(9, 9, this->_1);
	elementCallback(9, 9, (-1.0)*this->no_ni);
	elementCallback(9, 4, (-1.0)*this->e1_e3);
	elementCallback(9, 2, this->e1_no);
	elementCallback(9, 7, (-1.0)*this->e2_e3);
	elementCallback(9, 5, this->e2_no);
	elementCallback(9, 0, this->e3_no);
	elementCallback(9, 10, this->e3_no);
	elementCallback(10, 10, (-1.0)*this->_1);
	elementCallback(10, 0, (-1.0)*this->no_ni);
	elementCallback(10, 4, (-1.0)*this->e1_ni);
	elementCallback(10, 3, this->e1_no);
	elementCallback(10, 7, (-1.0)*this->e2_ni);
	elementCallback(10, 6, this->e2_no);
	elementCallback(10, 9, (-1.0)*this->e3_ni);
	elementCallback(10, 8, this->e3_no);
	elementCallback(11, 8, this->e1_e2);
	elementCallback(11, 6, (-1.0)*this->e1_e3);
	elementCallback(11, 5, this->e1_ni);
	elementCallback(11, 3, this->e2_e3);
	elementCallback(11, 2, (-1.0)*this->e2_ni);
	elementCallback(11, 1, this->e3_ni);
	elementCallback(12, 9, this->e1_e2);
	elementCallback(12, 7, (-1.0)*this->e1_e3);
	elementCallback(12, 5, this->e1_no);
	elementCallback(12, 4, this->e2_e3);
	elementCallback(12, 2, (-1.0)*this->e2_no);
	elementCallback(12, 1, this->e3_no);
	elementCallback(13, 1, (-1.0)*this->no_ni);
	elementCallback(13, 10, (-1.0)*this->e1_e2);
	elementCallback(13, 7, (-1.0)*this->e1_ni);
	elementCallback(13, 6, this->e1_no);
	elementCallback(13, 4, this->e2_ni);
	elementCallback(13, 3, (-1.0)*this->e2_no);
	elementCallback(14, 2, (-1.0)*this->no_ni);
	elementCallback(14, 10, (-1.0)*this->e1_e3);
	elementCallback(14, 9, (-1.0)*this->e1_ni);
	elementCallback(14, 8, this->e1_no);
	elementCallback(14, 4, this->e3_ni);
	elementCallback(14, 3, (-1.0)*this->e3_no);
	elementCallback(15, 5, (-1.0)*this->no_ni);
	elementCallback(15, 10, (-1.0)*this->e2_e3);
	elementCallback(15, 9, (-1.0)*this->e2_ni);
	elementCallback(15, 8, this->e2_no);
	elementCallback(15, 7, this->e3_ni);
	elementCallback(15, 6, (-1.0)*this->e3_no);
}

void Rotor::ToColumnMatrix(std::function<void(int, double)> elementCallback) const
{
	elementCallback(0, this->_1);
	elementCallback(1, this->e1_e2);
	elementCallback(2, this->e1_e3);
	elementCallback(3, this->e1_ni);
	elementCallback(4, this->e1_no);
	elementCallback(5, this->e2_e3);
	elementCallback(6, this->e2_ni);
	elementCallback(7, this->e2_no);
	elementCallback(8, this->e3_ni);
	elementCallback(9, this->e3_no);
	elementCallback(10, this->no_ni);
}

void Rotor::FromColumnMatrix(std::function<void(int, double&)> elementCallback)
{
	elementCallback(0, this->_1);
	elementCallback(1, this->e1_e2);
	elementCallback(2, this->e1_e3);
	elementCallback(3, this->e1_ni);
	elementCallback(4, this->e1_no);
	elementCallback(5, this->e2_e3);
	elementCallback(6, this->e2_ni);
	elementCallback(7, this->e2_no);
	elementCallback(8, this->e3_ni);
	elementCallback(9, this->e3_no);
	elementCallback(10, this->no_ni);
}

