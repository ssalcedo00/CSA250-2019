#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
	Node() : data(0), prev(nullptr), next(nullptr) {}
	Node(int newData, Node *newPrev, Node *newNext)
		: data(newData), prev(newPrev), next(newNext) {}
	int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }
	void setData(int newData) { data = newData; }
	void setPrev(Node *newPrev) { prev = newPrev; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	int data;
	Node *prev;
	Node *next;
};


class DoublyList
{
public:
	DoublyList(); 
		
	void insertFront(int newData);
	
	bool isEmpty() const;

	~DoublyList();

	void destroyList();

	int front() const;

	int back() const;

	void print() const;

	/********************************************************
		Functions with no paramters (Doubly-Linked List)
	*********************************************************/
	void insertDefaultNode();

	void reverseHalf();

	void deleteFirst();

	void reversePrint() const;

	/********************************************************
		Functions with one or more paramters (Doubly-Linked List)
	*********************************************************/
	void firstNodeSwap(DoublyList & param);

	void copy(const DoublyList& list, const int a[], int numOfElem);

private:
    Node *first;	// pointer to the first node on the list
    Node *last;		// pointer to the last node on the list
	int count;		// number of nodes in the list
};

#endif