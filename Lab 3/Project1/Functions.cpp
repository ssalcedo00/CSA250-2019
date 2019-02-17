/*
	Salcedo, Salvador

	CS A250
	February 12, 2019

	Lab 3
*/

#include "AnyList.h"

//Definition function getNumOfItems
int AnyList::getNumOfItems() const {
	return count;
}

//Definition of function insertBack
void AnyList::insertBack(int newData) {
	if (count == 0) ptrToFirst = new Node(newData, nullptr);
	else {
		Node * current = ptrToFirst;
		while (current->getPtrToNext() != nullptr) {
			current = current->getPtrToNext();
		}
		current->setPtrToNext(new Node(newData, nullptr));
	}
	count++;
}

//Declaration function search
bool AnyList::search(int find) const {
	if (count == 0) {
		cerr << "The list is empty." << endl;
	}
	else if (ptrToFirst->getData() == find) return true;
	else {
		Node * current = ptrToFirst;
		while (current->getPtrToNext() != nullptr) {
			current = current->getPtrToNext();
			if (current->getData() == find) return true;
		}
	}
	return false;
}

//Definition function commonEnds
bool AnyList::commonEnds(const AnyList & paramList) const
{
	if (count == 0 || paramList.count == 0) return false;
	else {
		//Retriving first node data
		int firstParamData = paramList.ptrToFirst->getData();
		Node * callCurrent = ptrToFirst;
		//Retriving end node data
		while (callCurrent->getPtrToNext() != nullptr) {
			callCurrent = callCurrent->getPtrToNext();
		}
		int lastCallData = callCurrent->getData();

		//Retriving first node data
		int firstData = ptrToFirst->getData();
		Node * paramCurrent = paramList.ptrToFirst;
		//Retriving end node data
		while (paramCurrent->getPtrToNext() != nullptr) {
			paramCurrent = paramCurrent->getPtrToNext();
		}
		int lastParamData = paramCurrent->getData();

		return(firstParamData == firstData && lastCallData == lastParamData);
	}
}