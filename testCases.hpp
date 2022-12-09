#pragma once
#include "GameCenter.hpp"
#include "LinkedList.hpp"

class testCases
{
public:


	void update();
	void pollEvents();
	void render();

	void testRotation();
	void testMoveLeft();
	void testMoveRight();
	void testMoveDown();
	void testBoundedByGrid();



private:


	void initVariables();
	void initWindows();

	Lblock testLblock;
	ParentShape genericshape = *(new Lblock);
	RenderWindow* window;
	Event event;
	VideoMode videMode;


	ShapeList gameShapeList;
	int type = 1; // 1: I, 2: J, 3: O, 4: Z, 5: S, 6: L, 7: B
	/*int nexttype = 1;
	int savedtype = 1;*/

	ParentShape genericshape = *(new Iblock);
	/*ParentShape nextgenericshape = *(new Iblock);
	ParentShape savedshape = *(new Iblock);*/

};

