#include "stdafx.h"

Text::Text(Color textColor, Point textLocation, string textToDisplay) : Text::Graphic(textColor) {
	_textColor = textColor;
	_textLocation = textLocation;
	_textToDisplay = textToDisplay;
}

void Text::draw() const {
	char *characters = new char[_textToDisplay.size() + 1];
	characters[_textToDisplay.size()] = 0;

	// create array of characters to loop over
	memcpy(characters, _textToDisplay.c_str(), _textToDisplay.size());

	cout << "Writing characters out to scene: " << _textToDisplay << endl;

	// drawing text to coordinates 0, 0; aka, center of screen
	glRasterPos2i(0, 0);

	for (int charIndex = 0; charIndex < _textToDisplay.size(); charIndex++) {
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, characters[charIndex]);
	}
}