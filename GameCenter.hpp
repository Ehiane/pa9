#pragma once 

/*This serves as the control room for the game.*/


#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;


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

private:
	//Private Functions
	void initVariables();
	void initWindows();
	void initEnemies();

	//variables:Window
	RenderWindow* window;
	Event event;
	VideoMode videMode;

	//Game Objects:
	RectangleShape enemy;

};