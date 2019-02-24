/***********************************************

	Class DoublyList

************************************************/

#include "DoublyList.h"

#include <iostream>
using namespace std;

int main()
{
	DoublyList intList;

	intList.insertInOrder(8);
	intList.insertInOrder(5);
	intList.insertInOrder(37);
	intList.insertInOrder(53);
	intList.insertInOrder(21);
	intList.insertInOrder(18);
	intList.insertInOrder(73);
	intList.insertInOrder(49);
	
	cout << "TESTING: insertInOrder() and print()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList: 5 8 18 21 37 49 53 73\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList: ";
	intList.print();
	
	cout << "\n\n-----------------------------------------------------\n";
	cout << "TESTING: printReverse()" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nList (reversed): 73 53 49 37 21 18 8 5\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nList (reversed): ";
	intList.reversePrint();
	
	cout << "\n\n-----------------------------------------------------\n";
	cout << "TESTING: Check first and last nodes" 
		<< "\n\nEXPECTED OUTPUT: "
		<< "\nFirst node data: 18"
		<< "\nLast node data: 73\n";
	cout << "\nACTUAL OUTPUT:";
	cout << "\nFirst node data: "
		<< intList.front()
		<< "\nLast node data: "
		<< intList.back();

	cout << "\n\n-----------------------------------------------------\n";
	cout << "FINAL TESTING" << endl;
	cout << "\nEmpty the list and insert 100...\n";
	intList.destroyList();		
	intList.insertInOrder(100);
	cout << "List: ";
	intList.print();
	cout << "\nReversed list: ";
	intList.reversePrint();

	cout << "\n\nYour testing cases...\n";
	// TEST function copyToList
	// Create two lists, list1 and list2.
	// Copy list1 (empty) into list2 (empty).
	// Create list list3.
	// Copy list1 (non-empty) into list3 (empty).
	DoublyList list1;
	DoublyList list2;

	cout << "\nTESTING: copyToList()" << endl;
	cout << "Copy list1 (empty) into list2 (empty)" << endl;

	list1.copyToList(list2);

	cout << "\nList1: ";
	list1.print();
	cout << "\nList3: ";
	list2.print();


	list1.insertFront(1);
	list1.insertFront(2);
	list1.insertFront(3);

	DoublyList list3;

	list1.copyToList(list3);

	cout << "\nTesting: copyToList()" << endl;
	cout << "\nList1: ";
	list1.print();
	cout << "\nList3: ";
	list3.print();


	cout << endl << endl;
	system("Pause");
	return 0;
}
