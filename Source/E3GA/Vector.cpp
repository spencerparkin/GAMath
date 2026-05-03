// NOTE: This is a generated source file!  Any edits you make will not be preserved.

#include "Vector.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Bivector.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E3GA;

Vector::Vector()
{
	this->e1 = 0.0;
	this->e2 = 0.0;
	this->e3 = 0.0;
}

Vector::Vector(double e1, double e2, double e3)
{
	this->e1 = e1;
	this->e2 = e2;
	this->e3 = e3;
}

Vector::Vector(const Vector& vector)
{
	this->e1 = vector.e1;
	this->e2 = vector.e2;
	this->e3 = vector.e3;
}

void Vector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
	this->e3 = vectorA.e3 + vectorB.e3;
}

void Vector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
	this->e3 = vectorA.e3 - vectorB.e3;
}

void Vector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
}

void Vector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e1_e2;
}

void Vector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
}

void Vector::InnerProduct(const Vector& vectorA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * vectorA.e2 * bivectorB.e1_e2 + vectorA.e3 * bivectorB.e3_e1;
	this->e2 = vectorA.e1 * bivectorB.e1_e2 + (-1.0) * vectorA.e3 * bivectorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * bivectorB.e3_e1 + vectorA.e2 * bivectorB.e2_e3;
}

void Vector::InnerProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2 + vectorA.e3 * rotorB.e3_e1;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1 + (-1.0) * vectorA.e3 * rotorB.e2_e3;
	this->e3 = (-1.0) * vectorA.e1 * rotorB.e3_e1 + vectorA.e2 * rotorB.e2_e3 + vectorA.e3 * rotorB._1;
}

void Vector::InnerProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * bivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
}

void Vector::InnerProduct(const Bivector& bivectorA, const Vector& vectorB)
{
	this->e1 = bivectorA.e1_e2 * vectorB.e2 + (-1.0) * bivectorA.e3_e1 * vectorB.e3;
	this->e2 = (-1.0) * bivectorA.e1_e2 * vectorB.e1 + bivectorA.e2_e3 * vectorB.e3;
	this->e3 = (-1.0) * bivectorA.e2_e3 * vectorB.e2 + bivectorA.e3_e1 * vectorB.e1;
}

void Vector::InnerProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2 + (-1.0) * rotorA.e3_e1 * vectorB.e3;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1 + rotorA.e2_e3 * vectorB.e3;
	this->e3 = rotorA._1 * vectorB.e3 + (-1.0) * rotorA.e2_e3 * vectorB.e2 + rotorA.e3_e1 * vectorB.e1;
}

void Vector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
}

void Vector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
}

void Vector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
	this->e3 = scalarA._1 * vectorB.e3;
}

void Vector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Bivector& bivectorB)
{
	this->e1 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e2_e3;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e3_e1;
	this->e3 = (-1.0) * psuedoscalarA.e1_e2_e3 * bivectorB.e1_e2;
}

void Vector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
	this->e3 = vectorA.e3 * scalarB._1;
}

void Vector::GeometricProduct(const Bivector& bivectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * bivectorA.e2_e3 * psuedoscalarB.e1_e2_e3;
	this->e2 = (-1.0) * bivectorA.e3_e1 * psuedoscalarB.e1_e2_e3;
	this->e3 = (-1.0) * bivectorA.e1_e2 * psuedoscalarB.e1_e2_e3;
}

