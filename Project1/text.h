#ifndef TEXT_H
#define TEXT_H

class Text : public Graphic
{
public:
	Text(Color textColor, Point textLocation, string textToDisplay);
	virtual void draw() const;

private:
	Color _textColor;
	Point _textLocation;
	string _textToDisplay;
};


#endif