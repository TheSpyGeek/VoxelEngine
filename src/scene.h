
#ifndef SCENE_H
#define SCENE_H

#ifndef GLM_H
#define GLM_H
#include <glm/glm.hpp>
#include <glm/ext/matrix_transform.hpp>
#include <glm/ext/matrix_clip_space.hpp>
#include <glm/gtc/matrix_inverse.hpp>
#endif

#include <string>
#include <vector>

#include "tools/lights/light.h"
#include "tools/camera.h"

#include "engineObject.h"


class Scene {

    public:
        Scene();
        ~Scene();

        void createUI();
        Camera *getCamera();
        Light *getLight();
        void createUIAtID(int indexItem, char *ID);
        std::vector<std::string> getNameOfAllObjects();

        void addMeshObject();
        void deleteObject(int index);


        std::vector<EngineObject*> objectsEngine;

    private:
        void deleteScene();

};

#endif
