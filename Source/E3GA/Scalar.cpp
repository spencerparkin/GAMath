#include "Scalar.h"

using namespace E3GA;

Scalar::Scalar(double _1)
{
	this->_1 = _1;
}

Scalar::Scalar(const Scalar& scalar)
{
	this->_1 = scalar._1;
}

void Scalar::Add(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 + scalarB._1;
}

void Scalar::Subtract(const Scalar& scalarA, const Scalar& scalarB)
{
	this->_1 = scalarA._1 - scalarB._1;
}

