#include "Vector.h"
#include "Scalar.h"
#include "PsuedoScalar.h"
#include "Rotor.h"
#include "Multivector.h"

using namespace E2GA;

Vector::Vector()
{
	this->e1 = 0.0;
	this->e2 = 0.0;
}

Vector::Vector(double e1, double e2)
{
	this->e1 = e1;
	this->e2 = e2;
}

Vector::Vector(const Vector& vector)
{
	this->e1 = vector.e1;
	this->e2 = vector.e2;
}

void Vector::Add(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 + vectorB.e1;
	this->e2 = vectorA.e2 + vectorB.e2;
}

void Vector::Subtract(const Vector& vectorA, const Vector& vectorB)
{
	this->e1 = vectorA.e1 - vectorB.e1;
	this->e2 = vectorA.e2 - vectorB.e2;
}

void Vector::InnerProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
}

void Vector::InnerProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1 = psuedoscalarA.e1_e2 * vectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * vectorB.e1;
}

void Vector::InnerProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
}

void Vector::InnerProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = vectorA.e1 * psuedoscalarB.e1_e2;
}

void Vector::InnerProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1;
}

void Vector::InnerProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1;
}

void Vector::OuterProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
}

void Vector::OuterProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
}

void Vector::OuterProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->e1 = vectorA.e1 * rotorB._1;
	this->e2 = vectorA.e2 * rotorB._1;
}

void Vector::OuterProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->e1 = rotorA._1 * vectorB.e1;
	this->e2 = rotorA._1 * vectorB.e2;
}

void Vector::GeometricProduct(const Scalar& scalarA, const Vector& vectorB)
{
	this->e1 = scalarA._1 * vectorB.e1;
	this->e2 = scalarA._1 * vectorB.e2;
}

void Vector::GeometricProduct(const PsuedoScalar& psuedoscalarA, const Vector& vectorB)
{
	this->e1 = psuedoscalarA.e1_e2 * vectorB.e2;
	this->e2 = (-1.0) * psuedoscalarA.e1_e2 * vectorB.e1;
}

void Vector::GeometricProduct(const Vector& vectorA, const Scalar& scalarB)
{
	this->e1 = vectorA.e1 * scalarB._1;
	this->e2 = vectorA.e2 * scalarB._1;
}

void Vector::GeometricProduct(const Vector& vectorA, const PsuedoScalar& psuedoscalarB)
{
	this->e1 = (-1.0) * vectorA.e2 * psuedoscalarB.e1_e2;
	this->e2 = vectorA.e1 * psuedoscalarB.e1_e2;
}

void Vector::GeometricProduct(const Vector& vectorA, const Rotor& rotorB)
{
	this->e1 = vectorA.e1 * rotorB._1 + (-1.0) * vectorA.e2 * rotorB.e1_e2;
	this->e2 = vectorA.e1 * rotorB.e1_e2 + vectorA.e2 * rotorB._1;
}

void Vector::GeometricProduct(const Rotor& rotorA, const Vector& vectorB)
{
	this->e1 = rotorA._1 * vectorB.e1 + rotorA.e1_e2 * vectorB.e2;
	this->e2 = rotorA._1 * vectorB.e2 + (-1.0) * rotorA.e1_e2 * vectorB.e1;
}

