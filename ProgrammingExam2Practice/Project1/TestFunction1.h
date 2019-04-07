#pragma once

#include "Functions.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void testFunction1()
{
	vector<vector<int>> vDArray = {
		{ 3,7,2,9 },
		{ 56,34,87,23,14,56,87 },
		{ 45,87,12,35,94,21,23,14,82 },
		{ 34 },
		{ 59,87,15,16,35,99,42,51,23 },
		{ 56,87,15,16,35,83,38,35,99,42,51,45 },
		{ 15,42,51,16,33,99,56,87,23 },
		{ 99,56,73,87,15,42,68,51,16,33,23 },
	};

	vector<vector<int>> v = {
		{ 3,7,2,9 },
		{ 56,34,87,23,14,56,87 },
		{ 45,87,12,35,94,21,23,14,82,99 },
		{ },
		{ 56,87,15,16,35,99,42,51,23 },
		{ 56,87,15,16,35,83,38,35,99,42,51,23 },
		{ 15,42,51,16,35,99,56,87,23 },
		{ 99,56,73,87,15,42,68,51 },
	};

	int vectorSize = static_cast<int>(v.size());

	for (int i = 0; i < vectorSize; ++i)
	{
		// data in the array
		DArrayChild a;
		int vDArraySize = static_cast<int>(vDArray[i].size());
		for (int j = 0; j < vDArraySize; ++j)
			a.addElement(vDArray[i][j]);
		cout << "TEST " << (i + 1) << endl;
		cout << "\n  Data in the array: ";
		if (a.empty()) cout << "(array is empty)";
		else cout << a;

		// data in the vector
		int vSize = static_cast<int>(v[i].size());
		cout << "\n Data in the vector: ";
		if (vSize == 0) cout << "(vector is empty)";
		else for (int k = 0; k < vSize; ++k)
			cout << v[i][k] << " ";

		cout << "\n\n Expected output => ";
		cout << ((v[i] == vDArray[i])? "TRUE" : "FALSE");
		cout << "\n     Your output => ";
	
		/****************************************************************
		** TO TEST YOUR IMPLEMENTATION, UNCOMMENT THE STATEMENT BELOW.
		****************************************************************/
		cout << ((a.function1(v[i]))? "TRUE" : "FALSE");


		cout << "\n\n------------------------------------------------\n";
	}	
}