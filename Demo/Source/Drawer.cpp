#include "Drawer.h"
#include "HappyMath/Polygon.h"
#include "HappyMath/Matrix4x4.h"
#include <QOpenGLFunctions>

Drawer::Drawer()
{
}

/*virtual*/ Drawer::~Drawer()
{
}

void Drawer::Initialize()
{
	this->sphereMesh.GeneratePolyhedron(HappyMath::PolygonMesh::Polyhedron::ICOSAHEDRON, 1.0);

	HappyMath::PolygonSubdivider subdivider(1.0);
	HappyMath::PolygonBlender::Blend(this->sphereMesh, &subdivider, 3);

	this->boxMesh.GeneratePolyhedron(HappyMath::PolygonMesh::Polyhedron::HEXADRON, 1.0f);
}

void Drawer::DrawSphere(const HappyMath::Vector3& center, double radius, const HappyMath::Vector4& color, bool lit)
{
	this->DrawMesh(&this->sphereMesh, center, radius, color, lit);
}

void Drawer::DrawCircle(const HappyMath::Vector3& center, const HappyMath::Vector3& normal, double radius, const HappyMath::Vector4& color, bool lit)
{
	glDisable(GL_LIGHTING);

	HappyMath::Matrix4x4 scaleMatrix;
	scaleMatrix.SetScale(HappyMath::Vector3(radius, radius, radius));

	HappyMath::Vector3 xAxis, yAxis, zAxis;
	zAxis = normal.Normalized();
	xAxis.SetAsOrthogonalTo(zAxis);
	xAxis.Normalize();
	yAxis = zAxis.Cross(xAxis);

	HappyMath::Matrix4x4 orientMatrix;
	orientMatrix.SetAxes(xAxis, yAxis, zAxis);

	HappyMath::Matrix4x4 translationMatrix;
	translationMatrix.SetTranslation(center);

	HappyMath::Matrix4x4 objectToWorld = translationMatrix * orientMatrix * scaleMatrix;

	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);

	glColor4d(color.x, color.y, color.z, color.w);

	int numSegments = 100;
	for (int i = 0; i < numSegments; i++)
	{
		double angle = (double(i) / double(numSegments)) * 2.0 * M_PI;
		HappyMath::Vector3 vertex;
		vertex.x = cos(angle);
		vertex.y = sin(angle);

		vertex = objectToWorld.TransformPoint(vertex);

		glVertex3d(vertex.x, vertex.y, vertex.z);
	}

	glEnd();
}

void Drawer::DrawPoint(const HappyMath::Vector3& location, const HappyMath::Vector4& color, bool lit)
{
	this->DrawMesh(&this->boxMesh, location, 0.2, color, lit);
}

void Drawer::DrawVector(const HappyMath::Vector3& location, const HappyMath::Vector3& vector, const HappyMath::Vector4& color, bool lit)
{
	//...
}

void Drawer::DrawMesh(const HappyMath::PolygonMesh* mesh, const HappyMath::Vector3& translation, double scale, const HappyMath::Vector4& color, bool lit)
{
	if (!lit)
		glDisable(GL_LIGHTING);
	else
	{
		glEnable(GL_LIGHTING);
		glEnable(GL_LIGHT0);

		GLfloat lightPos[] = { 0.0f, 20.0f, 0.0f, 1.0f };
		GLfloat diffuse[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat ambient[] = { 0.3f, 0.3f, 0.3f, 1.0f };
		GLfloat specular[] = { 1.0f, 1.0f, 1.0f, 1.0f };
		GLfloat directional[] = { 0.0f, -1.0f, 0.0f, 0.0f };

		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
		glLightfv(GL_LIGHT0, GL_DIFFUSE, diffuse);
		glLightfv(GL_LIGHT0, GL_AMBIENT, ambient);
		glLightfv(GL_LIGHT0, GL_SPECULAR, specular);
		glLightfv(GL_LIGHT0, GL_POSITION, lightPos);

		GLfloat matDiffuse[] = { (GLfloat)color.x, (GLfloat)color.y, (GLfloat)color.z, (GLfloat)color.w };
		GLfloat matSpecular[] = { 1.0f, 1.0f, 1.0f, 1.0f };

		glMaterialfv(GL_FRONT, GL_DIFFUSE, matDiffuse);
		glMaterialfv(GL_FRONT, GL_SPECULAR, matSpecular);
		glMaterialf(GL_FRONT, GL_SHININESS, 32.0f);
	}

	glBegin(GL_TRIANGLES);

	glColor4d(color.x, color.y, color.z, color.w);

	for (const HappyMath::PolygonMesh::Polygon& polygon : mesh->GetPolygonArray())
	{
		if (polygon.vertexArray.size() != 3)
			continue;

		for (int i = 0; i < 3; i++)
		{
			HappyMath::Vector3 vertex = mesh->GetVertex(polygon.vertexArray[i]);

			HappyMath::Vector3 normal = vertex;
			normal.Normalize();

			glNormal3d(normal.x, normal.y, normal.z);

			vertex *= scale;
			vertex += translation;

			glVertex3d(vertex.x, vertex.y, vertex.z);
		}
	}

	glEnd();
}