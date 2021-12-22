#include"../../modules/main_srtuctures/Game.h"



void Entity::logic() {
	get_component<SoulComponent>().logic();
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(get_component<DrawComponent>(),states);
}