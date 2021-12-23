#include"../../modules/main_srtuctures/Game.h"

Scence::Scence(Game* game) {
	add_entity();
	entities[0].add_component<DrawComponent>();
	entities[0].add_component<SoulComponent>();
	entities[0].set_soul<Object>(game, this);
	
}

void Scence::add_entity() {
	entities.push_back(Entity());
}

void Scence::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	for (auto& ent : entities) 
		target.draw(ent);
}

void Scence::logic() {
	for (auto& ent : entities)
		ent.logic();
}

