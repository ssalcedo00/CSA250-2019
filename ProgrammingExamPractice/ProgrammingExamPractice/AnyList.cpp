#include "AnyList.h"

AnyList::AnyList()
{
	first = nullptr;
	count = 0;
}

void AnyList::insertFront(int newData)
{	
	sNode *ptrToNewsNode = new sNode;	//create a pointer named ptrToNewsNode that
									// points to an unnamed sNode

	ptrToNewsNode->setData(newData);		//store data in the new sNode

	ptrToNewsNode->setNext(first);	//set new sNode's pointer to point to the first sNode

	first = ptrToNewsNode;		//make the new sNode be the "first" sNode

	/*
		There is shorter way to write the statements above using the overloaded constructor:

			sNode *ptrToNewsNode = new sNode(newData, first);
			first = ptrToNewsNode;		

		Or even better, without creating any pointers:
		    
			first = new sNode(newData, first);
	*/	

	++count;
}

void AnyList::print() const
{
	if (first == nullptr) // check if the list is empty
							   // you can also use: if (count < 1)
		cerr << "List is empty.";  // use cerr, rather than cout (why?)
	else
	{
		sNode *current = first;   //create a pointer to traverse the list	
									  //this pointer will start with the first sNode in the list

		while (current != nullptr)	//while the current pointer is NOT pointing to NULL
		{						    //  that is, the current pointer has not reached the 
			                        //  end of the list
			cout << current->getData() << " ";	//output the data 
			current = current->getNext();		//move the pointer current forward
		}
	}
}

void AnyList::destroyList()
{ 
    sNode  *temp = first; //pointer to delete the sNode, starting with the first sNode
	
	while (first != nullptr)
    {
		first = first->getNext();
        delete temp;
		temp = first;
    }

	count = 0;
}

void AnyList::insertBeforeLast()
{
	if (count < 2) cerr << "\nCould not insert node before last, count < 2";
	else {
		sNode * current = first;
		sNode * trail = first;
		while (current->getNext() != nullptr) {
			current = current->getNext();
		}
		while (trail->getNext()->getNext() != nullptr) {
			trail = trail->getNext();
		}
		trail->setNext(new sNode(0, current));
		count++;
	}
}

void AnyList::deleteFirst()
{
	if (count < 1) cerr << "\nNo first node to delete";
	else {
		sNode * current = first;
		first = first->getNext();
		delete current;
		current = nullptr;
		count--;
	}
}

void AnyList::deleteSecond() {
	if (count < 2) cerr << "\nSecond node does not exist.";
	else {
		sNode * current = first->getNext()->getNext();
		sNode * temp = first->getNext();
		first->setNext(current);
		delete temp;
		temp = nullptr;
		count--;
	}
}

void AnyList::swapEndValues() const
{
	if (count < 2) cerr << "\nNo end values to swap.";
	else {
		sNode * current = first;
		while (current->getNext() != nullptr) {
			current = current->getNext();
		}
		int lVal = current->getData();
		current->setData(first->getData());
		first->setData(lVal);
	}	
}

void AnyList::swapNodes(AnyList & list)
{
	sNode * temp1 = first->getNext();
	first->setNext(list.first->getNext());
	list.first->setNext(temp1);
	
}

void AnyList::swapVal(AnyList & list) //swap values of 2nd and 2nd to last nodes
{
	if (count < 4 || list.count < 4) cerr << "\nList cannot have less than 4 nodes" << endl;
	else {
		int temp = first->getNext()->getData();
		first->getNext()->setData(list.first->getNext()->getData());
		list.first->getNext()->setData(temp);

		sNode * current1 = first;
		while (current1->getNext()->getNext() != nullptr) current1 = current1->getNext();
		temp = current1->getData();

		sNode * current2 = list.first;
		while (current2->getNext()->getNext() != nullptr) current2 = current2->getNext();
		current1->setData(current2->getData());
		current2->setData(temp);
	}
}

bool AnyList::sameEnds(const AnyList& list) const
{
	bool front, back;
	front = (first->getData() == list.first->getData());
	sNode * current1 = first;
	sNode * current2 = list.first;
	while (current1->getNext() != nullptr) current1 = current1->getNext();
	while (current2->getNext() != nullptr) current2 = current2->getNext();
	back = (current1->getData() == current2->getData());

	return (front && back);
}

AnyList::~AnyList()
{
	destroyList();
}

