#include "Testing.h"

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void test_insertBack()
{
	vector< vector<int>> v1 = {
		{},
		{ 2 },
		{ 7, 5 },
		{ 8, 4, 2, 9 },
		{ 1, 2, 3, 4, 5, 6, 7 , 8, 9 },
		{ 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85 },
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create a new list and insert elements
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			call_insertBack(list1, v1[i].at(j));

		// Print out
		cout << "Elements inserted: ";
		for (int k = 0; k < sizeInnerV1; ++k)
			cout << v1[i].at(k) << " ";
		cout << "\n     Your list is: ";
		list1.print();
		cout << "\n\n----------------------------------------\n";
	}
}

void test_getNumOfItems()
{
	vector< vector<int>> v1 = {
		{},
		{ 1 },
		{ 6, 3 },		
		{ 1, 2, 3 },
		{ 8, 4, 2, 9, 5, 6, 7, 1 },
		{ 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85 },
	};

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create a new list and insert elements
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			call_insertBack(list1, v1[i].at(j));

		// Print out
		cout << "List is: ";
		list1.print();
		cout << "\n      Expected: " << sizeInnerV1;
		cout << "\n   Your output: ";
		int numOfItems = 0;
		call_getNumOfItems(list1, numOfItems);
		cout << numOfItems << endl;

		cout << "\n----------------------------------------\n";
	}
}

void test_search()
{
	vector< vector<int>> v1 = {
		{},
		{ 1 },
		{ 2 },
		{ 6, 3 },
		{ 7, 5 },
		{ 8, 4, 2, 9, 5, 6, 7, 1 },
		{ 7, 8, 3, 4, 2 },
		{ 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85 },
		{ 67, 45, 23, 79, 15, 62, 94, 57, 71, 29, 45, 32 }
	};

	vector<int> v1Search = { 2, 3, 2, 6, 5, 9, 7, 85, 100 };

	int sizeV1 = static_cast<int>(v1.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create a new list and insert elements
		AnyList list1;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
			call_insertBack(list1, v1[i].at(j));
		
		// Print out
		cout << "Your list is: ";
		list1.print();
		cout << "\n    Element to search: " << v1Search[i];
		if (sizeInnerV1 != 0)
		{
			vector<int>::iterator iter = find(v1[i].begin(), v1[i].end(), v1Search[i]);
			cout << "\n             Expected: "
				<< ((iter != v1[i].end()) ? "Found." : "Not found.");
		}
		cout << "\n          Your output: ";
		bool found = false;
		call_search(list1, v1Search[i], found);
		cout << ((found) ? "Found." : "Not found.");
		
		cout << "\n\n----------------------------------------\n";
	}
}

void test_commonEnds()
{
	vector< vector<int>> v1 = {
		{},
		{ 1 },
		{ 2 },
		{ 6, 3 },
		{ 7, 5 },
		{ 8, 4, 2, 9, 5, 6, 7, 1 },
		{ 1, 2, 3 },
		{ 1, 2, 3, 4, 5 },
		{ 1, 2, 3, 4, 5, 6, 7 , 8, 9 },
		{ 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85 },
		{ 67, 45, 23, 79, 15, 62, 94, 57, 71, 29, 45, 32 }

	};

	vector< vector<int>> v2 = {
		{},
		{},
		{ 2 },
		{ 6, 4 },
		{ 8, 5 },
		{ 8, 4, 2, 9 },
		{ 7, 3, 3 },
		{ 4, 9, 2, 5 },
		{ 1, 23, 45, 78, 75, 25, 13, 67, 43, 25, 9 },
		{ 10, 25, 50, 45, 96, 60, 90, 36, 74, 93, 60, 87, 34, 14, 56, 85 },
		{ 67, 12, 36, 79, 97, 26, 49, 75, 71, 92, 54, 76, 34, 45, 32 }
	};

	int sizeV1 = static_cast<int>(v1.size());
	int sizeV2 = static_cast<int>(v2.size());

	for (int i = 0; i < sizeV1; ++i)
	{
		// Create a new list and insert elements
		AnyList list1;
		AnyList list2;
		int sizeInnerV1 = static_cast<int>(v1[i].size());
		int sizeInnerV2 = static_cast<int>(v2[i].size());
		for (int j = 0; j < sizeInnerV1; ++j)
				call_insertBack(list1, v1[i].at(j));
		for (int j = 0; j < sizeInnerV2; ++j)
			call_insertBack(list2, v2[i].at(j));
		
		
		// Print out
		cout << "List 1 is: ";
		list1.print();
		cout << "\nList 2 is: ";
		list2.print();
		cout << "\n    Common ends? ";
		bool result = false;
		if (sizeInnerV1 != 0 && sizeInnerV2 != 0)
			result = (v1[i].at(0) == v2[i].at(0) 
				&& v1[i].at(sizeInnerV1 - 1) == v2[i].at(sizeInnerV2 - 1));
		cout << "\n             Expected: "	
			<< ((result)? "Yes." : "No.");
		cout << "\n          Your output: ";
		call_commonEnds(list1, list2, result);
		cout << ((result) ? "Yes." : "No.");

		cout << "\n\n----------------------------------------\n";
	}
}