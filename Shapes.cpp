#include "Shapes.hpp"

// Parent Shape Constructor
ParentShape::ParentShape(float newp1x, float newp1y, float newp2x, float newp2y,
	float newp3x, float newp3y, float newp4x, float newp4y)
{
	using std::cout;
	using std::endl;
	//cout << "in parent constructor" << endl;

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

void ParentShape::Draw(RenderWindow* window)
{
	window->draw(point1.Cube);
	window->draw(point2.Cube);
	window->draw(point3.Cube);
	window->draw(point4.Cube);
}