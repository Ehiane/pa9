#pragma once

#include "Block.hpp"

// I Block

class Iblock
{
public:
	Iblock();
	void Iblock_draw(RenderWindow* window);

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