#include"../../modules/main_srtuctures/Game.h"

void Scence::add_entity() {
	this->entities.push_back(Entity());
}

void Scence::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	for (auto& ent : this->entities) {
		target.draw(ent, states);
	}
}

void Scence::logic() {
	for (auto& ent : this->entities)
		ent.logic();
}
