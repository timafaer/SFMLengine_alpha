#include"../../modules/main_srtuctures/Game.h"

Game::Game() {
	window.create(sf::VideoMode(700, 700), "SFML works!");
	window.setFramerateLimit(60);
}

void Game::add_scence() {
	scences.push_back(Scence());
	n_sc = &scences.back();
}

void Game::draw() {
	
	window.clear(sf::Color::Black);
		window.draw(scences[0]);
		window.display();
}

void Game::logic() {
	n_sc->logic();
}

void Game::even() {
	while (window.pollEvent(event))
		if (event.type == sf::Event::Closed)
			window.close();
}

void Game::main_loop() {
	while (window.isOpen())
	{
		even();
		logic();
		draw();
	}
}
