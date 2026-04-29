#include "C3GA/Geometry/Point.h"
#include "C3GA/Vector.h"
#include <math.h>
#include <limits>

using namespace C3GA;

Point::Point()
{
	this->w = 1.0;
	this->x = 0.0;
	this->y = 0.0;
	this->z = 0.0;
}

Point::Point(double x, double y, double z, double w /*= 1.0*/)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->w = w;
}

Point::Point(const Point& point)
{
	this->x = point.x;
	this->y = point.y;
	this->z = point.z;
	this->w = point.w;
}

/*virtual*/ Point::~Point()
{
}

bool Point::ToVector(Vector& vector) const
{
	vector.no = this->w;
	vector.e1 = this->w * this->x;
	vector.e2 = this->w * this->y;
	vector.e3 = this->w * this->z;
	vector.ni = 0.5 * (this->x * this->x + this->y * this->y + this->z * this->z);

	return true;
}

bool Point::FromVector(const Vector& vector)
{
	if (vector.no == 0.0)
		return false;

	this->w = vector.no;
	this->x = vector.e1 / this->w;
	this->y = vector.e2 / this->w;
	this->z = vector.e3 / this->w;

	double alpha = this->x * this->x + this->y * this->y + this->z * this->z - 2.0 * vector.ni / this->w;
	if (::fabs(alpha) > std::numeric_limits<double>::epsilon())
		return false;

	return true;
}