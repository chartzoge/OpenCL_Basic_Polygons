#include "stdafx.h"

Parallelogram::Parallelogram(Color parallelogramColor, Point upperLeft, Point lowerRight, GLint xOffset) : Parallelogram::Graphic(parallelogramColor) {
	_parallelogramColor = parallelogramColor;
	_upperLeft = upperLeft;
	_lowerRight = lowerRight;
	_xOffset = xOffset;
}

void Parallelogram::draw() const {
	cout << "Drawing parallelogram to screen" << endl;

	glColor3f(_parallelogramColor.red, _parallelogramColor.green, _parallelogramColor.blue);

	glBegin(GL_POLYGON);

	GLint height = abs(_upperLeft.y - _lowerRight.y);
	GLint width = abs(_upperLeft.x - _lowerRight.x);

	// upper left
	glVertex2i(_upperLeft.x, _upperLeft.y);
	// upper right
	glVertex2i(_upperLeft.x + width, _upperLeft.y);

	glVertex2i(_lowerRight.x - _xOffset, _lowerRight.y);
	glVertex2i(_lowerRight.x - width - _xOffset, _lowerRight.y);


	glEnd();
}