#include "Vector.h"
#include "Scalar.h"
#include "Bivector.h"
#include "Trivector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C2GA;

Vector::Vector()
{
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->no = 0.0;
	this->ni = 0.0;
}

Vector::Vector(double e1, double e2, double no, double ni)
{
	this->e1 = e1;
	this->e2 = e2;
	this->no = no;
	this->ni = ni;
}

Vector::Vector(const Vector& vector)
{
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->no = vector.no;
	this->ni = vector.ni;
}

void Vector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->no = vectorA.no + vectorB.no;
	this->ni = vectorA.ni + vectorB.ni;
}

void Vector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->no = vectorA.no - vectorB.no;
	this->ni = vectorA.ni - vectorB.ni;
}

void Vector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
}

void Vector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + bivectorA.no_ni * vectorB.ni;
}

void Vector::InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->e1 = bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + bivectorA.e2_ni * trivectorB.e2_no_ni;
}

void Vector::InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->e1 = trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + trivectorA.e1_no_ni * bivectorB.e1_ni + trivectorA.e2_no_ni * bivectorB.e2_ni;
}

void Vector::InnerProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
}

void Vector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->e1 = psuedoscalarA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_ni;
}

void Vector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::GeometricProduct(const Trivector& trivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * trivectorA.e2_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->e2 = trivectorA.e1_no_ni * psuedoscalarB.e1_e2_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * psuedoscalarB.e1_e2_no_ni;
	this->ni = trivectorA.e1_e2_ni * psuedoscalarB.e1_e2_no_ni;
}

void Vector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Trivector& trivectorB)
{
	this->e1 = psuedoscalarA.e1_e2_no_ni * trivectorB.e2_no_ni;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_no_ni;
	this->no = psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_no_ni * trivectorB.e1_e2_ni;
}

