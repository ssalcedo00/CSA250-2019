/*
	Salcedo, Salvador

	CS A250
	February 17, 2019

	Lab 4
*/

#include "DoublyList.h"

// Definition function print
void DoublyList::print() const 
{
	Node * current = first;
	while (current != nullptr) 
	{
		cout << current->getData() << " ";
		current = current->getNext();
	}
}

// Definition function reversePrint
void DoublyList::reversePrint() const 
{
	Node * current = last;
	while (current != nullptr) 
	{
		cout << current->getData() << " ";
		current = current->getPrev();
	}
}

// Definition function front
int DoublyList::front() const 
{
	return first->getData();
}

// Definition function back
int DoublyList::back() const 
{ 
	return last->getData(); 
}

// Definition function copyToList
void DoublyList::copyToList(DoublyList & List) const
{
	Node * current = last;
	while (List.count != count) 
	{
		List.insertFront(current->getData());
		current = current->getPrev();
	}
}

// Definition function insertInOrder 
void DoublyList::insertInOrder(int newData) 
{
	if (count == 0) 
	{
		first = new Node(newData, nullptr, nullptr);
		last = first;
	}
	else if (newData < first->getData()) 
	{
		first = new Node(newData, nullptr, first);
		first->getNext()->setPrev(first);
	}
	else if (newData > last->getData()) 
	{
		last = new Node(newData, last, nullptr);
		last->getPrev()->setNext(last);
	}
	else 
	{
		Node * current = first->getNext();
		Node * trail = first;
		while (current->getNext() != nullptr) 
		{
			if (newData > trail->getData() && newData < current->getData()) 
			{
				trail->setNext(new Node(newData, trail, current));
				current->setPrev(trail->getNext());
			}
			current = current->getNext();
			trail = trail->getNext();
		}
	}
	count++;
}
