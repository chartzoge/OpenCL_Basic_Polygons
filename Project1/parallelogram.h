#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

class Parallelogram : public Graphic {
public:
	Parallelogram(Color parallelogramColor, Point upperLeft, Point lowerRight, GLint xOffset);

	virtual void draw() const;
};

#endif