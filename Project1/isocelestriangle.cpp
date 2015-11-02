#include "stdafx.h"

// start: x, y = 0
// height: 5
// width: 10

IsoscelesTriangle::IsoscelesTriangle(Color triangleColor, Point topVertexLocation, GLdouble height, GLdouble width) : IsoscelesTriangle::Graphic(triangleColor) {
	_triangleColor = triangleColor;
	_topVertexLocation = topVertexLocation;
	_height = height;
	_width = width;
}

void IsoscelesTriangle::draw() const {
	cout << "Drawing triangle to screen" << endl;

	glColor3f(_triangleColor.red, _triangleColor.green, _triangleColor.blue);

	glBegin(GL_TRIANGLES);

	glVertex2i(_topVertexLocation.x, _topVertexLocation.y);
	glVertex2i(_topVertexLocation.x - _width / 2, _topVertexLocation.y - _height);
	glVertex2i(_topVertexLocation.x + _width / 2, _topVertexLocation.y - _height);

	glEnd();
}