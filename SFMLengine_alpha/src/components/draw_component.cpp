#include"../../modules/components/draw_component.h"

void DrawComponent::draw(sf::RenderTarget& target, sf::RenderStates states)const {
	target.draw(*object, states);

}

void DrawComponent::set(sf::Drawable* obj) {
	this->object = obj; 
}