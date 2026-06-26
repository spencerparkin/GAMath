#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Bivector.h"
#include "C3GA/Vector.h"
#include "C3GA/Trivector.h"
#include "C3GA/PsuedoScalar.h"

using namespace C3GA;

Line::Line()
{
	this->weight = 1.0;
	this->normal.SetComponents(0.0, 0.0, 1.0);
}

Line::Line(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double weight /*= 1.0*/)
{
	this->center = center;
	this->normal = normal;
	this->weight = weight;
}

Line::Line(const Line& line)
{
}

/*virtual*/ Line::~Line()
{
}

bool Line::FromBivector(const Bivector& bivector)
{
	this->normal.x = bivector.e2_e3;
	this->normal.y = -bivector.e1_e3;
	this->normal.z = bivector.e1_e2;

	this->weight = this->normal.Length();

	if (this->weight == 0.0)
		return false;

	this->normal /= this->weight;

	Bivector b1;
	Vector v1, v2;

	b1.e2_e3 = bivector.e1_ni;
	b1.e1_e3 = -bivector.e2_ni;
	b1.e1_e2 = bivector.e3_ni;

	v1.e1 = this->normal.x;
	v1.e2 = this->normal.y;
	v1.e3 = this->normal.z;

	v2.InnerProduct(b1, v1);

	this->center.x = v2.e1;
	this->center.y = v2.e2;
	this->center.z = v2.e3;

	return true;
}

void Line::ToBivector(Bivector& bivector) const
{
	Bivector b1;
	Vector v1, v2;

	b1.e2_e3 = this->normal.x * this->weight;
	b1.e1_e3 = -this->normal.y * this->weight;
	b1.e1_e2 = this->normal.z * this->weight;

	v1.e1 = this->center.x;
	v1.e2 = this->center.y;
	v1.e3 = this->center.z;

	v2.InnerProduct(b1, v1);

	bivector.e1_e2 = b1.e1_e2;
	bivector.e1_e3 = b1.e1_e3;
	bivector.e2_e3 = b1.e2_e3;

	bivector.e1_ni = v2.e1;
	bivector.e2_ni = v2.e2;
	bivector.e3_ni = v2.e3;

	bivector.e1_no = 0.0;
	bivector.e2_no = 0.0;
	bivector.e3_no = 0.0;

	bivector.no_ni = 0.0;
}

bool Line::FitPointPair(const PointPair& pointPair)
{
	Bivector b;
	Vector v;
	Trivector t;
	PsuedoScalar I(1.0);

	pointPair.ToTrivector(t);

	b.GeometricProduct(t, I);

	v.ni = 1.0;

	t.OuterProduct(b, v);

	b.GeometricProduct(t, I);

	return this->FromBivector(b);
}

bool Line::IntersectPlanes(const Plane& planeA, const Plane& planeB)
{
	Vector v1, v2;
	Bivector b;

	planeA.ToVector(v1);
	planeB.ToVector(v2);

	b.OuterProduct(v1, v2);

	return this->FromBivector(b);
}