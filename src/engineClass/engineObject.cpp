#include <imgui.h>

#include "engineObject.h"

#include <stdio.h>
#include <iostream>


EngineObject::EngineObject(int id, std::string n, Transform *t) : m_transform(t){
	setID(id);
	setName(n);
}

EngineObject::~EngineObject(){
    delete m_transform;
    for(unsigned int i=0; i<m_listOfChildren.size(); i++){
        delete m_listOfChildren[i];
    }
}


void EngineObject::setName(std::string n){
    m_name = n;
}

std::string EngineObject::getName(){
    return m_name;
}

int EngineObject::getID(){
	return m_id;
}


void EngineObject::setID(int i){
	m_id = i;
}


Transform *EngineObject::getTransform(){
    return m_transform;
}

void EngineObject::addChild(EngineObject *obj){

    m_listOfChildren.push_back(obj);
}


// trouve l'enfant avec l'ID correspondant et le supprime en récursif
void EngineObject::removeChild(int id){
    for(unsigned int i=0; i<m_listOfChildren.size(); i++){
        if(m_listOfChildren[i]->getID() == id){

            m_listOfChildren[i]->deleteAllChildren();
            delete(m_listOfChildren[i]);
            m_listOfChildren.erase(m_listOfChildren.begin()+i);
            return;
        }
    }
}


// supprime tous les enfants de ce gameobject en récursif
void EngineObject::deleteAllChildren(){
    for(unsigned int i=m_listOfChildren.size()-1; i >=0; i--){
        if(m_listOfChildren[i]->m_listOfChildren.size() == 0){ // n'a pas d'enfant
            delete(m_listOfChildren[i]);
            m_listOfChildren.erase(m_listOfChildren.begin()+i);
        } else {
            m_listOfChildren[i]->deleteAllChildren();
            delete(m_listOfChildren[i]);
        }
    }
}



void EngineObject::createUI(char *ID){

	ImGui::BeginChild(ID);
    ImGui::Text(m_name.c_str()); ImGui::SameLine();
    ImGui::Text("id : %d", getID());
    ImGui::Separator();
    m_transform->createUI();


    ImGui::EndChild();
}

void EngineObject::update(){
    m_transform->update();
}
