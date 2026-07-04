#include "Object.h"
#include "Drawer.h"
#include "Convert.hpp"
#include "C3GA/Vector.h"
#include "HappyMath/LineSegment.h"
#include <format>

//------------------------------ Object ------------------------------

Object::Object()
{
	this->color.SetComponents(0.0, 1.0, 1.0, 1.0);
}

/*virtual*/ Object::~Object()
{
}

/*virtual*/ bool Object::SetSize(double size)
{
	return false;
}

/*virtual*/ bool Object::GetSize(double& size) const
{
	return false;
}

/*virtual*/ bool Object::Rotate(const HappyMath::Vector3& unitAxis, double angle)
{
	return false;
}

//------------------------------ PointObject ------------------------------

PointObject::PointObject()
{
}

/*virtual*/ PointObject::~PointObject()
{
}

/*virtual*/ void PointObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	drawer->DrawPoint(this->point.center, usedColor, false);
}

/*virtual*/ void PointObject::SetPosition(const HappyMath::Vector3& position)
{
	this->point.center = position;
}

/*virtual*/ HappyMath::Vector3 PointObject::GetPosition() const
{
	return this->point.center;
}

/*virtual*/ bool PointObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->point.center, 0.2, rayDistance);
}

/*virtual*/ std::string PointObject::GetDetails() const
{
	std::string details;

	details += "Shape: Point\n";
	details += std::format("Weight: {}\n", this->point.weight);
	details += std::format("Location: {}, {}, {}\n", this->point.center.x, this->point.center.y, this->point.center.z);

	// STPTODO: Can I print the vector to a string?
	//C3GA::Vector v1;
	//this->point.ToVector(v1);

	return details;
}

//------------------------------ PointPairObject ------------------------------

PointPairObject::PointPairObject()
{
}

/*virtual*/ PointPairObject::~PointPairObject()
{
}

/*virtual*/ void PointPairObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	
	HappyMath::Vector3 pointA = this->pointPair.center + this->pointPair.radius * this->pointPair.normal;
	HappyMath::Vector3 pointB = this->pointPair.center - this->pointPair.radius * this->pointPair.normal;
	
	drawer->DrawPoint(pointA, usedColor, false);
	drawer->DrawPoint(pointB, usedColor, false);

	drawer->DrawVector(this->pointPair.center, this->pointPair.normal, usedColor, true);
}

/*virtual*/ void PointPairObject::SetPosition(const HappyMath::Vector3& position)
{
	this->pointPair.center = position;
}

/*virtual*/ HappyMath::Vector3 PointPairObject::GetPosition() const
{
	return this->pointPair.center;
}

/*virtual*/ bool PointPairObject::SetSize(double size)
{
	this->pointPair.radius = size;
	return true;
}

/*virtual*/ bool PointPairObject::GetSize(double& size) const
{
	size = this->pointPair.radius;
	return true;
}

/*virtual*/ bool PointPairObject::Rotate(const HappyMath::Vector3& unitAxis, double angle)
{
	this->pointPair.normal = this->pointPair.normal.Rotated(unitAxis, angle).Normalized();
	return true;
}

/*virtual*/ bool PointPairObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	HappyMath::Vector3 pointA = this->pointPair.center + this->pointPair.radius * this->pointPair.normal;
	HappyMath::Vector3 pointB = this->pointPair.center - this->pointPair.radius * this->pointPair.normal;

	return worldRay.CastAgainstSphere(pointA, 0.2, rayDistance) || worldRay.CastAgainstSphere(pointB, 0.2, rayDistance);
}

/*virtual*/ std::string PointPairObject::GetDetails() const
{
	std::string details;

	details += "Shape: Point-Pair\n";
	details += std::format("Weight: {}\n", this->pointPair.weight);
	details += std::format("Center: {}, {}, {}\n", this->pointPair.center.x, this->pointPair.center.y, this->pointPair.center.z);
	details += std::format("Radius: {}\n", this->pointPair.radius);
	details += std::string("Imaginary: ") + (this->pointPair.imaginary ? "YES" : "NO") + "\n";

	return details;
}

//------------------------------ CircleObject ------------------------------

