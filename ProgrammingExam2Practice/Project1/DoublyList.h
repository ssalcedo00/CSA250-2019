#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <string>
#include <iostream>
using namespace std;

class Node
{
public:
    Node () : data(0), prev(nullptr), next(nullptr) {}
    Node (int theData, Node *previous, Node *next)
            : data(theData), prev(previous), next(next) {}
    int getData() const { return data; }
	Node *getPrev() const { return prev; }
	Node *getNext() const { return next; }    
    void setData(int theData) { data = theData; }
    void setPrev(Node *pointer) { prev = pointer; }
	void setNext(Node *pointer) { next = pointer; }    
	~Node(){}
private:
    int data;
    Node *prev;
	Node *next;    
};

class DoublyList
{
	friend ostream& operator<<(ostream& out, const DoublyList& theList);
public:
	DoublyList(); 
	
	void insertBack(int newData);

	bool empty() const;

	void destroyList();

	~DoublyList();

protected:
    Node *first;	
    Node *last;		
	int count;		
};

#endif