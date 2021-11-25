#pragma once
#include"component.h"
#include"../templates/object.h"
//душа хранит объект(разные типы и наследников)
class SoulComponent :public Component
{
private:
	Object* obj;
public:

	template<class T>
	void set(Game* game, Scence* scence, Entity* entity);

	void logic();
};