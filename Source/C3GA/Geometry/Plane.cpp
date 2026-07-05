#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Bivector.h"
#include "C3GA/Vector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include "E3GA/Scalar.h"
#include <math.h>

using namespace C3GA;

Plane::Plane()
{
	this->weight = 1.0;
	this->normal = E3GA::Vector(0.0, 0.0, 1.0);
}

Plane::Plane(const E3GA::Vector& center, const E3GA::Vector& normal, double weight /*= 1.0*/)
{
	this->center = center;
	this->normal = normal;
	this->weight = weight;
}

Plane::Plane(const Plane& plane)
{
	this->center = plane.center;
	this->normal = plane.normal;
	this->weight = plane.weight;
}

/*virtual*/ Plane::~Plane()
{
}

bool Plane::FromVector(const Vector& vector)
{
	this->normal.e1 = vector.e1;
	this->normal.e2 = vector.e2;
	this->normal.e3 = vector.e3;

	this->weight = ::sqrt(this->normal.SquareMagnitude());

	if (this->weight == 0.0)
		return false;

	this->normal.e1 /= this->weight;
	this->normal.e2 /= this->weight;
	this->normal.e3 /= this->weight;

	this->center.e1 = this->normal.e1 * vector.ni / this->weight;
	this->center.e2 = this->normal.e2 * vector.ni / this->weight;
	this->center.e3 = this->normal.e3 * vector.ni / this->weight;

	return true;
}

void Plane::ToVector(Vector& vector) const
{
	E3GA::Scalar dot;
	dot.InnerProduct(this->normal, this->center);

	vector.e1 = this->normal.e1 * this->weight;
	vector.e2 = this->normal.e2 * this->weight;
	vector.e3 = this->normal.e3 * this->weight;
	vector.ni = dot._1 * this->weight;
	vector.no = 0.0;
}

bool Plane::FitToCircle(const Circle& circle)
{
	PsuedoScalar I(1.0);
	Bivector b;
	Trivector t;
	Vector v;
	Quadvector q;

	circle.ToBivector(b);

	t.GeometricProduct(b, I);

	v.ni = 1.0;

	q.OuterProduct(t, v);

	v.GeometricProduct(q, I);

	return this->FromVector(v);
}

bool Plane::FitPlaneToLineAndPoint(const Line& line, const Point& point)
{
	Vector v;
	Bivector b;
	Trivector t;
	Quadvector q;
	PsuedoScalar I(1.0);

	point.ToVector(v);
	line.ToBivector(b);

	t.GeometricProduct(b, I);

	q.OuterProduct(t, v);

	v.GeometricProduct(q, I);

	return this->FromVector(v);
}