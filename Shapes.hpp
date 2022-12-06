#pragma once
#include "Block.hpp"

// Base Shape Class
class ParentShape
{
public:
	ParentShape(float newp1x, float newp1y, float newp2x, float newp2y,
		float newp3x, float newp3y, float newp4x, float newp4y);
	void ParentDraw(RenderWindow* window);

	Block point1;
	Block point2;
	Block point3;
	Block point4;

	float point1x;
	float point1y;
	float point2x;
	float point2y;
	float point3x;
	float point3y;
	float point4x;
	float point4y;
};

// I Block

class Iblock : public ParentShape
{
public:
	Iblock(float newfarrightx = 0.f, float newfarrighty = 0.f, float newmidrightx = 30.f,
		float newmidrighty = 0.f, float newmidleftx = 60.f, float newmidlefty = 0.f,
		float newfarleftx = 90.f, float newfarlefty = 0.f) : 
		ParentShape(newfarrightx, newfarrighty, newmidrightx, newmidrighty,
			newmidleftx, newmidlefty, newfarleftx, newfarlefty)
	{
		//farright = point1;
		//midright = point2;
		//midleft = point3;
		//farleft = point4;
	};
	void Draw(RenderWindow* window);
};

// J Block
class Jblock
{
public:
	Jblock();
	void Jblock_draw(RenderWindow* window);

	float topleftx;
	float toplefty;

	float leftx;
	float lefty;

	float middlex;
	float middley;

	float rightx;
	float righty;


private:
	Block topleft;
	Block left;
	Block middle;
	Block right;
};

// L Block

class Lblock
{
public:
	Lblock();
	void Lblock_draw(RenderWindow* window);

	float toprightx;
	float toprighty;
	float leftx;
	float lefty;
	float middlex;
	float middley;
	float rightx;
	float righty;


private:
	Block topright;
	Block left;
	Block middle;
	Block right;
};
// O Block

class Oblock
{
public:
	Oblock();
	void Oblock_draw(RenderWindow* window);

	float toprightx;
	float toprighty;

	float topleftx;
	float toplefty;

	float bottomrightx;
	float bottomrighty;

	float bottomleftx;
	float bottomlefty;

private:
	Block topright;
	Block topleft;
	Block bottomright;
	Block bottomleft;
};

class Sblock
{
public:
	Sblock();
	void Sblock_draw(RenderWindow* window);

	float topmiddlex;
	float topmiddley;

	float bottommiddlex;
	float bottommiddley;

	float toprightx;
	float toprighty;

	float bottomleftx;
	float bottomlefty;

private:
	Block topmiddle;
	Block bottommiddle;
	Block topright;
	Block bottomleft;
};

// T Block

class Tblock
{
public:
	Tblock();
	void Tblock_draw(RenderWindow* window);

	float topmiddlex;
	float topmiddley;

	float bottommiddlex;
	float bottommiddley;

	float bottomrightx;
	float bottomrighty;

	float bottomleftx;
	float bottomlefty;

private:
	Block topmiddle;
	Block bottommiddle;
	Block bottomright;
	Block bottomleft;
};

// Z Block

class Zblock
{
public:
	Zblock();
	void Zblock_draw(RenderWindow* window);

	// Positions
	float topmiddlex;
	float topmiddley;

	float bottommiddlex;
	float bottommiddley;

	float bottomrightx;
	float bottomrighty;

	float topleftx;
	float toplefty;

private:
	Block topmiddle;
	Block bottommiddle;
	Block bottomright;
	Block topleft;
};