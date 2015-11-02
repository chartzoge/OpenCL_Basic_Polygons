#include "stdafx.h"

Text::Text(Color textColor, Point textLocation, string textToDisplay) : Text::Graphic(textColor) {
	_textColor = textColor;
	_textLocation = textLocation;
	_textToDisplay = textToDisplay;
}

void Text::draw() const {
	cout << "Writing characters out to scene: " << _textToDisplay << endl;

	glColor3f(_textColor.red, _textColor.green, _textColor.blue);
	glRasterPos2i(_textLocation.x, _textLocation.y);

	for (int charIndex = 0; charIndex < _textToDisplay.size(); charIndex++) {
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, _textToDisplay[charIndex]);
	}

	glFlush();
} 