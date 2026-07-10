#include "Main.h"
#include "E2GA/Scalar.h"
#include "E2GA/Vector.h"
#include "E2GA/Rotor.h"
#include "E2GA/PsuedoScalar.h"
#include "E2GA/Multivector.h"
#include "E3GA/Scalar.h"
#include "E3GA/Vector.h"
#include "E3GA/Bivector.h"
#include "E3GA/Rotor.h"
#include "E3GA/PsuedoScalar.h"
#include "E3GA/Multivector.h"
#include "MatrixAlgebra/Matrix.h"
#include <exception>
#include <stdio.h>
#include <math.h>

bool ApproximatelyEqual(double valueA, double valueB, double eps = 1e-4)
{
	return ::fabs(valueA - valueB) < eps;
}

void TestE2GA()
{
	using namespace E2GA;
	using namespace MatrixAlgebra;

	//
	// Test scalar invert.
	//

	Scalar scalar, scalarInv;

	scalar._1 = 4.0;

	if (!InvertGAElement(scalar, scalarInv))
		throw std::exception("Failed to find E2GA scalar inverse.");

	Scalar scalarProduct;
	scalarProduct.GeometricProduct(scalar, scalarInv);

	if (!ApproximatelyEqual(scalarProduct._1, 1.0))
		throw std::exception("Scalar inverse was not correct.");

	//
	// Test vector invert.
	//

	Vector vector, vectorInv;

	vector.e1 = -3.0;
	vector.e2 = 8.0;

	if (!InvertGAElement(vector, vectorInv))
		throw std::exception("Failed to find E2GA vector inverse.");

	Rotor vectorProduct;
	vectorProduct.GeometricProduct(vector, vectorInv);

	if (!(ApproximatelyEqual(vectorProduct._1, 1.0) &&
		ApproximatelyEqual(vectorProduct.e1_e2, 0.0)))
	{
		throw std::exception("Vector inverse was not correct.");
	}

	//
	// Test rotor invert.
	//

	Rotor rotor, rotorInv;

	rotor._1 = 7.0;
	rotor.e1_e2 = -5.0;

	if (!InvertGAElement(rotor, rotorInv))
		throw std::exception("Failed to find E2GA rotor inverse.");

	Rotor rotorProduct;
	rotorProduct.GeometricProduct(rotor, rotorInv);

	if (!(ApproximatelyEqual(rotorProduct._1, 1.0) &&
		ApproximatelyEqual(rotorProduct.e1_e2, 0.0)))
	{
		throw std::exception("Rotor inverse was not correct.");
	}

	//
	// Test psuedo scalar invert.
	//

	PsuedoScalar psuedoScalar, psuedoScalarInv;

	psuedoScalar.e1_e2 = 10.0;

	if (!InvertGAElement(psuedoScalar, psuedoScalarInv))
		throw std::exception("Failed to find E2GA psuedo-scalar inverse.");

	Scalar psuedoScalarProduct;
	psuedoScalarProduct.GeometricProduct(psuedoScalar, psuedoScalarInv);

	if (!ApproximatelyEqual(psuedoScalarProduct._1, 1.0))
		throw std::exception("Psuedo-scalar inverse was not correct.");

	//
	// Test multivector invert.
	//

	Multivector multivector, multivectorInv;

	multivector._1 = 2.0;
	multivector.e1 = -4.0;
	multivector.e2 = -3.0;
	multivector.e1_e2 = 7.0;

	if (!InvertGAElement(multivector, multivectorInv))
		throw std::exception("Failed to find E2GA multivector inverse.");

	Multivector multivectorProduct;
	multivectorProduct.GeometricProduct(multivector, multivectorInv);

	if (!(ApproximatelyEqual(multivectorProduct._1, 1.0) &&
		ApproximatelyEqual(multivectorProduct.e1, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e2, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e1_e2, 0.0)))
	{
		throw std::exception("Multivector inverse was not correct.");
	}
}

