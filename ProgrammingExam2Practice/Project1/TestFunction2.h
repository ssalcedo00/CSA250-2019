#pragma once

#include "Functions.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void testFunction2()
{
	vector<vector<int>> vDoublyList = {
		{ 3,7,2,9 },
		{ 56,34,87,23,14,56,87 },
		{ 45,87,12,35,94,21,23,14,82 },
		{ 34 },
		{ 79 },
		{ 59,87,15,16,99,42,51,23 },
		{ 56,87,15,16,35,83,38,35,99,42,51,45 },
	};

	vector<vector<int>> vStlList = {
		{ 5,9,2,3,7,2,9 },
		{ 56,87,12,35,94,21,23,14,82,99 },
		{ 56,34,87,23,14,56,45 },
		{ 20 },
		{ 79 },
		{ 35,99,42,51,23,56,87,15,16,35,83,38 },
		{ 87,15,16,35,99,42,51,23 },
	};

	vector<vector<int>> lResult = {
		{ 3,7,2,9,3 },
		{ 56,34,87,23,14,56,87,56 },
		{ 45,87,12,35,94,21,23,14,82,45 },
		{ 34,0 },
		{ 79, 79 },
		{ 59,87,15,16,99,42,51,23,0 },
		{ 56,87,15,16,35,83,38,35,99,42,51,45,0 },
	};

	int vectorSize = static_cast<int>(vDoublyList.size());

	for (int i = 0; i < vectorSize; ++i)
	{
		// data in the DL list
		DoublyListChild dl;
		int vDoublyListSize = static_cast<int>(vDoublyList[i].size());
		for (int j = 0; j < vDoublyListSize; ++j)
			dl.insertBack(vDoublyList[i][j]);
		cout << "TEST " << (i + 1) << endl;
		cout << "\n  Data in the DL list: ";
		if (dl.empty()) cout << "(DL list is empty)";
		else cout << dl;

		// data in the STL list
		list<int> l;
		int vStlListSize = static_cast<int>(vStlList[i].size());
		for (int j = 0; j < vStlListSize; ++j)
			l.push_back(vStlList[i][j]);
		cout << "\n Data in the STL list: ";
		if (l.size() == 0) cout << "(list is empty)";
		else for (auto & i : l)
			cout << i << " ";

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		dl.function2(l);

		cout << "\n\n Expected modified DL list => ";
		if (lResult.size() == 0) cout << "(list is empty)";
		int vLResultSize = static_cast<int>(lResult[i].size());
		for (int j = 0; j < vLResultSize; ++j)
			cout << lResult[i][j] << " ";
		cout << "\n     Your modified DL list => ";
		cout << dl;
		cout << "\n\n------------------------------------------------\n";
	}
}
