#pragma once
#include"Entity.h"
#include"Map.h"
class Scence : public sf::Drawable
{
private:
	std::vector<sf::View> views;

	std::vector<Entity> entities;

	std::vector<Map*> locations;
	Map* local;

	Entity hero;
public:


	void add_entity();

	template<class T>
	void add_map() {
		locations.push_back(new T());
		local = locations.back();
	}

	Entity* get(int n = 0) { return &entities[n]; }

	Entity& hero() { return hero; }

	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	
	void logic();
	
	template<class T>
	void  set(Game* game, int numb) {
		this->entities[numb].set_soul<T>(game, this);
	}

};