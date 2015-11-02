#include "stdafx.h"

RegularPolygon::RegularPolygon(Color regularPolygonColor, GLint numberOfSides, Point centerLocation, GLint radius) : RegularPolygon::Graphic(regularPolygonColor) {
	_regularPolygonColor = regularPolygonColor;
	_numberOfSides = numberOfSides;
	_centerLocation = centerLocation;
	_radius = radius;
}

void RegularPolygon::draw() const{
	cout << "Drawing regular polygon to screen" << endl;

	glColor3f(_regularPolygonColor.red, _regularPolygonColor.green, _regularPolygonColor.blue);

	GLdouble theta;
	GLint x, y;

	glBegin(GL_POLYGON);

	for (int pointIndex = 0; pointIndex < _numberOfSides; pointIndex++) {
		theta = 2 * PI * pointIndex / _numberOfSides;
		x = _centerLocation.x + _radius * cos(theta);
		y = _centerLocation.y + _radius * sin(theta);
		glVertex2i(x, y);
	}

	glEnd();
}