#include "Shapes.h"

Iblock::Iblock()
{// Assign Values to Positions
	farleftx = 0.f;
	farlefty = 0.f;
	midleftx = 30.f;
	midlefty = 0.f;
	midrightx = 60.f;
	midrighty = 0.f;
	farrightx = 90.f;
	farrighty = 0.f;

	// Set Initial Position
	this->farleft.Cube.setPosition(farleftx, farlefty);
	this->midleft.Cube.setPosition(midleftx, midlefty);
	this->midright.Cube.setPosition(midrightx, midrighty);
	this->farright.Cube.setPosition(farrightx, farrighty);
	// Set Initial Color
	this->farleft.Cube.setFillColor(Color::Cyan);
	this->farleft.Cube.setOutlineColor(Color::Blue);

	this->midleft.Cube.setFillColor(Color::Cyan);
	this->midleft.Cube.setOutlineColor(Color::Blue);

	this->midright.Cube.setFillColor(Color::Cyan);
	this->midright.Cube.setOutlineColor(Color::Blue);

	this->farright.Cube.setFillColor(Color::Cyan);
	this->farright.Cube.setOutlineColor(Color::Blue);

}

void Iblock::Iblock_draw(RenderWindow* window)
{
	window->draw(farleft.Cube);
	window->draw(midleft.Cube);
	window->draw(midright.Cube);
	window->draw(farright.Cube);
}

Jblock::Jblock()
{
	// Set Initial Position


	topleftx = 0.f;
	toplefty = 0.f;
	leftx = 0.f;
	lefty = 30.f;
	middlex = 30.f;
	middley = 30.f;
	rightx = 60.f;
	righty = 30.f;


	this->topleft.Cube.setPosition(topleftx, toplefty);
	this->left.Cube.setPosition(leftx, lefty);
	this->middle.Cube.setPosition(middlex, middley);
	this->right.Cube.setPosition(rightx, righty);

	// Set Initial Color
	this->topleft.Cube.setFillColor(Color::Blue);
	this->topleft.Cube.setOutlineColor(Color::Cyan);

	this->left.Cube.setFillColor(Color::Blue);
	this->left.Cube.setOutlineColor(Color::Cyan);

	this->middle.Cube.setFillColor(Color::Blue);
	this->middle.Cube.setOutlineColor(Color::Cyan);

	this->right.Cube.setFillColor(Color::Blue);
	this->right.Cube.setOutlineColor(Color::Cyan);

}

void Jblock::Jblock_draw(RenderWindow* window)
{
	window->draw(topleft.Cube);
	window->draw(left.Cube);
	window->draw(middle.Cube);
	window->draw(right.Cube);
}

Lblock::Lblock()
{

	toprightx = 60.f;
	toprighty = 0.f;
	leftx = 0.f;
	lefty = 30.f;
	middlex = 30.f;
	middley = 30.f;
	rightx = 60.f;
	righty = 30.f;

	// Set Initial Position
	this->topright.Cube.setPosition(60.f, 0.f);
	this->left.Cube.setPosition(0.f, 30.f);
	this->middle.Cube.setPosition(30.f, 30.f);
	this->right.Cube.setPosition(60.f, 30.f);

	// Set Initial Color
	this->topright.Cube.setFillColor(Color::Magenta);
	this->topright.Cube.setOutlineColor(Color::Red);

	this->left.Cube.setFillColor(Color::Magenta);
	this->left.Cube.setOutlineColor(Color::Red);

	this->middle.Cube.setFillColor(Color::Magenta);
	this->middle.Cube.setOutlineColor(Color::Red);

	this->right.Cube.setFillColor(Color::Magenta);
	this->right.Cube.setOutlineColor(Color::Red);
}

void Lblock::Lblock_draw(RenderWindow* window)
{
	window->draw(topright.Cube);
	window->draw(left.Cube);
	window->draw(middle.Cube);
	window->draw(right.Cube);
}

Oblock::Oblock()
{
	topleftx = 0.f;
	toplefty = 0.f;
	toprightx = 30.f;
	toprighty = 0.f;
	bottomleftx = 0.f;
	bottomlefty = 30.f;
	bottomrightx = 30.f;
	bottomrighty = 30.f;

	// Set Initial Position
	this->topleft.Cube.setPosition(topleftx, toplefty);
	this->topright.Cube.setPosition(toprightx, toprighty);
	this->bottomleft.Cube.setPosition(bottomleftx, bottomlefty);
	this->bottomright.Cube.setPosition(bottomrightx, bottomrighty);

	// Set Initial Color
	this->topleft.Cube.setFillColor(Color::Yellow);
	this->topleft.Cube.setOutlineColor(Color::Red);

	this->topright.Cube.setFillColor(Color::Yellow);
	this->topright.Cube.setOutlineColor(Color::Red);

	this->bottomright.Cube.setFillColor(Color::Yellow);
	this->bottomright.Cube.setOutlineColor(Color::Red);

	this->bottomleft.Cube.setFillColor(Color::Yellow);
	this->bottomleft.Cube.setOutlineColor(Color::Red);
}

