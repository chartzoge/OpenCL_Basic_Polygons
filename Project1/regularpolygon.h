#ifndef REGULAR_POLYGON_H
#define REGULAR_POLYGON_H

class RegularPolygon : public Graphic {
public:
	RegularPolygon(Color regularPolygonColor, GLint numberOfSides, Point centerLocation, GLint radius);

	virtual void draw() const;
};

#endif