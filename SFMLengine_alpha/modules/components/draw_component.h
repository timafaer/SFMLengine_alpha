#pragma once
#include<SFML/Graphics.hpp>
#include"component.h"

class DrawComponent : public Component, public sf::Drawable
{
protected:
	sf::Drawable* object;

public:
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;

	void set(sf::Drawable* obj);
};