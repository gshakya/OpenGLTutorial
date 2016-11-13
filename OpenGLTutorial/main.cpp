#include<iostream>
#include "Display.h"
#include "shader.h"
#include "mesh.h"

	
int main() {
	Display dis(800, 600, "PolyGon");
	Shader shader("./res/basicShader");
	Vertex vertices1[] = { Vertex(glm::vec3(-0.7, -1.0,0.0)),
		Vertex(glm::vec3(-1.0, 0.3,0.0)),
		Vertex(glm::vec3(0.0, 1.0,0.0)),
		Vertex(glm::vec3(1.0, 0.3,0.0)),
		Vertex(glm::vec3(0.7, -1.0,0.0))
							};
	Mesh mesh1(vertices1, sizeof(vertices1) / sizeof(vertices1[0]));
	while (!dis.isDisplayClosed()) {
		dis.Clear(1.0f, 1.0f, 1.0f, 1.0f);
		
		shader.Bind();
		mesh1.Draw();
		dis.SwapBuffers();
	}
	return 0;
}