#pragma once
#include"../components/component.h"
#include"../components/draw_component.h"
#include"../components/soul_component.h"
#include<vector>

class Entity:public sf::Drawable
{
private:
	std::vector<Component*> components;
public:
	sf::Vector2f pos;

	template<class T>
	void add_component() {
		components.push_back(new T());
	}

	template<class T>
	T& get_component() const {
		for (auto& comp : components)
			if (typeid(*comp) == typeid(T))
				return static_cast<T&>(*comp);
	}
	//душа - объект получает все ссылки
	template<class T>
	void set_soul(Game* game, Scence* scence) {
		get_component<SoulComponent>().set<T>(game, scence, this);
	}

	void logic();
	
	void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	

};