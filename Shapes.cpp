#include "Shapes.hpp"

// Parent Shape Constructor
ParentShape::ParentShape(float newp1x, float newp1y, float newp2x, float newp2y, 
	float newp3x, float newp3y, float newp4x, float newp4y)
{
	using std::cout;
	using std::endl;
	cout << "in parent constructor" << endl;

	// Assigns the default values for each shape to the parent shape values
	point1x = newp1x;
	point1y = newp1y;
	point2x = newp2x;
	point2y = newp2y;
	point3x = newp3x;
	point3y = newp3y;
	point4x = newp4x;
	point4y = newp4y;
	this->point1.Cube.setPosition(point1x, point1y);
	this->point2.Cube.setPosition(point2x, point2y);
	this->point3.Cube.setPosition(point3x, point3y);
	this->point4.Cube.setPosition(point4x, point4y);
}

void ParentShape::ParentDraw(RenderWindow* window)
{
	window->draw(point1.Cube);
	window->draw(point2.Cube);
	window->draw(point3.Cube);
	window->draw(point4.Cube);
} 

void Iblock::Draw(RenderWindow* window)
{
	window->draw(point1.Cube);
	window->draw(point2.Cube);
	window->draw(point3.Cube);
	window->draw(point4.Cube);
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
	// Assign Values to Positions
	topmiddlex = 30.f;
	topmiddley = 0.f;
	bottommiddlex = 30.f;
	bottommiddley = 30.f;
	bottomrightx = 60.f;
	bottomrighty = 30.f;
	topleftx = 0.f;
	toplefty = 0.f;

	// Set Initial Position
	this->topmiddle.Cube.setPosition(topmiddlex, topmiddley);
	this->bottommiddle.Cube.setPosition(bottommiddlex, bottommiddley);
	this->bottomright.Cube.setPosition(bottomrightx, bottomrighty);
	this->topleft.Cube.setPosition(topleftx, toplefty);

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