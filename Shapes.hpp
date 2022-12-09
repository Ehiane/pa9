#pragma once
#include "Block.hpp"

// Base Shape Class
class ParentShape
{
public:
	ParentShape(float newp1x, float newp1y, float newp2x, float newp2y,
		float newp3x, float newp3y, float newp4x, float newp4y);
	void Draw(RenderWindow* window);

	// Movement Functions
	void MoveLeft();
	void MoveRight();
	void MoveDown();
	void MoveUp();
	void MoveNext(); // Moves block to side of screen to show next block
	void MoveSaved(); // Moves block to side of screen to show saved block

	// Rotate Function //POLYMORPHISM AT PLAY
	virtual void Rotate();

	// Block Points
	Block point1;
	Block point2;
	Block point3;
	Block point4;

	// Block Point Locations
	float point1x;
	float point1y;
	float point2x;
	float point2y;
	float point3x;
	float point3y;
	float point4x;
	float point4y;

	ParentShape* pNext = nullptr;
};

// I Block

class Iblock : public ParentShape
{
public:
	Iblock(float newfarrightx = 90.f, float newfarrighty = 0.f, float newmidrightx = 120.f,
		float newmidrighty = 0.f, float newmidleftx = 150.f, float newmidlefty = 0.f,
		float newfarleftx = 180.f, float newfarlefty = 0.f) :
		ParentShape(newfarrightx, newfarrighty, newmidrightx, newmidrighty,
			newmidleftx, newmidlefty, newfarleftx, newfarlefty)
	{
		//farright = point1;
		//midright = point2;
		//midleft = point3;
		//farleft = point4;
		point1.Cube.setFillColor(Color::Cyan);
		point2.Cube.setFillColor(Color::Cyan);
		point3.Cube.setFillColor(Color::Cyan);
		point4.Cube.setFillColor(Color::Cyan);
	};

	void rotate();
};

// J Block
class Jblock : public ParentShape
{
public:
	Jblock(float newtopleftx = 90.f, float newtoplefty = 0.f, float newmiddlex = 120.f,
		float newmiddley = 30.f, float newleftx = 90.f, float newlefty = 30.f,
		float newrightx = 150.f, float newrighty = 30.f) :
		ParentShape(newtopleftx, newtoplefty, newmiddlex, newmiddley,
			newleftx, newlefty, newrightx, newrighty)
	{
		//topleft = point1;
		//middle = point2;
		//left = point3;
		//right = point4;
		point1.Cube.setFillColor(Color::Color(106, 13, 173));
		point2.Cube.setFillColor(Color::Color(106, 13, 173));
		point3.Cube.setFillColor(Color::Color(106, 13, 173));
		point4.Cube.setFillColor(Color::Color(106, 13, 173));
	};

	void rotate();
};

// L Block

class Lblock : public ParentShape
{
public:
	Lblock(float newtoprightx = 150.f, float newtoprighty = 0.f, float newmiddlex = 120.f,
		float newmiddley = 30.f, float newleftx = 90.f, float newlefty = 30.f,
		float newrightx = 150.f, float newrighty = 30.f) :
		ParentShape(newtoprightx, newtoprighty, newmiddlex, newmiddley,
			newleftx, newlefty, newrightx, newrighty)
	{
		//topright = point1;
		//middle = point2;
		//left = point3;
		//right = point4;
		point1.Cube.setFillColor(Color::Blue);
		point2.Cube.setFillColor(Color::Blue);
		point3.Cube.setFillColor(Color::Blue);
		point4.Cube.setFillColor(Color::Blue);
	};

	void rotate();
};

// O Block

class Oblock : public ParentShape
{
public:
	Oblock(float newtopleftx = 120.f, float newtoplefty = 0.f, float newbottomleftx = 120.f,
		float newbottomlefty = 30.f, float newbottomrightx = 150.f, float newbottomrighty = 30.f,
		float newtoprightx = 150.f, float newtoprighty = 0.f) :
		ParentShape(newtoprightx, newtoprighty, newbottomrightx, newbottomrighty,
			newbottomleftx, newbottomlefty, newtopleftx, newtoplefty)
	{
		//topright = point1;
		//bottomright = point2;
		//bottomleft = point3;
		//topleft = point4;
		point1.Cube.setFillColor(Color::Yellow);
		point2.Cube.setFillColor(Color::Yellow);
		point3.Cube.setFillColor(Color::Yellow);
		point4.Cube.setFillColor(Color::Yellow);
	};

	//void rotate();
};

// S Block

class Sblock : public ParentShape
{
public:
	Sblock(float newtoprightx = 150.f, float newtoprighty = 0.f, float newtopmiddlex = 120.f,
		float newtopmiddley = 0.f, float newbottommiddlex = 120.f, float newbottommiddley = 30.f,
		float newbottomleftx = 90.f, float newbottomlefty = 30.f) :
		ParentShape(newtoprightx, newtoprighty, newtopmiddlex, newtopmiddley,
			newbottommiddlex, newbottommiddley, newbottomleftx, newbottomlefty)
	{
		//topright = point1;
		//topmiddle = point2;
		//bottommiddle = point3;
		//bottomleft = point4;
		point1.Cube.setFillColor(Color::Green);
		point2.Cube.setFillColor(Color::Green);
		point3.Cube.setFillColor(Color::Green);
		point4.Cube.setFillColor(Color::Green);
	};

	void rotate();
};

// T Block

class Tblock :public ParentShape
{
public:
	Tblock(float newtopmiddlex = 120.f, float newtopmiddley = 0.f, float newbottommiddlex = 120.f,
		float newbottommiddley = 30.f, float newbottomleftx = 90.f, float newbottomlefty = 30.f,
		float newbottomrightx = 150.f, float newbottomrighty = 30.f) :
		ParentShape(newtopmiddlex, newtopmiddley, newbottommiddlex, newbottommiddley,
			newbottomleftx, newbottomlefty, newbottomrightx, newbottomrighty)
	{
		//topmiddle = point1;
		//bottommiddle = point2;
		//bottomleft = point3;
		//bottomright = point4;
		point1.Cube.setFillColor(Color::Magenta);
		point2.Cube.setFillColor(Color::Magenta);
		point3.Cube.setFillColor(Color::Magenta);
		point4.Cube.setFillColor(Color::Magenta);
	};

	void rotate();
};

// Z Block

class Zblock : public ParentShape
{
public:
	Zblock(float newtopleftx = 90.f, float newtoplefty = 0.f, float newtopmiddlex = 120.f,
		float newtopmiddley = 0.f, float newbottommiddlex = 120.f, float newbottommiddley = 30.f,
		float newbottomrightx = 150.f, float newbottomrighty = 30.f) :
		ParentShape(newtopleftx, newtoplefty, newtopmiddlex, newtopmiddley,
			newbottommiddlex, newbottommiddley, newbottomrightx, newbottomrighty)
	{
		//topleft = point1;
		//topmiddle = point2;
		//bottommiddle = point3;
		//bottomright = point4;
		point1.Cube.setFillColor(Color::Red);
		point2.Cube.setFillColor(Color::Red);
		point3.Cube.setFillColor(Color::Red);
		point4.Cube.setFillColor(Color::Red);
	};

	void rotate();
};