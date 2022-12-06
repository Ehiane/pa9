#pragma once

#include "Cell.hpp"

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;

class Block
{
public:
	//constructor for Block
	Block(); //group of cells.

	RectangleShape Cube;
};