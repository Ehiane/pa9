#include "Block.hpp"

Block::Block()
{
	Cube.setPosition(10.f, 10.f); //(pixel in float ,pixel in float)
	Cube.setScale(Vector2f(0.5f, 0.5f));
	Cube.setSize(Vector2f(60.f, 60.f)); //100.f confirms tht its a float value, if not a float, there will be issues.
	Cube.setFillColor(Color::Cyan);
	Cube.setOutlineColor(Color::Blue);
	Cube.setOutlineThickness(1.f);
}