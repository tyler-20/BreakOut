#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H

#include "shader.h"

class ResourceManager {
public:
	static Shader LoadShader(std::string vertexPath, std::string geometryPath, std::string fragmentPath);
	static void LoadTexture();
};

#endif // !RESOURCE_MANAGER_H
