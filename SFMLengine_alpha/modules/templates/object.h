#pragma once
//объект который мы можем редактировать => изменять его логику и тп
class Game;
class Scence;
class Entity;

class Object
{
protected:// сейчас он просто хранит указатели на все уровни 
	Game* game;
	Scence* scence;
	Entity* entity;
public:

	void set(Game* game, Scence* scence, Entity* entity);

	void logic();

};