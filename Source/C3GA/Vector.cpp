#include "Vector.h"
#include "Scalar.h"
#include "Bivector.h"
#include "Trivector.h"
#include "Quadvector.h"
#include "PsuedoScalar.h"
#include "Multivector.h"

using namespace C3GA;

Vector::Vector(double e1, double e2, double e3, double no, double ni)
{
	this->e1 = e1;
	this->e2 = e2;
	this->e3 = e3;
	this->no = no;
	this->ni = ni;
}

Vector::Vector(const Vector& vector)
{
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->e3 = vector.e3;
	this->no = vector.no;
	this->ni = vector.ni;
}

void Vector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->e3 = vectorA.e3 + vectorB.e3;
	this->no = vectorA.no + vectorB.no;
	this->ni = vectorA.ni + vectorB.ni;
}

void Vector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->e3 = vectorA.e3 - vectorB.e3;
	this->no = vectorA.no - vectorB.no;
	this->ni = vectorA.ni - vectorB.ni;
}

void Vector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e1_e3 + vectorA.ni * bivectorB.e1_no + vectorA.no * bivectorB.e1_ni;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e2_no + vectorA.no * bivectorB.e2_ni;
	this->e3 = vectorA.e1 * bivectorB.e1_e3 + vectorA.e2 * bivectorB.e2_e3 + vectorA.ni * bivectorB.e3_no + vectorA.no * bivectorB.e3_ni;
	this->no = vectorA.e1 * bivectorB.e1_no + vectorA.e2 * bivectorB.e2_no + vectorA.e3 * bivectorB.e3_no + vectorA.no * bivectorB.no_ni;
	this->ni = vectorA.e1 * bivectorB.e1_ni + vectorA.e2 * bivectorB.e2_ni + vectorA.e3 * bivectorB.e3_ni + (-1.0) * vectorA.ni * bivectorB.no_ni;
}

void Vector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + bivectorA.e1_e3 * vectorB.e3 + (-1.0) * bivectorA.e1_ni * vectorB.no + (-1.0) * bivectorA.e1_no * vectorB.ni;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3 + (-1.0) * bivectorA.e2_ni * vectorB.no + (-1.0) * bivectorA.e2_no * vectorB.ni;
	this->e3 = (-1.0) * bivectorA.e1_e3 * vectorB.e1 + (-1.0) * bivectorA.e2_e3 * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.no + (-1.0) * bivectorA.e3_no * vectorB.ni;
	this->no = (-1.0) * bivectorA.e1_no * vectorB.e1 + (-1.0) * bivectorA.e2_no * vectorB.e2 + (-1.0) * bivectorA.e3_no * vectorB.e3 + (-1.0) * bivectorA.no_ni * vectorB.no;
	this->ni = (-1.0) * bivectorA.e1_ni * vectorB.e1 + (-1.0) * bivectorA.e2_ni * vectorB.e2 + (-1.0) * bivectorA.e3_ni * vectorB.e3 + bivectorA.no_ni * vectorB.ni;
}

void Vector::InnerProduct(const Bivector& bivectorA, const Trivector& trivectorB)
{
	this->e1 = (-1.0) * bivectorA.e2_e3 * trivectorB.e1_e2_e3 + bivectorA.e2_ni * trivectorB.e1_e2_no + bivectorA.e2_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e1_e3_no + bivectorA.e3_no * trivectorB.e1_e3_ni + bivectorA.no_ni * trivectorB.e1_no_ni;
	this->e2 = bivectorA.e1_e3 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e2_ni + bivectorA.e3_ni * trivectorB.e2_e3_no + bivectorA.e3_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e2_no_ni;
	this->e3 = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_e3 + (-1.0) * bivectorA.e1_ni * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_e3_ni + (-1.0) * bivectorA.e2_ni * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_e3_ni + bivectorA.no_ni * trivectorB.e3_no_ni;
	this->no = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_no + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_no + (-1.0) * bivectorA.e1_no * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_no + (-1.0) * bivectorA.e2_no * trivectorB.e2_no_ni + (-1.0) * bivectorA.e3_no * trivectorB.e3_no_ni;
	this->ni = (-1.0) * bivectorA.e1_e2 * trivectorB.e1_e2_ni + (-1.0) * bivectorA.e1_e3 * trivectorB.e1_e3_ni + bivectorA.e1_ni * trivectorB.e1_no_ni + (-1.0) * bivectorA.e2_e3 * trivectorB.e2_e3_ni + bivectorA.e2_ni * trivectorB.e2_no_ni + bivectorA.e3_ni * trivectorB.e3_no_ni;
}

