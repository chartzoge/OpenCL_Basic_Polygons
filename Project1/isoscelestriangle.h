#ifndef ISOCELES_TRIANGLE_H
#define ISOCELES_TRIANGLE_H

class IsoscelesTriangle : public Graphic {
public:
	IsoscelesTriangle(Color triangleColor, Point topVertexLocation, GLdouble height, GLdouble width);

	virtual void draw() const;

private:
	Color _triangleColor;
	Point _topVertexLocation;
	GLdouble _height;
	GLdouble _width;
};

#endif