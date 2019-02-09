/*
	Salcedo, Salvador

	CS A250
	January 2, 2019

	Lab 1
*/

// Definition function deleteDuplicates
void deleteDuplicates(int a[], int& numOfElem) {
	for (int testIdx = 0; testIdx < numOfElem; testIdx++) {
		int test = a[testIdx];
		for (int compIdx = 0; compIdx < numOfElem; compIdx++) {
			if (test == a[compIdx] && testIdx != compIdx) {
				for (int shiftIdx = compIdx; shiftIdx < numOfElem - 1; shiftIdx++) {
					a[shiftIdx] = a[shiftIdx + 1];
				}
				--numOfElem;
				--compIdx;
			}
		}
	}
}

// Definition function printArray
void printArray(const int a[], int numOfElem) {
	for (int x = 0; x < numOfElem; x++) {
		cout << a[x] << " ";
	}
}
