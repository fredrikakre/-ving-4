#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "mastermind.h"



void playMastermind() {
	constexpr int size = 4; constexpr int letters = 6; 
	int character, position; string code, guess; int tries = 1; int max = 4;
	code = randomizeString(size, 'A', char(65 + letters - 1)); cout << code << endl;
	do {
		character = 0; position = 0;
		guess = readInputToString(size, 'A', char(65 + letters - 1)); cout << "Your guess: " << guess << endl;
		checkCharacterAndPosition(position, guess, code);
		checkCharacter(character, guess, code);
		cout << "Antall riktige bokstaver: " << character << endl << "Antall riktige bokstaver i riktig posisjon: " << position << endl;
		++tries;
	} while ((position != size) && (tries < max));
	if ((tries == max) && (position != size)) {
		cout << "You loose. \n";
	}
	else {
		cout << "You win.\n";
	}

}