/*
	Salcedo, Salvador

	CS A250
	April 2, 2019

	Lab 8
*/

#include "DPair.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "TEST default constructor: DPair pair0";
	cout << "\nTEST accessor functions";
	DPair pair0; 
	cout << "\n    Pair 0: " << "(" 
		<< pair0.getFirst() << ", " 
		<< pair0.getSecond() << ")";

	cout << "\n\nTEST overloaded constructor: "
		<< " DPair pair1(2, 3)";
	DPair pair1(2, 3);
	cout << "\n    Pair 1: " << pair1;

	cout << "\n\nTEST copy constructor:"
		<< " DPair pair2(pair1)";
	cout << "\nTEST mutator functions";
	DPair pair2(pair1);
	cout << "\n    Pair 1: " << pair1;
	cout << "\n    Pair 2: " << pair2;
	cout << "\nLet's check that they are not shallow copies...";	
	pair1.setFirst(100);
	pair1.setSecond(200);
	cout << "\nAfter modifying pair1 to <100,200>...";
	cout << "\n    Pair 1: " << pair1;
	cout << "\n    Pair 2: " << pair2;
		
	cout << "\n\nTEST assignment operator:"
		<< "\nCreate Pair 3: ";
	cout << "DPair pair3(7, 8)";
	DPair pair3(7, 8);
	cout << "\n    Pair 1: " << pair1;
	cout << "\n    Pair 3: " << pair3;
	cout << "\nUse the assignment operator: "
		<< "pair1 = pair3;";
	pair1 = pair3;
	cout << "\n    Pair 1: " << pair1;
	cout << "\n    Pair 3: " << pair3;
	cout << "\nLet's check that there are not shallow copies...";
	pair3.setFirst(400);
	pair3.setSecond(500);
	cout << "\nAfter modifying pair3 to <400,500>...";
	cout << "\n    Pair 1: " << pair1;
	cout << "\n    Pair 3: " << pair3;

	cout << "\n\nFor the next two statements, which function will be\n"
		<< "invoked? The copy constructor or the assignment operator?";
	cout << "\nDPair pair4(10, 20)";
	cout << "\nDPair pair5 = pair4";
	DPair pair4(10, 20);
	DPair pair5 = pair4;
	cout << "\nIf you are not sure, use the Debugger "
		<< "to see where the compiler goes.";

	cout << "\n\nLet's destroy Pair 4...";
	pair4.~DPair();
	cout << "\nPair 5 should still be there,"
		<< " unless it is a shallow copy...";
	cout << "\n    Pair 5: " << pair5 << endl;
	
	cout << endl;
	system("Pause");
	return 0;
}