CircleObject::CircleObject()
{
}

/*virtual*/ CircleObject::~CircleObject()
{
}

/*virtual*/ void CircleObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;

	drawer->DrawCircle(Convert(this->circle.center), Convert(this->circle.normal), this->circle.radius, usedColor, false);
	drawer->DrawVector(Convert(this->circle.center), Convert(this->circle.normal), usedColor, true);
}

/*virtual*/ void CircleObject::SetPosition(const HappyMath::Vector3& position)
{
	this->circle.center = Convert(position);
}

/*virtual*/ HappyMath::Vector3 CircleObject::GetPosition() const
{
	return Convert(this->circle.center);
}

/*virtual*/ bool CircleObject::SetSize(double size)
{
	this->circle.radius = size;
	return true;
}

/*virtual*/ bool CircleObject::GetSize(double& size) const
{
	size = this->circle.radius;
	return true;
}

/*virtual*/ bool CircleObject::Rotate(const HappyMath::Vector3& unitAxis, double angle)
{
	this->circle.normal = Convert(Convert(this->circle.normal).Rotated(unitAxis, angle).Normalized());
	return true;
}

/*virtual*/ bool CircleObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	double thickness = 0.5;

	if (worldRay.CastAgainstDisk(Convert(this->circle.center), Convert(this->circle.normal), this->circle.radius + thickness / 2.0, rayDistance))
	{
		double alpha = 0.0;
		if (worldRay.CastAgainstDisk(Convert(this->circle.center), Convert(this->circle.normal), this->circle.radius - thickness / 2.0, alpha))
			return false;

		return true;
	}

	return false;
}

/*virtual*/ std::string CircleObject::GetDetails() const
{
	std::string details;

	details += "Shape: Circle\n";
	details += std::format("Weight: {}\n", this->circle.weight);
	details += std::format("Center: {}, {}, {}\n", this->circle.center.e1, this->circle.center.e2, this->circle.center.e3);
	details += std::format("Radius: {}\n", this->circle.radius);
	details += std::string("Imaginary: ") + (this->circle.imaginary ? "YES" : "NO") + "\n";

	return details;
}

//------------------------------ SphereObject ------------------------------

SphereObject::SphereObject()
{
}

/*virtual*/ SphereObject::~SphereObject()
{
}

/*virtual*/ void SphereObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	drawer->DrawSphere(this->sphere.center, this->sphere.radius, usedColor, true);
}

/*virtual*/ void SphereObject::SetPosition(const HappyMath::Vector3& position)
{
	this->sphere.center = position;
}

/*virtual*/ HappyMath::Vector3 SphereObject::GetPosition() const
{
	return this->sphere.center;
}

/*virtual*/ bool SphereObject::SetSize(double size)
{
	this->sphere.radius = size;
	return true;
}

/*virtual*/ bool SphereObject::GetSize(double& size) const
{
	size = this->sphere.radius;
	return true;
}

/*virtual*/ bool SphereObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->sphere.center, this->sphere.radius, rayDistance);
}

/*virtual*/ std::string SphereObject::GetDetails() const
{
	std::string details;

	details += "Shape: Sphere\n";
	details += std::format("Weight: {}\n", this->sphere.weight);
	details += std::format("Center: {}, {}, {}\n", this->sphere.center.x, this->sphere.center.y, this->sphere.center.z);
	details += std::format("Radius: {}\n", this->sphere.radius);
	details += std::string("Imaginary: ") + (this->sphere.imaginary ? "YES" : "NO") + "\n";

	return details;
}

//------------------------------ FlatPointObject ------------------------------

FlatPointObject::FlatPointObject()
{
}

/*virtual*/ FlatPointObject::~FlatPointObject()
{
}

/*virtual*/ void FlatPointObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	drawer->DrawPoint(this->point.center, usedColor, false);
}

/*virtual*/ void FlatPointObject::SetPosition(const HappyMath::Vector3& position)
{
	this->point.center = position;
}

/*virtual*/ HappyMath::Vector3 FlatPointObject::GetPosition() const
{
	return this->point.center;
}

/*virtual*/ bool FlatPointObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstSphere(this->point.center, 0.2, rayDistance);
}

