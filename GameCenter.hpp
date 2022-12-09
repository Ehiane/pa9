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

	//Checks for Collision
	bool checkforCollisions()
	{
		bool truth;
		ParentShape* pCur = gameShapeList.pHead;
		if (gameShapeList.length > 0)
		{
			for (int i = 0; i <= gameShapeList.length; i++)
			{
				if (((genericshape.point1x == pCur->point1x) && (genericshape.point1y == pCur->point1y)) || ((genericshape.point1x == pCur->point2x) && (genericshape.point1y == pCur->point2y))
					|| ((genericshape.point1x == pCur->point3x) && (genericshape.point1y == pCur->point3y)) || ((genericshape.point1x == pCur->point4x) && (genericshape.point1y == pCur->point4y)))
				{
					truth = true;
					return truth;
				}
				if (((genericshape.point2x == pCur->point1x) && (genericshape.point2y == pCur->point1y)) || ((genericshape.point2x == pCur->point2x) && (genericshape.point2y == pCur->point2y))
					|| ((genericshape.point2x == pCur->point3x) && (genericshape.point2y == pCur->point3y)) || ((genericshape.point2x == pCur->point4x) && (genericshape.point2y == pCur->point4y)))
				{
					truth = true;
					return truth;
				}
				if (((genericshape.point3x == pCur->point1x) && (genericshape.point3y == pCur->point1y)) || ((genericshape.point3x == pCur->point2x) && (genericshape.point3y == pCur->point2y))
					|| ((genericshape.point3x == pCur->point3x) && (genericshape.point3y == pCur->point3y)) || ((genericshape.point3x == pCur->point4x) && (genericshape.point3y == pCur->point4y)))
				{
					truth = true;
					return truth;
				}
				if (((genericshape.point4x == pCur->point1x) && (genericshape.point4y == pCur->point1y)) || ((genericshape.point4x == pCur->point2x) && (genericshape.point4y == pCur->point2y))
					|| ((genericshape.point4x == pCur->point3x) && (genericshape.point4y == pCur->point3y)) || ((genericshape.point4x == pCur->point4x) && (genericshape.point4y == pCur->point4y)))
				{
					truth = true;
					return truth;
				}
				pCur = pCur->pNext;
			}
		}
		truth = false;
		return truth;
	};

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
	int type = 1; // 1: I, 2: J, 3: O, 4: Z, 5: S, 6: L, 7: B
	int nexttype = 1;
	int savedtype = 1;

	ParentShape genericshape = *(new Iblock);
	ParentShape nextgenericshape = *(new Iblock);
	ParentShape savedshape = *(new Iblock);

	//Game Objects:
	//RectangleShape enemy;
};