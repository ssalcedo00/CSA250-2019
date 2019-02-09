#include <iostream>
#include <vector>
using namespace std;

#include "Functions.h"

const int CAP = 20;

void processArrays();
void testArrays(int a[], int numOfElements);

int main()
{
	processArrays();
  
	cout << endl;
	system("Pause");
	return 0;
}

void processArrays()
{
	vector<vector<int>> vectorMatrix = {
		{ },
		{ 1 },
		{ 1, 1 },
		{ 1, 1, 2 },
		{ 1, 2, 1 },
		{ 1, 2, 2 },
		{ 1, 1, 1, 2, 1 },
		{ 1, 2, 2, 1, 2, 2, 2 },
		{ 2, 3, 5, 1, 2, 3, 5, 2, 4, 5, 6, 7, 3, 2, 5, 7, 3, 7, 4, 6 }
	};

	size_t sizeMatrix = vectorMatrix.size();
	for (size_t i = 0; i < sizeMatrix; ++i)
	{
		int sizeVector = static_cast<int>(vectorMatrix[i].size());

		if (sizeVector == 0)
			cout << "Array " << (i + 1) << ": (empty)"
			<< "\nNo duplicates to remove.\n\n";
		else
		{			
			int *arr = new int[sizeVector];
			int idx = 0;
			for (int j : vectorMatrix[i])
				arr[idx++] = j;

			cout << "Array " << (i + 1) << ": ";
			testArrays(arr, sizeVector);
			cout << endl;

			delete[] arr;
			arr = nullptr;
		}
	}
}

void testArrays(int a[], int numOfElements)
{
	printArray(a, numOfElements);

	if (numOfElements != 0)
	{
		cout << "\nAfter deleting duplicates: ";
		deleteDuplicates(a, numOfElements);

		printArray(a, numOfElements);
		cout << endl;
	}
}
