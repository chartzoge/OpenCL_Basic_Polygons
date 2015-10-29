#include "stdafx.h"

ConvexPolygon::ConvexPolygon(GLint numberOfVerticies, Color polygonColor) : ConvexPolygon::Graphic(polygonColor) {
	this->_numberOfVerticies = numberOfVerticies;
	this->_polygonColor = polygonColor;
}

void ConvexPolygon::draw() const {

}