void TestE3GA()
{
	using namespace E3GA;
	using namespace MatrixAlgebra;

	//
	// Test scalar invert.
	//

	Scalar scalar, scalarInv;

	scalar._1 = 4.0;

	if (!InvertGAElement(scalar, scalarInv))
		throw std::exception("Failed to find E3GA scalar inverse.");

	Scalar scalarProduct;
	scalarProduct.GeometricProduct(scalar, scalarInv);

	if (!ApproximatelyEqual(scalarProduct._1, 1.0))
		throw std::exception("Scalar inverse was not correct.");

	//
	// Test vector invert.
	//

	Vector vector, vectorInv;

	vector.e1 = -3.0;
	vector.e2 = 8.0;
	vector.e3 = -15.0;

	if (!InvertGAElement(vector, vectorInv))
		throw std::exception("Failed to find E3GA vector inverse.");

	Rotor vectorProduct;
	vectorProduct.GeometricProduct(vector, vectorInv);

	if (!(ApproximatelyEqual(vectorProduct._1, 1.0) &&
		ApproximatelyEqual(vectorProduct.e1_e2, 0.0) &&
		ApproximatelyEqual(vectorProduct.e2_e3, 0.0) &&
		ApproximatelyEqual(vectorProduct.e3_e1, 0.0)))
	{
		throw std::exception("Vector inverse was not correct.");
	}

	//
	// Test bivector invert.
	//

	Bivector bivector, bivectorInv;

	bivector.e1_e2 = -2.0;
	bivector.e2_e3 = 2.0;
	bivector.e3_e1 = 4.0;

	if (!InvertGAElement(bivector, bivectorInv))
		throw std::exception("Failed to find E3GA bivector inverse.");

	Rotor bivectorProduct;
	bivectorProduct.GeometricProduct(bivector, bivectorInv);

	if (!(ApproximatelyEqual(bivectorProduct._1, 1.0) &&
		ApproximatelyEqual(bivectorProduct.e1_e2, 0.0) &&
		ApproximatelyEqual(bivectorProduct.e2_e3, 0.0) &&
		ApproximatelyEqual(bivectorProduct.e3_e1, 0.0)))
	{
		throw std::exception("Bivector inverse was not correct.");
	}

	//
	// Test rotor invert.
	//

	Rotor rotor, rotorInv;

	rotor._1 = 7.0;
	rotor.e1_e2 = -5.0;
	rotor.e2_e3 = -3.0;
	rotor.e3_e1 = 10.0;

	if (!InvertGAElement(rotor, rotorInv))
		throw std::exception("Failed to find E3GA rotor inverse.");

	Rotor rotorProduct;
	rotorProduct.GeometricProduct(rotor, rotorInv);

	if (!(ApproximatelyEqual(rotorProduct._1, 1.0) &&
		ApproximatelyEqual(rotorProduct.e1_e2, 0.0) &&
		ApproximatelyEqual(rotorProduct.e2_e3, 0.0) &&
		ApproximatelyEqual(rotorProduct.e3_e1, 0.0)))
	{
		throw std::exception("Rotor inverse was not correct.");
	}

	//
	// Test psuedo scalar invert.
	//

	PsuedoScalar psuedoScalar, psuedoScalarInv;

	psuedoScalar.e1_e2_e3 = 9.0;

	if (!InvertGAElement(psuedoScalar, psuedoScalarInv))
		throw std::exception("Failed to find E3GA psuedo-scalar inverse.");

	Scalar psuedoScalarProduct;
	psuedoScalarProduct.GeometricProduct(psuedoScalar, psuedoScalarInv);

	if (!ApproximatelyEqual(psuedoScalarProduct._1, 1.0))
		throw std::exception("Psuedo-scalar inverse was not correct.");

	//
	// Test multivector invert.
	//

	Multivector multivector, multivectorInv;

	multivector._1 = 2.0;
	multivector.e1 = -4.0;
	multivector.e2 = -3.0;
	multivector.e3 = 4.0;
	multivector.e1_e2 = 7.0;
	multivector.e2_e3 = -7.0;
	multivector.e3_e1 = 0.5;
	multivector.e1_e2_e3 = 12.0;

	if (!InvertGAElement(multivector, multivectorInv))
		throw std::exception("Failed to find E3GA multivector inverse.");

	Multivector multivectorProduct;
	multivectorProduct.GeometricProduct(multivector, multivectorInv);

	if (!(ApproximatelyEqual(multivectorProduct._1, 1.0) &&
		ApproximatelyEqual(multivectorProduct.e1, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e2, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e3, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e1_e2, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e2_e3, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e3_e1, 0.0) &&
		ApproximatelyEqual(multivectorProduct.e1_e2_e3, 0.0)))
	{
		throw std::exception("Multivector inverse was not correct.");
	}
}

int main(int argc, char** argv)
{
	bool allTestsPassed = true;

	try
	{
		TestE2GA();
		TestE3GA();
	}
	catch (std::exception exc)
	{
		printf("Test failure: %s\n", exc.what());
		allTestsPassed = false;
	}

	if (allTestsPassed)
		printf("All tests passed!\n");

	return 0;
}