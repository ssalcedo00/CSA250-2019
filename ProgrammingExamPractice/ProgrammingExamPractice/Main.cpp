/*
	Salcedo, Salvador

	CS A250
	March 6, 2019

	ProgrammingExamPractice
*/

#include "DoublyList.h"
#include "AnyList.h"

int main() {


	/**********************************************************
						Doubly Linked Lists
	**********************************************************/

	cout << "----PROGRAMMING EXAM #1: DOUBLY LINKED LIST----" << endl;
	DoublyList list1 = DoublyList();
	/*------------------------List filling-------------------------*/
	{
		list1.insertFront(10);
		list1.insertFront(9);
		list1.insertFront(8);
		list1.insertFront(7);
		list1.insertFront(6);
		list1.insertFront(5);
		list1.insertFront(4);
		list1.insertFront(3);
		list1.insertFront(2);
		list1.insertFront(1);
	}

	cout << "List: ";
	list1.print();
	cout << "\n";

	cout << "TESTING: reverseHalf()" << endl;
	list1.reverseHalf();
	cout << "Print: \n";
	list1.print();

	cout << "\nTESTING: deleteFirst()" << endl;
	list1.deleteFirst();
	cout << "Print: \n";
	list1.print();
	cout << endl;

	cout << "\nTESTING: firstNodeSwap(DoublyList & param)" << endl;
	DoublyList list2 = DoublyList();
	DoublyList list3 = DoublyList();

	 /*------------------------List filling-------------------------*/
	{
		list2.insertFront(4);
		list2.insertFront(3);
		list2.insertFront(2);
		list2.insertFront(1);

		list3.insertFront(44);
		list3.insertFront(33);
		list3.insertFront(22);
		list3.insertFront(11);
	}

	cout << "Before: \n    List2: ";
	list2.print();
	cout << "    List3: ";
	list3.print();

	list2.firstNodeSwap(list3);

	cout << "After: \n    List2: ";
	list2.print();
	cout << "    List3: ";
	list3.print();
	cout << endl;

	/*------------------------List filling-------------------------*/
	
	DoublyList list4 = DoublyList();
	{
		list4.insertFront(4);
		list4.insertFront(3);
		list4.insertFront(2);
		list4.insertFront(1);
	}
	DoublyList list5 = DoublyList();
	{
		list5.insertFront(40);
		list5.insertFront(30);
		list5.insertFront(20);
		list5.insertFront(10);
	}
	int a[] = {5, 6, 7, 8};
	int aNumOfElem = 4;

	cout << "\nTESTING: copy(const DoublyList& list, const int a[], int numOfElem)" << endl;
	cout << "Before: \n    List4: ";
	list4.print();
	cout << "    List5: ";
	list5.print();
	cout << "    Array: ";
	for (int i = 0; i < 4; i++) cout << a[i] << " ";
	cout << endl;

	list4.copy(list5, a, aNumOfElem);

	cout << "After: \n    List4: ";
	list4.print();
	cout << endl;


	 /**********************************************************
						 Singly Linked Lists
	 **********************************************************/

	cout << "----PROGRAMMING EXAM #1: SINGLY LINKED LIST----" << endl;

	AnyList sList1 = AnyList();
	/*------------------------List filling-------------------------*/
	{
		sList1.insertFront(13);
		sList1.insertFront(8);
		sList1.insertFront(5);
		sList1.insertFront(3);
		sList1.insertFront(2);
		sList1.insertFront(1);
		sList1.insertFront(1);
	}

	AnyList sList2 = AnyList();
	/*------------------------List filling-------------------------*/
	{
		sList2.insertFront(2);
		sList2.insertFront(1);
	}

	AnyList oneElem = AnyList();
	/*------------------------List filling-------------------------*/
	oneElem.insertFront(7);

	//Same list testing
	{

		cout << "No Parameters" << endl;
		cout << "List: ";
		sList1.print();
		cout << "\nList2: ";
		sList2.print();
		cout << "\noneElem: ";
		oneElem.print();
		cout << "\n\n";

		cout << "TESTING: insertBeforeLast()" << endl;
		sList1.insertBeforeLast();
		cout << "List1: ";
		sList1.print();
		sList2.insertBeforeLast();
		cout << "\nList2: ";
		sList2.print();
		oneElem.insertBeforeLast();
		cout << "\noneElem: ";
		oneElem.print();
		cout << "\n";

		cout << "\nTESTING: swapEndValues()" << endl;
		sList1.swapEndValues();
		cout << "List1: ";
		sList1.print();
		sList2.swapEndValues();
		cout << "\nList2: ";
		sList2.print();
		oneElem.swapEndValues();
		cout << "\noneElem: ";
		oneElem.print();
		cout << "\n";

		cout << "\nTESTING: deleteFirst()" << endl;
		sList1.deleteFirst();
		cout << "List1: ";
		sList1.print();
		sList2.deleteFirst();
		cout << "\nList2: ";
		sList2.print();
		oneElem.deleteFirst();
		cout << "\noneElem: ";
		oneElem.print();
		cout << "\n\n";

		cout << "\nTESTING: deleteSecond()" << endl;
		sList1.deleteSecond();
		cout << "List1: ";
		sList1.print();
		sList2.deleteSecond();
		cout << "\nList2: ";
		sList2.print();
		oneElem.deleteSecond();
		cout << "\noneElem: ";
		oneElem.print();
		cout << "\n\n";

	}

	cout << "\nTESTING: swapNodes(AnyList & list)" << endl;
	/*------------------------List filling-------------------------*/
	AnyList sList3 = AnyList();
	{
		sList3.insertFront(9);
		sList3.insertFront(8);
		sList3.insertFront(7);
	}
	AnyList sList4 = AnyList(); 
	{
		sList4.insertFront(-1);
		sList4.insertFront(-2);
		sList4.insertFront(-3);
	}
	cout << "Before: \n    List3: ";
	sList3.print();
	cout << "\n    List4: ";
	sList4.print();

	sList3.swapNodes(sList4);

	cout << "\nAfter: \n    List3: ";
	sList3.print();
	cout << "\n    List4: ";
	sList4.print();
	cout << endl;

	/*------------------------List filling-------------------------*/
	AnyList sList5 = AnyList();
	{
		sList5.insertFront(5);
		sList5.insertFront(4);
		sList5.insertFront(3);
		sList5.insertFront(2);
		sList5.insertFront(1);
	}		 
	AnyList sList6 = AnyList();
	{
		sList6.insertFront(9);
		sList6.insertFront(8);
		sList6.insertFront(7);
		sList6.insertFront(6);
		sList6.insertFront(5);
	}
	cout << "\nTESTING: swapVal(AnyList& list)" << endl;
	cout << "Before: \n    List5: ";
	sList5.print();
	cout << "\n    List6: ";
	sList6.print();

	sList5.swapVal(sList6);

	cout << "\nAfter: \n    List5: ";
	sList5.print();
	cout << "\n    List6: ";
	sList6.print();
	cout << endl;

	/*------------------------List filling-------------------------*/
	AnyList sList7 = AnyList();
	{
		sList7.insertFront(1);
		sList7.insertFront(2);
		sList7.insertFront(3);
		sList7.insertFront(2);
		sList7.insertFront(1);
	}
	AnyList sList8 = AnyList();
	{
		sList8.insertFront(1);
		sList8.insertFront(3);
		sList8.insertFront(5);
		sList8.insertFront(3);
		sList8.insertFront(1);
	}
	AnyList sList9 = AnyList();
	cout << "\nTESTING: sameEnds(const AnyList& list) const" << endl;
	cout << "    List7: ";
	sList7.print();
	cout << "\n    List8: ";
	sList8.print();

	cout << "\nResult: ";
	if (sList7.sameEnds(sList8)) cout << "TRUE\n" << endl;
	else cout << "FALSE\n" << endl;
	
	cout << "    List7: ";
	sList7.print();
	cout << "\n    List9: ";
	sList9.print();

	cout << "\nResult: ";
	if (sList9.sameEnds(sList7)) cout << "TRUE\n" << endl;
	else cout << "FALSE\n" << endl;

	cout << "\nTESTING: threeSLL(const AnyList& list1, const AnyList& list3)" << endl;
	cout << "Before: \n    List5: ";
	sList5.print();
	cout << "\n    List6: ";
	sList6.print();
	cout << "\n    List7: ";
	sList7.print();

	sList7.threeSLL(sList5, sList6);

	cout << "\nAfter: \n    List5: ";
	sList5.print();
	cout << "\n    List6: ";
	sList6.print();
	cout << "\n    List7: ";
	sList7.print();

	cout << "\n" << endl;


	system("Pause");
	return 0;
}