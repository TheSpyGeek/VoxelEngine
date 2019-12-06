#include <imgui.h>

#include "gameObject.h"
#include "../components/meshRenderer.h"

#include <stdio.h>
#include <iostream>


GameObject::GameObject(int id, std::string n, Transform *t) : m_transform(t){
	setID(id);
	setName(n);

    m_components = std::vector<Component*>();

    // getComponent<MeshRenderer>();
}

GameObject::~GameObject(){
    delete m_transform;
    for(unsigned int i=0; i<m_listOfChildren.size(); i++){
        delete m_listOfChildren[i];
    }
}


void GameObject::setName(std::string n){
    m_name = n;
}

std::string GameObject::getName(){
    return m_name;
}

int GameObject::getID(){
	return m_id;
}


void GameObject::setID(int i){
	m_id = i;
}


Transform *GameObject::getTransform(){
    return m_transform;
}

void GameObject::addChild(GameObject *obj){

    m_listOfChildren.push_back(obj);
}


// trouve l'enfant avec l'ID correspondant et le supprime en récursif
void GameObject::removeChild(int id){
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
void GameObject::deleteAllChildren(){
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



void GameObject::createUI(char *ID){

	ImGui::BeginChild(ID);
    ImGui::Text(m_name.c_str()); ImGui::SameLine();
    ImGui::Text("id : %d", getID());
    ImGui::Separator();
    m_transform->createUI();


    ImGui::EndChild();
}

void GameObject::update(){
    m_transform->update();
}

//// COMPONENT

template< class ComponentType> Component * GameObject::getComponent(){
    for ( Component * component : m_components ) {
        if ( ComponentType* o = dynamic_cast<ComponentType*>(component) ){
            return component;
        }
    }

    return NULL;
}

void GameObject::addComponent( Component *component ) {
    m_components.push_back(component);
}

template< class ComponentType > bool GameObject::removeComponent() {
    if(m_components.empty()){
        return false; 
    }

    
    for (unsigned int i=0; i<m_components.size(); i++ ) {
         
        if ( ComponentType* o = dynamic_cast<ComponentType*>(m_components[i]) ){
            m_components.erase(m_components.begin()+i);
            return true;
        }
    }

    return false;
}