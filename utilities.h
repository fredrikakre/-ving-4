#pragma once

int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int& startValue, int& increment, int& numTimes);
void swapNumbers(int& helTall_1, int& helTall_2);
int randomWithLimits(int nedre_grense, int ovre_grense);
void randomizeVector(vector<int>& vec, int n);
void writeElements(vector<int> vektor, int lengde);
vector<int> sortVector(vector<int> vec);
double medianOfVector(vector<int> vec);
string randomizeString(int antallTegn, char nedre_grense, char ovre_grense);
string readInputToString(int lengde, char nedre_grense, char ovre_grense);
int countChar(string ord, char bokstav);
vector<int> gradeCountAndAverage(double& average, string grades);
void checkCharacterAndPosition(int& position, string guess, string code);
void checkCharacter(int& character, string guess2, string code2);