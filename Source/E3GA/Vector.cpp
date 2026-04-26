#include "Vector.h"

using namespace E3GA;

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

