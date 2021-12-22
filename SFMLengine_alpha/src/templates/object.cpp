#include"../../modules/main_srtuctures/Game.h"
#include<iostream>

void Object::set(Game* game, Scence* scence, Entity* entity) {
	this->game = game;
	this->scence = scence;
	this->entity = entity;
}

void Object::logic() {

	std::cout << "hello" << std::endl;
}