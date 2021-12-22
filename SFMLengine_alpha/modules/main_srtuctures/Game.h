#pragma once
#include"Scence.h"
#include<SFML/System.hpp>

class Editor;

class Game
{
private:

	std::vector<Scence> scences;

	Scence* n_sc;
	sf::RenderWindow window;
	sf::Texture texture;
	sf::Event event;
	sf::RectangleShape sh;

	void add_scence();

	void draw();

	void logic();

	void even();
public:
	Game();

	void main_loop();
	friend class Editor;
};
