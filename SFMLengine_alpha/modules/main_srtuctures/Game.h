#pragma once
#include"Scence.h"
#include<SFML/System.hpp>

// основной класс который имеет доступ ко всему
class Game
{
private:
	//сцены
	std::vector<Scence> scences;
	//текущая сцена для быстрого поиска
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