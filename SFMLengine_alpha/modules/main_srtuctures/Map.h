#pragma once
#include<string>
#include<SFML/Graphics.hpp>
enum class type {
	walls=0,
	ground
};

class Map
{
private:
	std::string filename;
	sf::Texture* tiles;
	sf::VertexArray walls;
	sf::VertexArray ground;
	sf::Vector2u scale;
	sf::Vector2i size;
	sf::VertexArray* print;
public:
	int high = 5;

	virtual void random();

	virtual void load_from_file(std::string filename);

	void set_scale(sf::Vector2u scale);

	void set_texture(sf::Texture* tiles);

	sf::VertexArray& drawing(type t);
};