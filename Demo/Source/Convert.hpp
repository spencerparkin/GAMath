#pragma once

#include "HappyMath/Vector3.h"
#include "E3GA/Vector.h"

inline HappyMath::Vector3 Convert(const E3GA::Vector& input)
{
	HappyMath::Vector3 output;

	output.x = input.e1;
	output.y = input.e2;
	output.z = input.e3;

	return output;
}

inline E3GA::Vector Convert(const HappyMath::Vector3& input)
{
	E3GA::Vector output;

	output.e1 = input.x;
	output.e2 = input.y;
	output.e3 = input.z;

	return output;
}