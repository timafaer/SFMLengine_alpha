#include"../../modules/main_srtuctures/Game.h"
//#include"../../modules/main_srtuctures/Scence.h"
//#include"../../modules/main_srtuctures/Entity.h"
//#include"../../modules/components/soul_component.h"

template<class T>
void SoulComponent::set(Game* game, Scence* scence, Entity* entity) {
	obj = new T();
	obj->set(game, scence, entity);
}

void SoulComponent::logic() {
	obj->logic();
}