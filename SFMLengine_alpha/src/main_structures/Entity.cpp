#include"../../modules/main_srtuctures/Game.h"


template<class T>
void Entity::add_component(){
	components.push_back(new T());
}

template<class T>
T& Entity::get_component() const {
	for (auto& comp : components) 
		if (typeid(*comp) == typeid(T))
			return static_cast<T&>(*comp);
}

template<class T>
void Entity::set_soul(Game* game, Scence* scence) {
	get_component<SoulComponent>().set<T>(game, scence, this);
}

void Entity::logic() {
	get_component<SoulComponent>().logic();
}

void Entity::draw(sf::RenderTarget& target, sf::RenderStates states) const {
	target.draw(get_component<DrawComponent>());
}