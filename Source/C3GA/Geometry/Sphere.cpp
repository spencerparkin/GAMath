#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include <math.h>

using namespace C3GA;

Sphere::Sphere(double cx, double cy, double cz, double r, double w /*= 1.0*/)
{
	this->cx = cx;
	this->cy = cy;
	this->cz = cz;
	this->r = r;
	this->w = w;
}

Sphere::Sphere(const Sphere& sphere)
{
	this->cx = sphere.cx;
	this->cy = sphere.cy;
	this->cz = sphere.cz;
	this->r = sphere.r;
	this->w = sphere.w;
}

/*virtual*/ Sphere::~Sphere()
{
}

bool Sphere::ToVector(Vector& vector) const
{
	vector.no = this->w;
	vector.e1 = this->w * this->cx;
	vector.e2 = this->w * this->cy;
	vector.e3 = this->w * this->cz;
	vector.ni = this->w * 0.5 * (this->cx * this->cx + this->cy * this->cy + this->cz * this->cz - this->r * this->r);

	return true;
}

bool Sphere::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->w = vector.no;
	this->cx = vector.e1 / this->w;
	this->cy = vector.e2 / this->w;
	this->cz = vector.e3 / this->w;

	// STPTODO: What about imaginary spheres?
	this->r = sqrt(fabs(this->cx * this->cx + this->cy * this->cy + this->cz * this->cz - 2.0 * vector.ni / this->w));
	
	return true;
}

bool Sphere::FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC, const Point& pointD)
{
	Vector v1, v2, v3, v4;
	Bivector b1, b2;
	Quadvector q;
	PsuedoScalar I(1.0);
	Vector v;

	if (!pointA.ToVector(v1))
		return false;

	if (!pointB.ToVector(v2))
		return false;

	if (!pointC.ToVector(v3))
		return false;

	if (!pointD.ToVector(v4))
		return false;

	b1.OuterProduct(v1, v2);
	b2.OuterProduct(v3, v4);
	q.OuterProduct(b1, b2);
	v.GeometricProduct(q, I);

	if (!this->FromVector(v))
		return false;

	return true;
}

bool Sphere::FitToPointPairs(const PointPair& pointPairA, const PointPair& pointPairB)
{
	// STPTODO: Write this.
	return false;
}

bool Sphere::FitToCircleAndPoint(const Circle& circleA, const Point& pointB)
{
	// STPTODO: Write this.
	return false;
}