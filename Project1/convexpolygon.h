#ifndef CONVEX_POLYGON_H
#define CONVEX_POLYGON_H

class ConvexPolygon : public Graphic
{
private:
	GLint _numberOfVerticies;
	Color _polygonColor;

protected:
	ConvexPolygon();
	ConvexPolygon(GLint numberOfVerticies, Color polygonColor);

	GLint numberOfVerticies;
	Point points[];

	virtual void draw() const;
};

#endif