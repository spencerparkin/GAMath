#pragma once

#include "HappyMath/PolygonMesh.h"

class Drawer
{
public:
	Drawer();
	virtual ~Drawer();

	void Initialize();
	void DrawSphere(const HappyMath::Vector3& center, double radius, const HappyMath::Vector3& color, bool lit);
	void DrawPoint(const HappyMath::Vector3& location, const HappyMath::Vector3& color, bool lit);

protected:
	void DrawMesh(const HappyMath::PolygonMesh* mesh, const HappyMath::Vector3& translation, double scale, const HappyMath::Vector3& color, bool lit);

	HappyMath::PolygonMesh sphereMesh;
	HappyMath::PolygonMesh boxMesh;
};