
#ifndef SCENE_H
#define SCENE_H



#include <string>
#include <vector>

#include "../tools/lights/light.h"

#include "gameObject.h"

#include "../components/cameraProjective.h"

class Scene {

public:
    Scene();
    ~Scene();

    void createUI();
    CameraProjective* getCamera();
    Light *getLight();
    void createUIAtID(int indexItem, char *ID);
    void drawUIAtID(std::vector<GameObject*> objs, int indexItem, char *ID);
    void getAllObjects(std::vector<std::string> & names, std::vector<int> & ids);

    void update();
    void updateObj(GameObject *obj);
    void inputUpdate();
    void inputUpdateObj(GameObject *obj);
    void physicsUpdate();
    void physicsUpdateObj(GameObject *obj);


    void addGameObject();
    void addGameObject(GameObject *obj);
    void addCube();
    void deleteObject(int id);

    void loadDefaultScene();


    std::vector<GameObject*> objectsEngine;
    int addNewId();

    void togglePause();


private:
    void deleteScene();

    CameraProjective* getCameraRecursive(GameObject *obj, glm::mat4 modelMat);
    Light *getLightRecursive(GameObject *obj);

    int m_idObject = 0;

    bool m_pause;

};

#endif
