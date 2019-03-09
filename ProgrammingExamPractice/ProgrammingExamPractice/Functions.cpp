/*
	Name header
*/

#include "DoublyList.h"

void DoublyList::insertDefaultNode()
{
	first = new Node(0, first, nullptr);
	count++;
}

void DoublyList::reverseHalf()
{
	if (count < 2) {
		cerr << "Cannot reverse half." << endl;
	}
	else {
		Node * current = first;
		for (int i = 0; i < count / 2; i++) {
			current = current->getNext();
		}
		last->setNext(first);
		first->setPrev(last);
		first = current;
		current = current->getPrev();
		last = current;
		last->setNext(nullptr);
		first->setPrev(nullptr);
	}
}

void DoublyList::deleteFirst()
{
	if (count == 0) cerr << "No node to delete." << endl;
	else {
		Node * current = first;
		first = first->getNext();
		first->setPrev(nullptr);
		delete current;
		current = nullptr;
		count--;
	}
}

void DoublyList::firstNodeSwap(DoublyList & param)
{
	if (count == 0 || param.count == 0) cerr << "\nOne or both lists are empty";
	else {
		Node * temp = first;
		first->getNext()->setPrev(param.first);
		first = param.first;

		param.first->getNext()->setPrev(temp);
		param.first = temp;

		temp = temp->getNext();
		param.first->setNext(first->getNext());
		first->setNext(temp);
	}
}

void DoublyList::copy(const DoublyList & list, const int a[], int numOfElem) {
	Node * current = list.last;
	while (current != nullptr) {
		this->insertFront(current->getData());
		current = current->getPrev();
	}
	for (int i = 0; i < numOfElem; i++) {
		last->setNext(new Node(a[i], last, nullptr));
		last = last->getNext();
	}
	count += numOfElem;
}

// Definition function print
void DoublyList::print() const
{
	Node * current = first;
	while (current != nullptr) {
		cout << current->getData() << " ";
		current = current->getNext();
	}
	cout << endl;
}

// Definition function reversePrint
void DoublyList::reversePrint() const
{
	Node * current = last;
	while (current != nullptr) {
		cout << current->getData() << " ";
		current = current->getPrev();
	}
	cout << endl;
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
