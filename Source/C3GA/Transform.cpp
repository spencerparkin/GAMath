#include "C3GA/Transform.h"
#include "C3GA/Scalar.h"
#include "C3GA/Geometry/Plane.h"
#include "C3GA/Geometry/Sphere.h"
#include "E3GA/Scalar.h"
#include "E3GA/Multivector.h"
#include <assert.h>

using namespace C3GA;

Transform::Transform()
{
}

/*virtual*/ Transform::~Transform()
{
}

void Transform::SetAsIdentity()
{
	this->versor = Multivector();
	this->versor._1 = 1.0;
}

void Transform::ConcatInversion(const E3GA::Vector& centerOfInversion, double radiusOfInversion)
{
	Sphere sphere(centerOfInversion, radiusOfInversion);

	Vector vector;
	sphere.ToVector(vector);

	Multivector m1;
	m1.GeometricProduct(vector, this->versor);
	this->versor = m1;
}

void Transform::ConcatReflection(const E3GA::Vector& centerOfReflection, const E3GA::Vector& unitNormOfReflection)
{
	Plane plane(centerOfReflection, unitNormOfReflection);

	Vector vector;
	plane.ToVector(vector);

	Multivector m1;
	m1.GeometricProduct(vector, this->versor);
	this->versor = m1;
}

void Transform::ConcatRotation(const E3GA::Vector& unitRotationAxis, double rotationAngle)
{
	this->ConcatRotation(unitRotationAxis, rotationAngle, E3GA::Vector(0.0, 0.0, 0.0));
}

void Transform::ConcatRotation(const E3GA::Vector& unitRotationAxis, double rotationAngle, const E3GA::Vector& centerOfRotation)
{
	E3GA::Vector orthogonalVector;
	MakeOrthogonalVector(unitRotationAxis, orthogonalVector);

	E3GA::Scalar scalar(1.0 / ::sqrt(orthogonalVector.SquareMagnitude()));
	E3GA::Vector unitNormA;
	unitNormA.GeometricProduct(scalar, orthogonalVector);

	E3GA::Rotor unitRotor;
	MakeRotor(unitRotationAxis, rotationAngle / 2.0, unitRotor);

	E3GA::Vector unitNormB;
	ApplyRotor(unitRotor, unitNormA, unitNormB);

	this->ConcatReflection(centerOfRotation, unitNormA);
	this->ConcatReflection(centerOfRotation, unitNormB);
}

void Transform::ConcatTranslation(const E3GA::Vector& translationDelta)
{
	E3GA::Scalar scalar(0.5);

	E3GA::Vector centerA(0.0, 0.0, 0.0);

	E3GA::Vector centerB;
	centerB.GeometricProduct(translationDelta, scalar);

	double length = ::sqrt(translationDelta.SquareMagnitude());
	scalar._1 = 1.0 / length;

	E3GA::Vector unitNormal;
	unitNormal.GeometricProduct(scalar, translationDelta);

	this->ConcatReflection(centerA, unitNormal);
	this->ConcatReflection(centerB, unitNormal);
}

void Transform::ConcatScale(double uniformScale)
{
	this->ConcatScale(uniformScale, E3GA::Vector(0.0, 0.0, 0.0));
}

void Transform::ConcatScale(double uniformScale, const E3GA::Vector& centerOfScale)
{
	double radiusA = 1.0;
	double radiusB = ::sqrt(uniformScale);

	this->ConcatInversion(centerOfScale, radiusA);
	this->ConcatInversion(centerOfScale, radiusB);
}

void Transform::ConcatRigidBodyMotion(const E3GA::Vector& unitRotationAxis, double rotationAngle, const E3GA::Vector& translationDelta)
{
	this->ConcatRotation(unitRotationAxis, rotationAngle);
	this->ConcatTranslation(translationDelta);
}

