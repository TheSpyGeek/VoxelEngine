#include "InputManager.h"
#include <imgui.h>


InputManager::InputManager(){

}

InputManager::~InputManager(){

}

void InputManager::setScene(Scene *sc){
    scene = sc;
}

void InputManager::setUI(UI *u){
    ui = u;
}

void InputManager::update(){
    ImGuiIO& io = ImGui::GetIO();


    if(scene != NULL && ui != NULL){

        // suppr
        if(ImGui::IsKeyPressed(261)){ // 0x105
            scene->deleteObject(ui->getSelected());

        }

        if(io.KeyCtrl && ImGui::IsKeyPressed('N')){
            scene->addMeshObject();
        }
    }

    if(ImGui::IsKeyPressed('H')){
        if(ui != NULL){
            ui->toggleHasToBeDisplayed();
        }
    }


}
