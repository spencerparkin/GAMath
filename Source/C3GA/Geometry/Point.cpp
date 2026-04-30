#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include <math.h>
#include <limits>

using namespace C3GA;

Point::Point()
{
	this->weight = 1.0;
}

Point::Point(const HappyMath::Vector3& center, double weight /*= 1.0*/)
{
	this->center = center;
	this->weight = weight;
}

Point::Point(const Point& point)
{
	this->center = point.center;
	this->weight = point.weight;
}

/*virtual*/ Point::~Point()
{
}

void Point::ToVector(Vector& vector) const
{
	vector.no = this->weight;
	vector.e1 = this->weight * this->center.x;
	vector.e2 = this->weight * this->center.y;
	vector.e3 = this->weight * this->center.z;
	vector.ni = 0.5 * this->center.SquareLength();
}

bool Point::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->weight = vector.no;
	this->center.x = vector.e1 / this->weight;
	this->center.y = vector.e2 / this->weight;
	this->center.z = vector.e3 / this->weight;

	double alpha = this->center.SquareLength() - 2.0 * vector.ni / this->weight;

	return ::fabs(alpha) <= std::numeric_limits<double>::epsilon();
}