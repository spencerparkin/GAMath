#include "PsuedoScalar.h"

using namespace E3GA;

PsuedoScalar::PsuedoScalar(double e1_e2_e3)
{
	this->e1_e2_e3 = e1_e2_e3;
}

PsuedoScalar::PsuedoScalar(const PsuedoScalar& psuedoscalar)
{
	this->e1_e2_e3 = psuedoscalar.e1_e2_e3;
}

void PsuedoScalar::Add(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 + psuedoscalarB.e1_e2_e3;
}

void PsuedoScalar::Subtract(const PsuedoScalar& psuedoscalarA, const PsuedoScalar& psuedoscalarB)
{
	this->e1_e2_e3 = psuedoscalarA.e1_e2_e3 - psuedoscalarB.e1_e2_e3;
}

