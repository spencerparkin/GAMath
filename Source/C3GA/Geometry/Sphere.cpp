#include "C3GA/Geometry/Sphere.h"
#include "C3GA/Geometry/Point.h"
#include "C3GA/Geometry/PointPair.h"
#include "C3GA/Geometry/Circle.h"
#include "C3GA/Geometry/Line.h"
#include "C3GA/Vector.h"
#include "C3GA/Bivector.h"
#include "C3GA/Trivector.h"
#include "C3GA/Quadvector.h"
#include "C3GA/PsuedoScalar.h"
#include "C3GA/Multivector.h"
#include "MatrixAlgebra/Matrix.h"
#include <math.h>

using namespace C3GA;

Sphere::Sphere()
{
	this->radius = 1.0;
	this->weight = 1.0;
	this->imaginary = false;
}

Sphere::Sphere(const E3GA::Vector& center, double radius, double weight /*= 1.0*/)
{
	this->center = center;
	this->radius = radius;
	this->weight = weight;
	this->imaginary = false;
}

Sphere::Sphere(const Sphere& sphere)
{
	this->center = sphere.center;
	this->radius = sphere.radius;
	this->weight = sphere.weight;
	this->imaginary = false;
}

/*virtual*/ Sphere::~Sphere()
{
}

void Sphere::ToVector(Vector& vector) const
{
	double sign = this->imaginary ? -1.0 : 1.0;

	vector.no = this->weight;
	vector.e1 = this->weight * this->center.e1;
	vector.e2 = this->weight * this->center.e2;
	vector.e3 = this->weight * this->center.e3;
	vector.ni = this->weight * 0.5 * (this->center.SquareMagnitude() - sign * this->radius * this->radius);
}

bool Sphere::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->weight = vector.no;
	this->center.e1 = vector.e1 / this->weight;
	this->center.e2 = vector.e2 / this->weight;
	this->center.e3 = vector.e3 / this->weight;

	double squareRadius = this->center.SquareMagnitude() - 2.0 * vector.ni / this->weight;

	if (squareRadius >= 0.0)
		this->imaginary = false;
	else
	{
		this->imaginary = true;
		squareRadius = -squareRadius;
	}

	this->radius = sqrt(squareRadius);
	
	return true;
}

bool Sphere::FitToPoints(const Point& pointA, const Point& pointB, const Point& pointC, const Point& pointD)
{
	Vector v1, v2, v3, v4;
	Bivector b1, b2;
	Quadvector q;
	PsuedoScalar I(1.0);
	Vector v;

	pointA.ToVector(v1);
	pointB.ToVector(v2);
	pointC.ToVector(v3);
	pointD.ToVector(v4);
	
	b1.OuterProduct(v1, v2);
	b2.OuterProduct(v3, v4);
	q.OuterProduct(b1, b2);
	v.GeometricProduct(q, I);

	return this->FromVector(v);
}

bool Sphere::FitToPointPairs(const PointPair& pointPairA, const PointPair& pointPairB)
{
	Bivector b1, b2;
	Trivector t1, t2;
	PsuedoScalar I(1.0);
	Quadvector q;
	Vector v;

	pointPairA.ToTrivector(t1);
	pointPairB.ToTrivector(t2);

	b1.GeometricProduct(t1, I);
	b2.GeometricProduct(t2, I);

	q.OuterProduct(b1, b2);

	v.GeometricProduct(q, I);

	return this->FromVector(v);
}

bool Sphere::FitToPointPairAndPoints(const PointPair& pointPair, const Point& pointA, const Point& pointB)
{
	Trivector t;
	Bivector b1, b2;
	Vector v1, v2, v3;
	Quadvector q;
	PsuedoScalar I(1.0);

	pointPair.ToTrivector(t);

	b1.GeometricProduct(t, I);

	pointA.ToVector(v1);
	pointB.ToVector(v2);

	b2.OuterProduct(v1, v2);

	q.OuterProduct(b1, b2);

	v3.GeometricProduct(q, I);

	return this->FromVector(v3);
}

bool Sphere::FitToCircleAndPoint(const Circle& circleA, const Point& pointB)
{
	Trivector t;
	Bivector b;
	Quadvector q;
	Vector v1, v2;
	PsuedoScalar I(1.0);

	pointB.ToVector(v1);

	circleA.ToBivector(b);
	t.GeometricProduct(b, I);
	q.OuterProduct(t, v1);

	v2.GeometricProduct(q, I);

	return this->FromVector(v2);
}

bool Sphere::InvertLineToCircle(const Line& line, Circle& circle) const
{
	Vector sphereVector, sphereVectorInv;
	this->ToVector(sphereVector);
	MatrixAlgebra::InvertGAElement(sphereVector, sphereVectorInv);

	Bivector lineBivector;
	line.ToBivector(lineBivector);

	Multivector m1, m2;
	m1.GeometricProduct(sphereVector, lineBivector);
	m2.GeometricProduct(m1, sphereVectorInv);

	Bivector circleBivector;

	// STPTODO: Generate convenience functions for this.
	circleBivector.e1_e2 = m2.e1_e2;
	circleBivector.e1_e3 = m2.e1_e3;
	circleBivector.e1_no = m2.e1_no;
	circleBivector.e1_ni = m2.e1_ni;
	circleBivector.e2_e3 = m2.e2_e3;
	circleBivector.e2_no = m2.e2_no;
	circleBivector.e2_ni = m2.e2_ni;
	circleBivector.e3_no = m2.e3_no;
	circleBivector.e3_ni = m2.e3_ni;
	circleBivector.no_ni = m2.no_ni;

	return circle.FromBivector(circleBivector);
}

bool Sphere::InvertCircleToCircle(const Circle& circleA, Circle& circleB) const
{
	Vector sphereVector, sphereVectorInv;
	this->ToVector(sphereVector);
	MatrixAlgebra::InvertGAElement(sphereVector, sphereVectorInv);

	Bivector circleABivector;
	circleA.ToBivector(circleABivector);

	Multivector m1, m2;
	m1.GeometricProduct(sphereVector, circleABivector);
	m2.GeometricProduct(m1, sphereVectorInv);

	Bivector circleBBivector;

	// STPTODO: Generate convenience functions for this.
	circleBBivector.e1_e2 = m2.e1_e2;
	circleBBivector.e1_e3 = m2.e1_e3;
	circleBBivector.e1_no = m2.e1_no;
	circleBBivector.e1_ni = m2.e1_ni;
	circleBBivector.e2_e3 = m2.e2_e3;
	circleBBivector.e2_no = m2.e2_no;
	circleBBivector.e2_ni = m2.e2_ni;
	circleBBivector.e3_no = m2.e3_no;
	circleBBivector.e3_ni = m2.e3_ni;
	circleBBivector.no_ni = m2.no_ni;

	return circleB.FromBivector(circleBBivector);
}