#pragma once

#include "Functions.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

void testFunction3()
{
	vector<vector<int>> vList1 = {
		{ 3,7,2,9 },
		{ 56,34,87,23,14,56,87 },
		{ 45,87,12,35,94,21,23,14,82 },
		{ 34,79,12},
		{ 59,87,15,16,99,42,51,23 },
		{ 56,87,15,16,35,83,38,35,99,42,51,45 },
	};

	vector<vector<int>> vList2 = {
		{ 5,9,2,3,7,2,9 },
		{ 56,87,12,35,94,21,23,14,82,99 },
		{ 56,34,87,23,14,56,45 },
		{ 20,56,41,93},
		{ 35,99,42,51,23,56,87,15,16,35,83,38 },
		{ 87,15,16,35,99,42,51,23 },
	};

	vector<vector<int>> l1Result = {
		{ 3,7,5,2,9 },
		{ 56,34,56,87,23,14,56,87 },
		{ 45,87,56,12,35,94,21,23,14,82 },
		{ 34,79,20,12 },
		{ 59,87,35,15,16,99,42,51,23 },
		{ 56,87,87,15,16,35,83,38,35,99,42,51,45 },
	};

	vector<vector<int>> l2Result = {
		{ 9,2,3,7,2,9 },
		{ 87,12,35,94,21,23,14,82,99 },
		{ 34,87,23,14,56,45 },
		{ 56,41,93 },
		{ 99,42,51,23,56,87,15,16,35,83,38 },
		{ 15,16,35,99,42,51,23 },
	};

	vector<vector<int>> dllResult = {
		{ 9,2,5,7,3 },
		{ 87,56,14,23,87,56,34,56 },
		{ 82,14,23,21,94,35,12,56,87,45 },
		{ 12,20,79,34 },
		{ 23,51,42,99,16,15,35,87,59 },
		{ 45,51,42,99,35,38,83,35,16,15,87,87,56 },
	};

	int vectorSize = static_cast<int>(vList1.size());

	for (int i = 0; i < vectorSize; ++i)
	{
		// data in the STL list 1
		list<int> l1;
		int vList1Size = static_cast<int>(vList1[i].size());
		for (int j = 0; j < vList1Size; ++j)
			l1.push_back(vList1[i][j]);
		cout << "TEST " << (i + 1) << endl;
		cout << "\n Data in the STL list 1: ";
		if (l1.size() == 0) cout << "(STL list 1 is empty)";
		else for (auto & i : l1)
			cout << i << " ";

		// data in the STL list 2
		list<int> l2;
		int vList2Size = static_cast<int>(vList2[i].size());
		for (int j = 0; j < vList2Size; ++j)
			l2.push_back(vList2[i][j]);
		cout << "\n Data in the STL list 2: ";
		if (l2.size() == 0) cout << "(STL list 2 is empty)";
		else for (auto & i : l2)
			cout << i << " ";

		// create empty dll
		DoublyListChild dll;

		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		dll.function3(l1,l2);

		cout << "\n\n Expected modified STL list 1 => ";
		if (l1Result.size() == 0) cout << "(STL list 1 is empty)";
		int vL1ResultSize = static_cast<int>(l1Result[i].size());
		for (int j = 0; j < vL1ResultSize; ++j)
			cout << l1Result[i][j] << " ";
		cout << "\n     Your modified STL list 1 => ";
		if (l1.size() == 0) cout << "(STL list 1 is empty)";
		else for (auto & i : l1)
			cout << i << " ";

		cout << "\n\n Expected modified STL list 2 => ";
		if (l2Result.size() == 0) cout << "(STL list 2 is empty)";
		int vL2ResultSize = static_cast<int>(l2Result[i].size());
		for (int j = 0; j < vL2ResultSize; ++j)
			cout << l2Result[i][j] << " ";
		cout << "\n     Your modified STL list 2 => ";
		if (l2.size() == 0) cout << "(STL list 2 is empty)";
		else for (auto & i : l2)
			cout << i << " ";

		cout << "\n\n Expected modified DLL => ";
		if (dllResult.empty()) cout << "(DLL is empty)";
		int dllResultSize = static_cast<int>(dllResult[i].size());
		for (int j = 0; j < dllResultSize; ++j)
			cout << dllResult[i][j] << " ";
		cout << "\n     Your modified DLL => ";
		if (dll.empty()) cout << "(DLL is empty)";
		else cout << dll;

		cout << "\n\n------------------------------------------------\n";
	}
}
