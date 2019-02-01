#include "std_lib_facilities.h"
#include "utilities.h"
#include "tests.h"
#include "mastermind.h"


void testCallByValue() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	int result = incrementByValueNumTimes(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations
		<< " result: " << result << endl;
}

void testCallByReference() {
	int v0 = 5;
	int increment = 2;
	int iterations = 10;
	incrementByValueNumTimesRef(v0, increment, iterations);
	cout << "v0: " << v0
		<< " increment: " << increment
		<< " iterations: " << iterations << endl;
}

void testVectorSorting() {
	vector<int> percentages; int n;
	cout << "Hvor mange tall skal legges til? "; cin >> n;
	randomizeVector(percentages, n);

	//swapNumbers(percentages[0], percentages[1]);
	writeElements(percentages, n); cout << "\n--------\n";
	writeElements(sortVector(percentages), n); cout << endl;
	cout << "Median: " << medianOfVector(sortVector(percentages)) << endl;
}

void testString() {
	//char a; char b; int n; //cout << "Lengde på streng / nedre grense / øvre grense"; cin >> n >> a >> b; cout << endl << randomizeString(n, a, b) << endl;
	double Average = 0;
	string grades = randomizeString(6, 'A', 'F'); cout << grades << endl; 
	vector<int> gradeCount = gradeCountAndAverage(Average, grades);
	writeElements(gradeCount, 6); cout << "Average: " << Average << endl;
}

