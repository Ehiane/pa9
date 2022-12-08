#pragma once 

/*This serves as the control room for the game.*/


#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;
#include "Shapes.hpp"
#include "linkedlist.hpp"

class Game {

public:

	Game();
	virtual ~Game();

	//GameFunctions:

	void update();
	void pollEvents();
	void render();



	//Accessors:
	const bool running() const;

	ParentShape genericshape = *(new Iblock);

	/*Iblock testIblock;
	Jblock testJblock;
	Oblock testOblock;
	Zblock testZblock;
	Sblock testSblock;
	Lblock testLblock;
	Tblock testTblock;*/

private:
	//Private Functions
	void initVariables();
	void initWindows();
	void initEnemies();

	//variables:Window
	RenderWindow* window;
	Event event;
	VideoMode videMode;

	ShapeList gameShapeList;

	//Game Objects:
	//RectangleShape enemy;
};