#ifndef MESH_H
#define MESH_H


#include <glm\glm.hpp>
#include<GL\glew.h>

class Vertex {
public:
	Vertex(const glm::vec3 pos) {
		this->pos = pos;
	}
private:
	glm::vec3 pos;


protected:

};


class Mesh
{
public:
	Mesh(Vertex* vertices, unsigned int numVertices);
	void Draw();
	~Mesh();

private:
	Mesh(const Mesh& other);
	void operator=(const Mesh& other);

	enum {
		POSITION_VB,
		NUM_BUFFERS
	};

	GLuint m_vertexArrayObject;
	GLuint m_vertexArrayBuffer[NUM_BUFFERS];
	unsigned int m_drawCount;

};


#endif

