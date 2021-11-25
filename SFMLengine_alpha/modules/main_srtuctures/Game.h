#pragma once
#include"Scence.h"
#include<SFML/System.hpp>
class Game
{
private:
	std::vector<Scence> scences;
	Scence* n_sc;
	sf::RenderWindow window;
	sf::Texture texture;
	sf::Event event;

public:
	Game();

	void add_scence();

	void draw();

	void logic();

	void even();

	void main_loop();
	
};