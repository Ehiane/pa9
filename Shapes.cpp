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

void ParentShape::MoveLeft()
{
	// Check the relevant coordinates for each point and determines if it had collided with the boundary in that direction
	if (point1x != 0.f && point2x != 0.f && point3x != 0.f && point4x != 0.f)
	{
		point1x -= 30.f;
		point2x -= 30.f;
		point3x -= 30.f;
		point4x -= 30.f;
		this->point1.Cube.setPosition(point1x, point1y);
		this->point2.Cube.setPosition(point2x, point2y);
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void ParentShape::MoveRight()
{
	// Check the relevant coordinates for each point and determines if it had collided with the boundary in that direction
	if (point1x != 270.f && point2x != 270.f && point3x != 270.f && point4x != 270.f)
	{
		point1x += 30.f;
		point2x += 30.f;
		point3x += 30.f;
		point4x += 30.f;
		this->point1.Cube.setPosition(point1x, point1y);
		this->point2.Cube.setPosition(point2x, point2y);
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void ParentShape::MoveDown()
{
	// Check the relevant coordinates for each point and determines if it had collided with the boundary in that direction
	if (point1y != 570.f && point2y != 570.f && point3y != 570.f && point4y != 570.f)
	{
		point1y += 30.f;
		point2y += 30.f;
		point3y += 30.f;
		point4y += 30.f;
		this->point1.Cube.setPosition(point1x, point1y);
		this->point2.Cube.setPosition(point2x, point2y);
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void ParentShape::MoveUp()
{
	// Check the relevant coordinates for each point and determines if it had collided with the boundary in that direction
	if (point1y != 0.f && point2y != 0.f && point3y != 0.f && point4y != 0.f)
	{
		point1y -= 30.f;
		point2y -= 30.f;
		point3y -= 30.f;
		point4y -= 30.f;
		this->point1.Cube.setPosition(point1x, point1y);
		this->point2.Cube.setPosition(point2x, point2y);
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void ParentShape::MoveNext()
{
	point1x += 300.f;
	point2x += 300.f;
	point3x += 300.f;
	point4x += 300.f;
	point1y += 490.f;
	point2y += 490.f;
	point3y += 490.f;
	point4y += 490.f;
	this->point1.Cube.setPosition(point1x, point1y);
	this->point2.Cube.setPosition(point2x, point2y);
	this->point3.Cube.setPosition(point3x, point3y);
	this->point4.Cube.setPosition(point4x, point4y);
}

void ParentShape::MoveSaved()
{
	point1x += 300.f;
	point2x += 300.f;
	point3x += 300.f;
	point4x += 300.f;
	point1y += 320.f;
	point2y += 320.f;
	point3y += 320.f;
	point4y += 320.f;
	this->point1.Cube.setPosition(point1x, point1y);
	this->point2.Cube.setPosition(point2x, point2y);
	this->point3.Cube.setPosition(point3x, point3y);
	this->point4.Cube.setPosition(point4x, point4y);
}

void ParentShape::Rotate()
{
	std::cout << "Rotate me!!!!!" << std::endl;
	//no need for a rotate for the parent, it never makes an appearance
}

void Iblock::rotate() {
	if (point1y == point2y) { //if the block is horizontal
		point1x = point3x; //orienting the block around point 3
		point1y = point3y + 60;
		point2x = point3x;
		point2y = point3y + 30;
		point4x = point3x;
		point4y = point3y - 30;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point2.Cube.setPosition(point2x, point2y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
	else { // if the block is vertical
		point1x = point3x - 60; //orient the block around point 3
		point1y = point3y;
		point2x = point3x - 30;
		point2y = point3y;
		point4x = point3x + 30;
		point4y = point3y;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point2.Cube.setPosition(point2x, point2y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void Jblock::rotate() {
	if (point3y == point4y) { //if the block is horizontal
		if (point1y > point2y) { //if the tip of the j is above the rest of the block
			point1x = point2x + 30; //rotate clockwise around the second cube
			point1y = point2y - 30;
			point3x = point2x;
			point3y = point2y - 30;
			point4x = point2x;
			point4y = point2y + 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the tip is below the rest of the block
			point1x = point2x - 30; //rotate clockwise around the second cube
			point1y = point2y + 30;
			point3x = point2x;
			point3y = point2y + 30;
			point4x = point2x;
			point4y = point2y - 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
	else { // if the block is vertical
		if (point1x > point2x) { //if the tip is to the left of the rest of the block
			point1x = point2x - 30; //rotate clockwise around the second cube
			point1y = point2y - 30;
			point3x = point2x - 30;
			point3y = point2y;
			point4x = point2x + 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the tip is to the right of the rest of the block
			point1x = point2x + 30; //rotate clockwise around the second cube
			point1y = point2y + 30;
			point3x = point2x + 30;
			point3y = point2y;
			point4x = point2x - 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
}

void Lblock::rotate() {
	if (point3y == point4y) { //if the block is horizontal
		if (point1y > point2y) { //if the tip of the l is above the rest of the block
			point1x = point2x + 30; //rotate clockwise around the second cube
			point1y = point2y + 30;
			point3x = point2x;
			point3y = point2y - 30;
			point4x = point2x;
			point4y = point2y + 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the tip is below the rest of the block
			point1x = point2x - 30; //rotate clockwise around the second cube
			point1y = point2y - 30;
			point3x = point2x;
			point3y = point2y + 30;
			point4x = point2x;
			point4y = point2y - 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
	else { // if the block is vertical
		if (point1x > point2x) { //if the tip is to the left of the rest of the block
			point1x = point2x + 30; //rotate clockwise around the second cube
			point1y = point2y - 30;
			point3x = point2x - 30;
			point3y = point2y;
			point4x = point2x + 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the tip is to the right of the rest of the block
			point1x = point2x - 30; //rotate clockwise around the second cube
			point1y = point2y + 30;
			point3x = point2x + 30;
			point3y = point2y;
			point4x = point2x - 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
}

//void Oblock::rotate() {
//	//no need for oblock rotation, it is symmetric from all directions
//}

void Sblock::rotate() {
	if (point1y == point2y) { // if the s block is horizontal
		point1x = point2x; //rotate cubes clockwise around second cube
		point1y = point2y + 30;
		point3x = point2x - 30;
		point3y = point2y;
		point4x = point2x - 30;
		point4y = point2y - 30;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
	else { //if the block is vertical
		point1x = point2x + 30; //rotate cubes clockwise around second cube
		point1y = point2y;
		point3x = point2x;
		point3y = point2y + 30;
		point4x = point2x - 30;
		point4y = point2y + 30;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void Zblock::rotate() {
	if (point1y == point2y) { // if the z block is horizontal
		point1x = point2x; //rotate cubes clockwise around second cube
		point1y = point2y - 30;
		point3x = point2x - 30;
		point3y = point2y;
		point4x = point2x - 30;
		point4y = point2y + 30;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
	else { //if the block is vertical
		point1x = point2x - 30; //rotate cubes clockwise around second cube
		point1y = point2y;
		point3x = point2x;
		point3y = point2y + 30;
		point4x = point2x + 30;
		point4y = point2y + 30;
		this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
		this->point3.Cube.setPosition(point3x, point3y);
		this->point4.Cube.setPosition(point4x, point4y);
	}
}

void Tblock::rotate() {
	if (point1x == point2x) { //if the t block is horizontal
		if (point1y < point2y) { //if the bottom of the t is above the rest
			point1x = point2x + 30;
			point1y = point2y;
			point3x = point2x;
			point3y = point2y - 30;
			point4x = point2x;
			point4y = point2y + 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the bottom of the t is below the rest
			point1x = point2x - 30;
			point1y = point2y;
			point3x = point2x;
			point3y = point2y + 30;
			point4x = point2x;
			point4y = point2y - 30;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
	else { //if the t block is vertical
		if (point1x > point2x) { //if the tip of the t is to the right of the rest
			point1x = point2x;
			point1y = point2y + 30;
			point3x = point2x + 30;
			point3y = point2y;
			point4x = point2x - 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
		else { //if the tip of the t is to the left of the rest
			point1x = point2x;
			point1y = point2y - 30;
			point3x = point2x - 30;
			point3y = point2y;
			point4x = point2x + 30;
			point4y = point2y;
			this->point1.Cube.setPosition(point1x, point1y); //change positions of cubes
			this->point3.Cube.setPosition(point3x, point3y);
			this->point4.Cube.setPosition(point4x, point4y);
		}
	}
}
