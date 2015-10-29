#include "stdafx.h"

Text::Text(Color textColor, Point textLocation, string textToDisplay) : Text::Graphic(textColor) {
	_textColor = textColor;
	_textLocation = textLocation;
	_textToDisplay = textToDisplay;
}

void Text::draw() const {
	cout << "Writing characters out to scene: " << _textToDisplay << endl;

	// color it red
	glColor3f(1.0, 0.0, 0.0);
	// drawing text to coordinates 0, 0; aka, center of screen
	glRasterPos2i(0, 0);

	for (int charIndex = 0; charIndex < _textToDisplay.size(); charIndex++) {
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, _textToDisplay[charIndex]);
	}

	// need to call flush after any set of commands are issuee
	glFlush();
} 