void Transform::Apply(const Vector& vector, Vector& vectorTransformed) const
{
	Multivector m1, m2;

	m1.GeometricProduct(this->versor, vector);
	m2.GeometricProduct(m1, this->versorInv);

	m2.GetVector(vectorTransformed);
}

void Transform::Apply(const Bivector& bivector, Bivector& bivectorTransformed) const
{
	Multivector m1, m2;

	m1.GeometricProduct(this->versor, bivector);
	m2.GeometricProduct(m1, this->versorInv);

	m2.GetBivector(bivectorTransformed);
}

void Transform::Apply(const Trivector& trivector, Trivector& trivectorTransformed) const
{
	Multivector m1, m2;

	m1.GeometricProduct(this->versor, trivector);
	m2.GeometricProduct(m1, this->versorInv);

	m2.GetTrivector(trivectorTransformed);
}

void Transform::Apply(const Quadvector& quadvector, Quadvector& quadvectorTransformed) const
{
	Multivector m1, m2;

	m1.GeometricProduct(this->versor, quadvector);
	m2.GeometricProduct(m1, this->versorInv);

	m2.GetQuadvector(quadvectorTransformed);
}

void Transform::Apply(const Multivector& multivector, Multivector& multivectorTransformed) const
{
	Multivector m1;

	m1.GeometricProduct(this->versor, multivector);
	multivectorTransformed.GeometricProduct(m1, this->versorInv);
}

void Transform::CalcInverse()
{
	Multivector versorReverse;
	versorReverse.Reverse(this->versor);

	Scalar scalar;
	scalar._1 = 1.0 / this->versor.SquareMagnitude();

	assert(!::isnan(scalar._1));

	this->versorInv = Multivector();
	this->versorInv.GeometricProduct(versorReverse, scalar);
}

// STPTODO: Move these (below) to where it makes more sense.

/*static*/ void Transform::MakeOrthogonalVector(const E3GA::Vector& vector, E3GA::Vector& orthogonalVector)
{
	double abs_e1 = ::fabs(vector.e1);
	double abs_e2 = ::fabs(vector.e2);
	double abs_e3 = ::fabs(vector.e3);

	if (abs_e3 <= abs_e1 && abs_e3 <= abs_e2)
	{
		orthogonalVector.e1 = vector.e2;
		orthogonalVector.e2 = -vector.e1;
		orthogonalVector.e3 = 0.0;
	}
	else if (abs_e2 <= abs_e1 && abs_e2 <= abs_e3)
	{
		orthogonalVector.e1 = vector.e3;
		orthogonalVector.e2 = 0.0;
		orthogonalVector.e3 = -vector.e1;
	}
	else if (abs_e1 <= abs_e2 && abs_e1 <= abs_e3)
	{
		orthogonalVector.e1 = 0.0;
		orthogonalVector.e2 = vector.e3;
		orthogonalVector.e3 = -vector.e2;
	}
}

/*static*/ void Transform::MakeRotor(const E3GA::Vector& unitAxis, double angle, E3GA::Rotor& unitRotor)
{
	double sinHalfAngle = ::sin(angle / 2.0);
	double cosHalfAngle = ::cos(angle / 2.0);

	unitRotor._1 = cosHalfAngle;
	unitRotor.e2_e3 = unitAxis.e1 * sinHalfAngle;
	unitRotor.e3_e1 = unitAxis.e2 * sinHalfAngle;
	unitRotor.e1_e2 = unitAxis.e3 * sinHalfAngle;
}

/*static*/ void Transform::ApplyRotor(const E3GA::Rotor& unitRotor, const E3GA::Vector& vector, E3GA::Vector& vectorRotated)
{
	E3GA::Rotor unitRotorRev;
	unitRotorRev.Reverse(unitRotor);

	E3GA::Multivector m1, m2;
	m1.GeometricProduct(unitRotor, vector);
	m2.GeometricProduct(m1, unitRotorRev);

	m2.GetVector(vectorRotated);
}