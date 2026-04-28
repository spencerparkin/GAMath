#pragma once

#include "HappyMath/PolygonMesh.h"

class Drawer
{
public:
	Drawer();
	virtual ~Drawer();

	void Initialize();
	void DrawSphere(const HappyMath::Vector3& center, double radius, const HappyMath::Vector3& color);
	void DrawPoint(const HappyMath::Vector3& location, const HappyMath::Vector3& color);

protected:
	HappyMath::PolygonMesh sphereMesh;
};