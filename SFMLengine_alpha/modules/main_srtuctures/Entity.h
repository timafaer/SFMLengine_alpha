#pragma once
#include"../components/component.h"
#include"../components/draw_component.h"
#include"../components/soul_component.h"
#include<vector>

class Entity:public sf::Drawable
{
private:
	std::vector<Component*> components;
public:
	sf::Vector2f pos;

	template<class T>
	void add_component();

	template<class T>
	T& get_component() const;

	template<class T>
	void set_soul(Game* game, Scence* scence);
	

	void logic();
	
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	

};