#ifndef CONVEX_POLYGON_H
#define CONVEX_POLYGON_H

class ConvexPolygon : public Graphic
{
protected:
	ConvexPolygon();
	ConvexPolygon(int numberOfVerticies, Color polygonColor);

	int numberOfVerticies;
	Point points[];

	virtual void draw();
};

#endif