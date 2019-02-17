#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			
using namespace std;

class Node
{
public:
	Node() : data(0), ptrToNext(nullptr) {}
	Node(int theData, Node *newPtrToNext) 
		: data(theData), ptrToNext(newPtrToNext){}
	Node* getPtrToNext() const { return ptrToNext; }
	int getData() const { return data; }
	void setData(int theData) { data = theData; }
	void setPtrToNext(Node *newPtrToNext) 
		{ ptrToNext = newPtrToNext; }
	~Node(){}
private:
	int data;
	Node *ptrToNext;	//pointer that points to next node
};


class AnyList
{
public:
	AnyList();	
		//default constructor

	void print() const;
		//Prints all values in the list.

	void destroyList();
		//Destroys all nodes in the list.

	~AnyList();
		//destructor

	/**************************************************************************/
	
	//Declaration function getNumOfItems
	int getNumOfItems() const;
	
	//Declaration function insertBack
	void insertBack(int newData);

	//Declaration function search
	//Assumption: All keys are unique
	bool search(int find) const;

	//Declaration function commonEnds
	bool commonEnds(const AnyList & paramList) const;
	
private:
	Node *ptrToFirst; //pointer to point to the first node in the list
	int count;		  //keeps track of number of nodes in the list
};

#endif