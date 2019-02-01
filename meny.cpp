#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "mastermind.h"

void meny() {
	int answer = 10;
	do {
		cout << "\nVelg funksjon:\n" << "0) Exit.\n" << "1) testCallByValue.\n" << "2) testCallByReference.\n" << "3) testVectorSorting.\n" << "4) testString.\n" << "5) readInputToString. \n" << "6) playMastermind. \n";
		cin >> answer;
		switch (answer) {
		case 1:
			cout << "Du valgte testCallByValue.\n";
			testCallByValue();
			break;
		case 2:
			cout << "Du valgte testCallByReference.\n";
			testCallByReference();
			break;
		case 3:
			cout << "Du valgte void testVectorSorting.\n";
			testVectorSorting();
			break;
		case 4:
			cout << "Du valgte testString.\n";
			testString();
			break;
		case 5:
			cout << "Du valgte readInputToString. \n"; 
			cout << readInputToString(5, 'A', 'F'); 
			break;
		case 6:
			cout << "Du valgte playMastermind. \n";
			playMastermind();
			break;
		}
	} while (answer != 0);
}
