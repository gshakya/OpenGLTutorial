#pragma once
#include <string>

#include <GL\glew.h>


class Shader
{
public:
	Shader(const std::string& fileName);
	
	void Bind();

	~Shader();


private: 
	static const unsigned int NUM_SHADER = 2;
	Shader(const Shader& other ){}
	void operator=(const Shader& other) {}

	GLuint m_program;
	GLuint m_shader[NUM_SHADER];
};

