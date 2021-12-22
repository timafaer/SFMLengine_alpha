#pragma once

#include"component.h"
#include<SFML/Graphics.hpp>

class DrawComponent :public Component, public sf::Drawable
{

protected:
	sf::Drawable* obj;
public:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const
	{
		target.draw(*this->obj);
	}
	void set(sf::Drawable* obj) { this->obj = obj; }


};
