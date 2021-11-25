#include"../../modules/main_srtuctures/Game.h"
//#include"../../modules/main_srtuctures/Scence.h"
//#include"../../modules/main_srtuctures/Entity.h"
//#include"../../modules/templates/object.h"
#include<iostream>

void Object::set(Game* game, Scence* scence, Entity* entity) {
	this->game = game;
	this->scence = scence;
	this->entity = entity;
}

void Object::logic() {

	std::cout << "hello" << std::endl;
}