/*virtual*/ std::string FlatPointObject::GetDetails() const
{
	std::string details;

	details += "Shape: Flat-Point\n";
	details += std::format("Weight: {}\n", this->point.weight);
	details += std::format("Center: {}, {}, {}\n", this->point.center.x, this->point.center.y, this->point.center.z);

	return details;
}

//------------------------------ LineObject ------------------------------

LineObject::LineObject()
{
}

/*virtual*/ LineObject::~LineObject()
{
}

/*virtual*/ void LineObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	double radius = 10.0;

	HappyMath::LineSegment lineSeg;
	lineSeg.point[0] = this->line.center - radius * this->line.normal;
	lineSeg.point[1] = this->line.center + radius * this->line.normal;

	HappyMath::Vector3 vector = lineSeg.GetDelta().Normalized();

	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	drawer->DrawLine(lineSeg.point[0], lineSeg.point[1], usedColor, true);
	drawer->DrawVector(lineSeg.point[0], -vector, usedColor, true);
	drawer->DrawVector(lineSeg.point[1], vector, usedColor, true);
}

/*virtual*/ void LineObject::SetPosition(const HappyMath::Vector3& position)
{
	this->line.center = position;
}

/*virtual*/ HappyMath::Vector3 LineObject::GetPosition() const
{
	return this->line.center;
}

/*virtual*/ bool LineObject::Rotate(const HappyMath::Vector3& unitAxis, double angle)
{
	this->line.normal = this->line.normal.Rotated(unitAxis, angle).Normalized();
	return true;
}

/*virtual*/ bool LineObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	double radius = 11.0;

	HappyMath::LineSegment lineSeg;
	lineSeg.point[0] = this->line.center - radius * this->line.normal;
	lineSeg.point[1] = this->line.center + radius * this->line.normal;

	return worldRay.CastAgainst(lineSeg, rayDistance);
}

/*virtual*/ std::string LineObject::GetDetails() const
{
	std::string details;

	details += "Shape: Line\n";
	details += std::format("Weight: {}\n", this->line.weight);
	details += std::format("Center: {}, {}, {}\n", this->line.center.x, this->line.center.y, this->line.center.z);
	details += std::format("Normal: {}, {}, {}\n", this->line.normal.x, this->line.normal.y, this->line.normal.z);

	return details;
}

//------------------------------ PlaneObject ------------------------------

PlaneObject::PlaneObject()
{
}

/*virtual*/ PlaneObject::~PlaneObject()
{
}

/*virtual*/ void PlaneObject::Draw(Drawer* drawer, bool showAsHighlighted) const
{
	HappyMath::Vector4 usedColor = showAsHighlighted ? HappyMath::Vector4(1.0, 1.0, 1.0, 1.0) : this->color;
	drawer->DrawPlane(this->plane.center, this->plane.normal, 10.0, usedColor, true);
	drawer->DrawVector(this->plane.center, this->plane.normal, usedColor, true);
}

/*virtual*/ void PlaneObject::SetPosition(const HappyMath::Vector3& position)
{
	this->plane.center = position;
}

/*virtual*/ HappyMath::Vector3 PlaneObject::GetPosition() const
{
	return this->plane.center;
}

/*virtual*/ bool PlaneObject::Rotate(const HappyMath::Vector3& unitAxis, double angle)
{
	this->plane.normal = this->plane.normal.Rotated(unitAxis, angle).Normalized();
	return true;
}

/*virtual*/ bool PlaneObject::IsHitByWorldRay(const HappyMath::Ray& worldRay, double& rayDistance) const
{
	return worldRay.CastAgainstDisk(this->plane.center, this->plane.normal, 10.0, rayDistance);
}

/*virtual*/ std::string PlaneObject::GetDetails() const
{
	std::string details;

	details += "Shape: Plane\n";
	details += std::format("Weight: {}\n", this->plane.weight);
	details += std::format("Center: {}, {}, {}\n", this->plane.center.x, this->plane.center.y, this->plane.center.z);
	details += std::format("Normal: {}, {}, {}\n", this->plane.normal.x, this->plane.normal.y, this->plane.normal.z);

	return details;
}