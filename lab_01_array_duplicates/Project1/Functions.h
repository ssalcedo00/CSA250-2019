#include <string>
using namespace std;

/*
	Salcedo, Salvador

	CSA250
	January 2, 2019

	Lab 1
*/

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElem) {
	for (int x = 0; x < numOfElem; x++) {
		int test = a[x];
		for (int i = 0; i < numOfElem; i++) {
			if (test == a[i] && i != x) {
				for (int j = i; j < numOfElem - 1; j++) {
					a[j] = a[j + 1];
				}
				numOfElem--;
			}
		}
	}
}

// Definition function printArray
void printArray(int a[], int numOfElem) {
	for (int x = 0; x < numOfElem; x++) {
		cout << a[x];
	}
	cout << endl;
}
