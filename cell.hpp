#pragma once

#include "game.hpp"

//base class
class Cell {
public:

	Cell(const double x_axis, const double y_axis) {

		x = x_axis;
		y = y_axis;
	}
	~Cell() {}

	Cell(Cell& existingCell) {
		x = existingCell.getX();
		y = existingCell.getY();
	}

	//getters:
	double getX() const;
	double getY() const;
	//setters:
	void setX(const double x_axis);
	void setY(const double y_axis);


private:
	double x;
	double y;

};