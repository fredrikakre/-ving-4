#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "mastermind.h"


int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
	return startValue;
}

void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes) {
	for (int i = 0; i < numTimes; i++) {
		startValue += increment;
	}
}

void swapNumbers(int& helTall_1, int& helTall_2) {
	int temp = helTall_1;
	helTall_1 = helTall_2;
	helTall_2 = temp;
}

int randomWithLimits(int nedre_grense, int ovre_grense) {
	int helt_tilfeldig_tall = rand();
	ovre_grense = ovre_grense - nedre_grense + 1;
	int tilfeldig_tall_med_grense = (helt_tilfeldig_tall % ovre_grense) + nedre_grense;
	return tilfeldig_tall_med_grense;
}

void randomizeVector(vector<int>& vec, int n) {
	for(int i = 1; i <= n; ++i) {
		vec.push_back(randomWithLimits(0, 100));
	}
}
void writeElements(vector<int> vektor, int lengde) {
	for (int k = 0; k < lengde; ++k) {
		cout << vektor[k] << "  |  ";
	}
	cout << endl;
}
vector<int> sortVector(vector<int> vec) {
	int i = 1; int lengde = vec.size();
	while (i < lengde) {
		int j = i;
		while ((j > 0) && (vec[j - 1] > vec[j])) {
			swapNumbers(vec[j - 1], vec[j]);
			j -= 1;
		}
		i += 1;
	}
	return vec;
}

double medianOfVector(vector<int> vec) {
	int lengde = vec.size();
	if (lengde % 2 == 0) {
		return (vec[(lengde / 2) - 1] + vec[(lengde / 2)]) / 2.0;
	}
	else {
		return vec[(lengde / 2.0)];
	}
}

string randomizeString(int antallTegn, char nedre_grense, char ovre_grense) {
	string randomString;
	for (int let = 0; let < antallTegn; ++let) {
		randomString.push_back(randomWithLimits(int(nedre_grense), int(ovre_grense)));
	}
	return randomString;
}

string readInputToString(int lengde, char nedre_grense, char ovre_grense) {
	char bokstav; string ord = {}; int s = 0;
	while (s < lengde) {
		cout << "Skriv en bokstav: "; cin >> bokstav;
		if (isalpha(bokstav)) {
			bokstav = toupper(bokstav);
			if ((int(bokstav) >= int(nedre_grense)) && (int(bokstav) <= int(ovre_grense))) {
				ord.push_back(bokstav); ++s;
			}
			else {
				cout << "Bokstaven du valgte er ikke i riktig intervall.\n";
			}
		}
		else {
			cout << "Dette er ikke en bokstav.\n";
		}

	}
	return ord;
}

int countChar(string ord, char bokstav) {
	int lengde = ord.size(); int counter = 0;
	for (int s = 0; s < lengde; ++s) {
		if (ord[s] == bokstav) {
			counter += 1;
		}
	}
	return counter;
}

vector<int> gradeCountAndAverage(double& average, string grades) {
	int occurences = 0; double total = 0; vector<int> gradeCount;
	for (int i = 65; i <= 70; ++i) {
		occurences = countChar(grades, char(i));
		gradeCount.push_back(occurences);
		total += (65 + 5 - i) * occurences;
	}
	average = (total / grades.size());
	return gradeCount;
}

/* void checkCharacterAndPosition(int& character, int& position, string guess, string code) {
	int fix = 0;
	for (int i = 0; i < guess.size(); ++i) {
		for (int k = 0; k < code.size(); ++k) {
			if (guess[i] == code[k]) {
				if ((i-fix) == k) {
					++position; fix += 1; code.erase(code.begin() + k);
					break;
				}
				else {
					++character; fix += 1; code.erase(code.begin() + k);
					break;
				}
			}
		}
	}
} */

void checkCharacterAndPosition(int& position, string guess, string code) {
	for (int i = 0; i < guess.size(); ++i) {        // Blar igjennom bokstavene du gjettet
		for (int k = 0; k < code.size(); ++k) {     // Sammenlikner med bokstavene i svaret
			if (guess[i] == code[k]) {				// Sjekker om bokstaver er like
				if (i == k) {						// Sjekker om de har samme posisjon
					++position;
					break;
				}

			}
		}
	}
}

void checkCharacter(int& character, string guess2, string code2) {
	for (int i = 0; i < guess2.size(); ++i) {					// Blar gjennom bokstavene du gjettet	
		for (int k = 0; k < code2.size(); ++k) {					// BLar gjennom bokstavene  i svaret
			if (guess2[i] == code2[k]) {							// Sjekker om bokstaver er like
				++character;
				code2.erase(code2.begin() + k);					// Fjerner bokstaven du fan
				break;
			}
		}
	}
}
