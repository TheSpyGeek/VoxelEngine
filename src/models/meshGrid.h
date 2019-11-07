

#ifndef MESHGRID_H
#define MESHGRID_H

#ifndef GLM_H
#define GLM_H
#include <glm/glm.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/matrix_clip_space.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#endif

#include "mesh.h"

#include <vector>

class MeshGrid : public Mesh {


public:
	MeshGrid(unsigned int size = 16, float w = 1.0f, float z = 0.0f);
	~MeshGrid();

	void recreate() override;
	void createUI();

private:
	void createMesh(int size, float width, float z);
	void addVertex(unsigned int arrayPos, glm::vec3 pos, glm::vec3 n, glm::vec3 tangent, glm::vec3 col, glm::vec2 uv);
	void cleanup();

	glm::vec3 defaultNormal = glm::vec3(0,0,1);
	glm::vec3 defaultColor = glm::vec3(0,1,0);
	glm::vec3 defaultTangent = glm::vec3(1,0,0);

	int nbPointPerRowColumn = 0;
	float width = 0.0f;
	float gridZ = 0.0f;

};





#endif