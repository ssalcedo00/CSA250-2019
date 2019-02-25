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
	cout << "\n-----------------------------------------------------\n";
	// TEST function copyToList
	// Create two lists, list1 and list2.
	// Copy list1 (empty) into list2 (empty).
	// Create list list3.
	// Copy list1 (non-empty) into list3 (empty).

	cout << "TESTING: Copy list1 (1 2 3) into list2 (5 6 7)" << endl;
	cout << "\nEXPECTED OUTPUT:" << endl;
	cout << "List1: 1 2 3" << endl;
	cout << "List2: 1 2 3 5 6 7" << endl;

	DoublyList list1;
	DoublyList list2;

	list1.insertFront(3);
	list1.insertFront(2);
	list1.insertFront(1);
	list2.insertFront(7);
	list2.insertFront(6);
	list2.insertFront(5);

	list1.copyToList(list2);

	cout << "\nACTUAL OUTPUT:" << endl;
	cout << "List1: ";
	list1.print();
	cout << "\nList2: ";
	list2.print();
	cout << "\n" << endl;

	cout << "TESTING: Copy list3 (1 2 3) into list4 (empty)" << endl;
	cout << "\nEXPECTED OUTPUT:" << endl;
	cout << "List3: 1 2 3" << endl;
	cout << "List4: 1 2 3" << endl;

	DoublyList list3;
	DoublyList list4;

	list3.insertFront(3);
	list3.insertFront(2);
	list3.insertFront(1);

	list3.copyToList(list4);

	cout << "\nACTUAL OUTPUT:" << endl;
	cout << "List3: ";
	list3.print();
	cout << "\nList4: ";
	list4.print();
	cout << "\n" << endl;

	cout << "TESTING: Copy list5 (1) into list6 (2 3 4)" << endl;
	cout << "\nEXPECTED OUTPUT:" << endl;
	cout << "List5: 1" << endl;
	cout << "List6: 1 2 3 4" << endl;

	DoublyList list5;
	DoublyList list6;

	list5.insertFront(1);

	list6.insertFront(4);
	list6.insertFront(3);
	list6.insertFront(2);

	list5.copyToList(list6);

	cout << "\nACTUAL OUTPUT:" << endl;
	cout << "List5: ";
	list5.print();
	cout << "\nList6: ";
	list6.print();
	cout << "\n" << endl;

	system("Pause");
	return 0;
}
