#include "cell.hpp"

double Cell::getX() const {
	return x;
}

double Cell::getY() const {
	return y;
}

void Cell::setX(const double x_axis) {
	x = x_axis;
}

void Cell::setY(const double y_axis) {
	y = y_axis;
}