/*
	Salcedo, Salvador

	CS A250
	March 9, 2019

	Lab 6
*/

#include "DoublyList.h"

// createAList
void DoublyList::createAList()
{
	/*
	NOTE:

	* You will need to declare one pointer and
	you may re-use this pointer throughout the function, but
	you are NOT allowed to create additional pointers.

	* DO NOT REMOVE EXISTING COMMENTS.

	* Pay CLOSE attention to instructions.
	*/

	/*----------------------------------------------------------------
	SECTION 1
	------------------------------------------------------------------*/

	// Create a dynamic node that stores the value 2 and make 
	// this node be the first node of the calling object.
	// List becomes: 2
	// Use the overloaded constructor.
	// Do NOT create a pointer.
	first = new Node(2, nullptr, nullptr);
	last = first;

	// Update count;
	count++;

	cout << "SECTION 1 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 2
	------------------------------------------------------------------*/

	// Create another node that stores the value 3 and 
	// insert this node to the left of the node that is 
	// storing value 2.
	// List becomes: 3 2
	// Do NOT create a pointer.
	first->setPrev(new Node(3, nullptr, first));
	first = first->getPrev();

	// Update count;
	count++;

	cout << "\nSECTION 2 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 3
	------------------------------------------------------------------*/

	// Create another node that stores the value 4 and
	// insert this node to the right of the node that is
	// storing value 3.
	// List becomes: 3 4 2
	// NO MORE than 3 statements.
	first->setNext(new Node(4, first, last));
	last->setPrev(first->getNext());

	// Update count;
	count++;

	cout << "\nSECTION 3 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 4
	------------------------------------------------------------------*/

	// Delete the first node.
	// List becomes: 4 2
	Node * temp = first;
	first = first->getNext();
	first->setPrev(nullptr);
	delete temp;
	temp = nullptr;

	// Update count.
	count--;

	cout << "\nSECTION 4 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 5
	------------------------------------------------------------------*/

	// Insert three nodes at the end of the list storing 
	// 5 6 7 in this order.
	// List becomes: 4 2 5 6 7
	// Do NOT use the pointer you created.
	last->setNext(new Node(5, last, nullptr));
	last = last->getNext();
	last->setNext(new Node(6, last, nullptr));
	last = last->getNext();
	last->setNext(new Node(7, last, nullptr));
	last = last->getNext();

	// Update count.
	// One statement only.
	count += 3;

	cout << "\nSECTION 5 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 6
	------------------------------------------------------------------*/

	// Move last node to second position.
	// Here steps are very important. Carefully think 
	// how you can move nodes around without losing any
	// nodes and keeping all pointers pointing to the
	// correct nodes.
	// Note: 
	//		You may NOT create an additional node.
	//		NO loops are necessary.
	// List becomes: 4 7 2 5 6
	temp = last;
	last = last->getPrev();
	last->setNext(nullptr);
	first->getNext()->setPrev(temp);
	temp->setNext(first->getNext());
	first->setNext(temp);
	temp->setPrev(first);

	cout << "\nSECTION 6 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 7
	------------------------------------------------------------------*/

	// Move the first node in between the node before last and
	// last node (the second node will become the first node
	// in the list, and the first node will become the before-last 
	// node in the list).
	//		You may NOT create an additional node.
	//		No loops are necessary.
	// List becomes: 7 2 5 4 6
	temp = first;
	first = first->getNext();
	first->setPrev(nullptr);
	last->getPrev()->setNext(temp);
	temp->setPrev(last->getPrev());
	temp->setNext(last);
	last->setPrev(temp);

	cout << "\nSECTION 7 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 8
	------------------------------------------------------------------*/

	// WITHOUT moving any nodes, swap around the values to 
	// create an ordered list. 
	// Note that there is no need to move the value 5.
	// You may declare an int, BUT do NOT use any literals.
	// List becomes: 2 4 5 6 7

	int store = first->getData();
	first->setData(first->getNext()->getData());
	first->getNext()->setData(store);
	first->getNext()->setData(last->getPrev()->getData());
	last->getPrev()->setData(last->getData());
	last->setData(store);

	cout << "\nSECTION 8 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 9
	------------------------------------------------------------------*/

	// Add two nodes storing 1 and 3 to complete the ordered list.
	// List becomes: 1 2 3 4 5 6 7
	temp = first->getNext();
	first->setPrev(new Node(1, nullptr, first));
	first = first->getPrev();
	temp->setPrev(new Node(3, first->getNext(), temp));
	first->getNext()->setNext(temp->getPrev());
	// Add 2 to count.
	count += 2;

	cout << "\nSECTION 9 - TEST ALL" << endl;
	testAll();

	/*----------------------------------------------------------------
	SECTION 10
	------------------------------------------------------------------*/

	// Go back to check the following:
	//     Are there any sections that have more than one blank line?
	//     If so, do not leave delete unnecessary white space.
	//     Leave only one blank line.
	//
	//     Are your statement too long that is necessary to scroll horizontally?
	//     If so, break your statements in readable portions.
	//
	//     Instructions said to create and use ONLY ONE pointer.
	//     Go back and check that you did not create more than one pointer.
	//     
	//     Re-visit your code for efficiency.

}