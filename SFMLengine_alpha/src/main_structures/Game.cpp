#include"../../modules/main_srtuctures/Game.h"

Game::Game() {
	window.create(sf::VideoMode(700, 700), "SFML works!");
	window.setFramerateLimit(60);

	add_scence();
	sh.setFillColor(sf::Color::Green);
	sh.setPosition(sf::Vector2f(200, 200));
	sh.setRadius(40);
	scences[0].get()->get_component<DrawComponent>().set(sh);
	
}

void Game::add_scence() {
	scences.push_back(Scence(this));
	n_sc = &scences.back();
}

void Game::draw() {
	window.clear();
		window.draw(*n_sc);
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
	while (window.isOpen()) {
		even();
		logic();
		draw();
	}
}