void Oblock::Oblock_draw(RenderWindow* window)
{
	window->draw(topright.Cube);
	window->draw(topleft.Cube);
	window->draw(bottomright.Cube);
	window->draw(bottomleft.Cube);
}

Sblock::Sblock()
{

	topmiddlex = 30.f;
	topmiddley = 0.f;
	bottommiddlex = 30.f;
	bottommiddley = 30.f;
	toprightx = 60.f;
	toprighty = 0.f;
	bottomleftx = 0.f;
	bottomlefty = 30.f;

	// Set Initial Position
	this->topmiddle.Cube.setPosition(topmiddlex, topmiddley);
	this->bottommiddle.Cube.setPosition(bottommiddlex, bottommiddley);
	this->topright.Cube.setPosition(toprightx, toprighty);
	this->bottomleft.Cube.setPosition(bottomleftx, bottomlefty);

	// Set Initial Color
	this->topmiddle.Cube.setFillColor(Color::Green);
	this->topmiddle.Cube.setOutlineColor(Color::Cyan);

	this->bottommiddle.Cube.setFillColor(Color::Green);
	this->bottommiddle.Cube.setOutlineColor(Color::Cyan);

	this->topright.Cube.setFillColor(Color::Green);
	this->topright.Cube.setOutlineColor(Color::Cyan);

	this->bottomleft.Cube.setFillColor(Color::Green);
	this->bottomleft.Cube.setOutlineColor(Color::Cyan);
}

void Sblock::Sblock_draw(RenderWindow* window)
{
	window->draw(topmiddle.Cube);
	window->draw(bottommiddle.Cube);
	window->draw(topright.Cube);
	window->draw(bottomleft.Cube);
}

Tblock::Tblock()
{
	topmiddlex = 30.f;
	topmiddley = 0.f;
	bottommiddlex = 30.f;
	bottommiddley = 30.f;
	bottomrightx = 60.f;
	bottomrighty = 30.f;
	bottomleftx = 0.f;
	bottomlefty = 30.f;

	// Set Initial Position
	this->topmiddle.Cube.setPosition(topmiddlex, topmiddley);
	this->bottommiddle.Cube.setPosition(bottommiddlex, bottommiddley);
	this->bottomright.Cube.setPosition(bottomrightx, bottomrighty);
	this->bottomleft.Cube.setPosition(bottomleftx, bottomlefty);

	// Set Initial Color
	this->topmiddle.Cube.setFillColor(Color::Magenta);
	this->topmiddle.Cube.setOutlineColor(Color::Cyan);

	this->bottommiddle.Cube.setFillColor(Color::Magenta);
	this->bottommiddle.Cube.setOutlineColor(Color::Cyan);

	this->bottomright.Cube.setFillColor(Color::Magenta);
	this->bottomright.Cube.setOutlineColor(Color::Cyan);

	this->bottomleft.Cube.setFillColor(Color::Magenta);
	this->bottomleft.Cube.setOutlineColor(Color::Cyan);
}

void Tblock::Tblock_draw(RenderWindow* window)
{
	window->draw(topmiddle.Cube);
	window->draw(bottommiddle.Cube);
	window->draw(bottomright.Cube);
	window->draw(bottomleft.Cube);
}

Zblock::Zblock()
{
	// Set Initial Position
	this->topmiddle.Cube.setPosition(30.f, 0.f);
	this->bottommiddle.Cube.setPosition(30.f, 30.f);
	this->bottomright.Cube.setPosition(60.f, 30.f);
	this->topleft.Cube.setPosition(0.f, 0.f);

	// Set Initial Color
	this->topmiddle.Cube.setFillColor(Color::Red);
	this->topmiddle.Cube.setOutlineColor(Color::Cyan);

	this->bottommiddle.Cube.setFillColor(Color::Red);
	this->bottommiddle.Cube.setOutlineColor(Color::Cyan);

	this->bottomright.Cube.setFillColor(Color::Red);
	this->bottomright.Cube.setOutlineColor(Color::Cyan);

	this->topleft.Cube.setFillColor(Color::Red);
	this->topleft.Cube.setOutlineColor(Color::Cyan);
}

void Zblock::Zblock_draw(RenderWindow* window)
{
	window->draw(topmiddle.Cube);
	window->draw(bottommiddle.Cube);
	window->draw(bottomright.Cube);
	window->draw(topleft.Cube);
}
