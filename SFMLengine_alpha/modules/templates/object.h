#pragma once
//������ ������� �� ����� ������������� => �������� ��� ������ � ��
class Game;
class Scence;
class Entity;

class Object
{
protected:// ������ �� ������ ������ ��������� �� ��� ������ 
	Game* game;
	Scence* scence;
	Entity* entity;
public:

	void set(Game* game, Scence* scence, Entity* entity);

	void logic();

};