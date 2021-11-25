#include"../../modules/main_srtuctures/Game.h"

Game::Game() {
	window.create(sf::VideoMode(700, 700), "SFML works!");
	window.setFramerateLimit(60);

	add_scence();
	
}

void Game::add_scence() {
	scences.push_back(Scence(this));
	n_sc = &scences.back();
}

void Game::draw() {
	
		window.draw(*n_sc);
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
	even();
	logic();
	draw();
}