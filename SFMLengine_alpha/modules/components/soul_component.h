#pragma once
#include"component.h"
#include"../templates/object.h"

class SoulComponent :public Component
{
private:
	Object* obj;
public:

	template<class T>
	void set(Game* game, Scence* scence, Entity* entity) {
		obj = new T();
		obj->set(game, scence, entity);
	}

	void logic();
};