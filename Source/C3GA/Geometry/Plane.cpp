#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Bivector.h"
#include "C3GA/Vector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include "C3GA/Multivector.h"
#include "E3GA/Scalar.h"
#include "MatrixAlgebra/Matrix.h"
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

bool Plane::FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC)
{
	Vector v1, v2, v3, v4, v5;
	Bivector b1, b2;
	Quadvector q;
	PsuedoScalar I(1.0);

	pointA.ToVector(v1);
	pointB.ToVector(v2);
	pointC.ToVector(v3);

	v4.ni = 1.0;

	b1.OuterProduct(v1, v2);
	b2.OuterProduct(v3, v4);

	q.OuterProduct(b1, b2);

	v5.GeometricProduct(q, I);

	return this->FromVector(v5);
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

bool Plane::FitPlaneToCircle(const Circle& circle)
{
	Bivector b;
	Trivector t;
	Vector v1, v2;
	Quadvector q;
	PsuedoScalar I(1.0);

	circle.ToBivector(b);

	t.GeometricProduct(b, I);

	v1.ni = 1.0;

	q.OuterProduct(t, v1);

	v2.GeometricProduct(q, I);

	return this->FromVector(v2);
}

bool Plane::FitToPointPairAndPoint(const PointPair& pointPair, const Point& point)
{
	Trivector t1, t2;
	Bivector b;
	Vector v1, v2, v3;
	Quadvector q;
	PsuedoScalar I(1.0);

	pointPair.ToTrivector(t1);

	b.GeometricProduct(t1, I);

	point.ToVector(v1);

	t2.OuterProduct(b, v1);

	v2.ni = 1.0;

	q.OuterProduct(t2, v2);

	v3.GeometricProduct(q, I);

	return this->FromVector(v3);
}

bool Plane::ReflectCircleToCircle(const Circle& circleA, Circle& circleB) const
{
	Vector planeVector, planeVectorInv;
	this->ToVector(planeVector);
	if (!MatrixAlgebra::InvertGAElement(planeVector, planeVectorInv))
		return false;

	Bivector circleABivector;
	circleA.ToBivector(circleABivector);

	Multivector m1, m2;
	m1.GeometricProduct(planeVector, circleABivector);
	m2.GeometricProduct(m1, planeVectorInv);

	Bivector circleBBivector;
	m2.GetBivector(circleBBivector);

	return circleB.FromBivector(circleBBivector);
}

bool Plane::ReflectSphereToSphere(const Sphere& sphereA, Sphere& sphereB) const
{
	Vector planeVector, planeVectorInv;
	this->ToVector(planeVector);
	if (!MatrixAlgebra::InvertGAElement(planeVector, planeVectorInv))
		return false;

	Vector sphereAVector;
	sphereA.ToVector(sphereAVector);

	Multivector m1, m2;
	m1.GeometricProduct(planeVector, sphereAVector);
	m2.GeometricProduct(m1, planeVectorInv);

	Vector sphereBVector;
	m2.GetVector(sphereBVector);

	return sphereB.FromVector(sphereBVector);
}

bool Plane::ReflectLineToLine(const Line& lineA, Line& lineB) const
{
	Vector planeVector, planeVectorInv;
	this->ToVector(planeVector);
	if (!MatrixAlgebra::InvertGAElement(planeVector, planeVectorInv))
		return false;

	Bivector lineABivector;
	lineA.ToBivector(lineABivector);

	Multivector m1, m2;
	m1.GeometricProduct(planeVector, lineABivector);
	m2.GeometricProduct(m1, planeVectorInv);

	Bivector lineBBivector;
	m2.GetBivector(lineBBivector);

	return lineB.FromBivector(lineBBivector);
}