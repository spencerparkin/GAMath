#include "Bivector.h"

using namespace E3GA;

Bivector::Bivector(double e1_e2, double e2_e3, double e3_e1)
{
	this->e1_e2 = e1_e2;
	this->e2_e3 = e2_e3;
	this->e3_e1 = e3_e1;
}

Bivector::Bivector(const Bivector& bivector)
{
	this->e1_e2 = bivector.e1_e2;
	this->e2_e3 = bivector.e2_e3;
	this->e3_e1 = bivector.e3_e1;
}

void Bivector::Add(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 + bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 + bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 + bivectorB.e3_e1;
}

void Bivector::Subtract(const Bivector& bivectorA, const Bivector& bivectorB)
{
	this->e1_e2 = bivectorA.e1_e2 - bivectorB.e1_e2;
	this->e2_e3 = bivectorA.e2_e3 - bivectorB.e2_e3;
	this->e3_e1 = bivectorA.e3_e1 - bivectorB.e3_e1;
}

