#pragma once
#include <iostream>
#include <vector>
#include "glm.hpp"

class Mesh
{
public:
	Mesh(const char* name);
	~Mesh();

	void CreateQuad();
	void CreateCircle();
	void CreateLine();


	virtual void draw();

	std::string GetName() { return name; };
protected:
	void CreateMesh();

	std::vector<glm::vec3> vertices;
	std::vector<glm::vec2> uvs;
	std::vector<unsigned int> indices;

	unsigned int vbo = 0;
	unsigned int ibo = 0;
	unsigned int vao = 0;

	std::string name;
	bool hasIBO = false;


	bool isLine = false;
};
