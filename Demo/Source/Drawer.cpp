#include "Drawer.h"

Drawer::Drawer()
{
}

/*virtual*/ Drawer::~Drawer()
{
}

void Drawer::Initialize()
{
	// STPTODO: Need to sub-divide the surface and need to scale it so that it has unit-radius.
	this->sphereMesh.GeneratePolyhedron(HappyMath::PolygonMesh::Polyhedron::ICOSAHEDRON);
}

void Drawer::DrawSphere(const HappyMath::Vector3& center, double radius, const HappyMath::Vector3& color)
{
	//glBegin(GL_TRIANGLES);

	for (const HappyMath::PolygonMesh::Polygon& polygon : this->sphereMesh.GetPolygonArray())
	{
		//...
	}
}

void Drawer::DrawPoint(const HappyMath::Vector3& location, const HappyMath::Vector3& color)
{
	//...
}