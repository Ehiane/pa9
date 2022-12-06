#pragma once
#include "GameCenter.h"
#include "Block.h"

// I Block

class Iblock
{
public:
	Iblock();
	void Iblock_draw(RenderWindow* window);

	// Positions
	float farleftx;
	float farlefty;

	float midleftx;
	float midlefty;

	float farrightx;
	float farrighty;

	float midrightx;
	float midrighty;

private:
	Block farleft;
	Block midleft;
	Block farright;
	Block midright;

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

private:
	Block topmiddle;
	Block bottommiddle;
	Block bottomright;
	Block topleft;
};