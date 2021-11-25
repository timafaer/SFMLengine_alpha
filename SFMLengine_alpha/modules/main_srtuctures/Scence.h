#pragma once
#include"Entity.h"

class Scence : public sf::Drawable
{
private:
	std::vector<sf::View> views;
	std::vector<Entity> entities;
public:
	Scence(Game* game);
	void add_entity();

	Entity* get(int n = 0) { return &entities[n]; }//придумать класс редактора

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	
	void logic();

	template<class T>
	void set(Game* game,int numb=0);

	//временно
private:
	sf::CircleShape sh;
};