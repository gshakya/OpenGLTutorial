

#include "mesh.h"



void Mesh::Draw() {
	glBindVertexArray(m_vertexArrayObject);
	glDrawArrays(GL_POLYGON,0,m_drawCount);

	glBindVertexArray(0);

}

Mesh::Mesh(Vertex* vertices , unsigned int numVertices)
{
	m_drawCount = numVertices;
	glGenVertexArrays(1, &m_vertexArrayObject);
	glBindVertexArray(m_vertexArrayObject);

	glGenBuffers(NUM_BUFFERS, m_vertexArrayBuffer);	
	glBindBuffer(GL_ARRAY_BUFFER, m_vertexArrayBuffer[POSITION_VB]);
	glBufferData(GL_ARRAY_BUFFER, numVertices*sizeof(vertices[0]),vertices,GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, false, 0, 0);

	glBindVertexArray(0);
}


Mesh::~Mesh()
{
	glDeleteVertexArrays(1,&m_vertexArrayObject);
}