void Vector::InnerProduct(const Trivector& trivectorA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e2_e3 + trivectorA.e1_e2_ni * bivectorB.e2_no + trivectorA.e1_e2_no * bivectorB.e2_ni + trivectorA.e1_e3_ni * bivectorB.e3_no + trivectorA.e1_e3_no * bivectorB.e3_ni + trivectorA.e1_no_ni * bivectorB.no_ni;
	this->e2 = trivectorA.e1_e2_e3 * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_ni + trivectorA.e2_e3_ni * bivectorB.e3_no + trivectorA.e2_e3_no * bivectorB.e3_ni + trivectorA.e2_no_ni * bivectorB.no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_e3 * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_no + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_no * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_no * bivectorB.e1_e3 + (-1.0) * trivectorA.e1_no_ni * bivectorB.e1_no + (-1.0) * trivectorA.e2_e3_no * bivectorB.e2_e3 + (-1.0) * trivectorA.e2_no_ni * bivectorB.e2_no + (-1.0) * trivectorA.e3_no_ni * bivectorB.e3_no;
	this->ni = (-1.0) * trivectorA.e1_e2_ni * bivectorB.e1_e2 + (-1.0) * trivectorA.e1_e3_ni * bivectorB.e1_e3 + trivectorA.e1_no_ni * bivectorB.e1_ni + (-1.0) * trivectorA.e2_e3_ni * bivectorB.e2_e3 + trivectorA.e2_no_ni * bivectorB.e2_ni + trivectorA.e3_no_ni * bivectorB.e3_ni;
}

void Vector::InnerProduct(const Trivector& trivectorA, const Quadvector& quadvectorB)
{
	this->e1 = (-1.0) * trivectorA.e2_e3_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e1_e2_e3_ni + (-1.0) * trivectorA.e2_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e2 = trivectorA.e1_e3_ni * quadvectorB.e1_e2_e3_no + trivectorA.e1_e3_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e3 = (-1.0) * trivectorA.e1_e2_ni * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_e3_ni + trivectorA.e1_no_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_no_ni * quadvectorB.e2_e3_no_ni;
	this->no = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_no + (-1.0) * trivectorA.e1_e2_no * quadvectorB.e1_e2_no_ni + (-1.0) * trivectorA.e1_e3_no * quadvectorB.e1_e3_no_ni + (-1.0) * trivectorA.e2_e3_no * quadvectorB.e2_e3_no_ni;
	this->ni = (-1.0) * trivectorA.e1_e2_e3 * quadvectorB.e1_e2_e3_ni + trivectorA.e1_e2_ni * quadvectorB.e1_e2_no_ni + trivectorA.e1_e3_ni * quadvectorB.e1_e3_no_ni + trivectorA.e2_e3_ni * quadvectorB.e2_e3_no_ni;
}

void Vector::InnerProduct(const Quadvector& quadvectorA, const Trivector& trivectorB)
{
	this->e1 = quadvectorA.e1_e2_e3_ni * trivectorB.e2_e3_no + quadvectorA.e1_e2_e3_no * trivectorB.e2_e3_ni + quadvectorA.e1_e2_no_ni * trivectorB.e2_no_ni + quadvectorA.e1_e3_no_ni * trivectorB.e3_no_ni;
	this->e2 = (-1.0) * quadvectorA.e1_e2_e3_ni * trivectorB.e1_e3_no + (-1.0) * quadvectorA.e1_e2_e3_no * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_no_ni + quadvectorA.e2_e3_no_ni * trivectorB.e3_no_ni;
	this->e3 = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_no + quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_no_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * trivectorB.e1_e2_e3 + quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_no + quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_no + quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_no;
	this->ni = quadvectorA.e1_e2_e3_ni * trivectorB.e1_e2_e3 + (-1.0) * quadvectorA.e1_e2_no_ni * trivectorB.e1_e2_ni + (-1.0) * quadvectorA.e1_e3_no_ni * trivectorB.e1_e3_ni + (-1.0) * quadvectorA.e2_e3_no_ni * trivectorB.e2_e3_ni;
}

void Vector::InnerProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * quadvectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = quadvectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * quadvectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * quadvectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
}

void Vector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
}

void Vector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
	this->no = scalarA._1 * vectorB.no;
	this->ni = scalarA._1 * vectorB.ni;
}

void Vector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
	this->no = vectorA.no * scalarB._1;
	this->ni = vectorA.ni * scalarB._1;
}

void Vector::GeometricProduct(const Quadvector& quadvectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * quadvectorA.e2_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e2 = quadvectorA.e1_e3_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->e3 = (-1.0) * quadvectorA.e1_e2_no_ni * psuedoscalarB.e1_e2_e3_no_ni;
	this->no = quadvectorA.e1_e2_e3_no * psuedoscalarB.e1_e2_e3_no_ni;
	this->ni = (-1.0) * quadvectorA.e1_e2_e3_ni * psuedoscalarB.e1_e2_e3_no_ni;
}

void Vector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Quadvector& quadvectorB)
{
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e2_e3_no_ni;
	this->e2 = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e3_no_ni;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_no_ni;
	this->no = psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_no;
	this->ni = (-1.0) * psuedoscalarA.e1_e2_e3_no_ni * quadvectorB.e1_e2_e3_ni;
}

