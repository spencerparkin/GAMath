#include "Main.h"
#include "E2GA/Multivector.h"
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

	Multivector multivector, multivectorInv;

	multivector._1 = 2.0;
	multivector.e1 = -4.0;
	multivector.e2 = -3.0;
	multivector.e1_e2 = 7.0;

	if (!InvertGAElement(multivector, multivectorInv))
	{
		throw std::exception("Failed to find E2GA multivector inverse.");
	}

	Multivector product;
	product.GeometricProduct(multivector, multivectorInv);

	if (!(ApproximatelyEqual(product._1, 1.0) &&
		ApproximatelyEqual(product.e1, 0.0) &&
		ApproximatelyEqual(product.e2, 0.0) &&
		ApproximatelyEqual(product.e1_e2, 0.0)))
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