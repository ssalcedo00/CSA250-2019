/*
	Salcedo, Salvador

	CS A250
	April 6, 2019

	Programming Exam 2
*/

#pragma once

#include "DArray.h"
#include "DoublyList.h"
#include <vector>
#include <list>

using namespace std;

class DArrayChild : public DArray
{
public:
	// Definition function function1
	// Your code here.
	bool function1(const vector<int>& param) const {
		if (numOfElem != (int)param.size()) {
			return false;
		}
		else {
			for (int i = 0; i < numOfElem; i++) {
				if (a[i] != param[i]) {
					return false;
				}
 			}
			return true;
		}
	}
};

class DoublyListChild : public DoublyList
{
public:

	// Definition function function2
	// Your code here.
	void function2(const list<int>& param) {
		int test = first->getData();
		if (param.cend() == find(param.cbegin(), param.cend(), test)) {
			last->setNext(new Node(0, last, nullptr));
			last = last->getNext();
		}
		else {
			last->setNext(new Node(test, last, nullptr));
			last = last->getNext();
		}
		count++;
	}

	// Definition function function3
	// Your code here.
	void function3(list<int>& list1, list<int>& list2) {
		list<int>::iterator pos = (list1.begin());
		for (int i = 0; i < 2; i++) {
			++pos;
		}
		list1.splice(pos, list2, list2.begin());

		list<int>::reverse_iterator rIter = list1.rbegin();
		while (rIter != list1.rend()) {
			this->insertBack(*rIter);
			++rIter;
		}
		count += (int)list1.size();
	}
};