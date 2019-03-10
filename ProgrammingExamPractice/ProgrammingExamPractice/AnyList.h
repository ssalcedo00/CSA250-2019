#ifndef ANYLIST_H
#define ANYLIST_H

#include<iostream>
#include <string>		//Need to include for NULL			
using namespace std;

class sNode
{
public:
	sNode() : data(0), next(nullptr) {}
	sNode(int theData, sNode *newnext) 
		: data(theData), next(newnext){}
	sNode* getNext() const { return next; }
	int getData( ) const { return data; }
    void setData(int theData) { data = theData; }
	void setNext(sNode *newnext) 
		{ next = newnext; }
	~sNode(){}
private:
    int data;		
    sNode *next;	//pointer that points to next sNode
};


class AnyList
{
public:
	AnyList();	

	void insertFront(int);	
		
	void print() const;

	void destroyList();
		
	~AnyList();

	//Functions with no parameters (Singly-Linked List)
	void insertBeforeLast();

	void deleteFirst();
	
	void deleteSecond();

	void swapEndValues() const;

	//Functions with one or more parameters (Singly-Linked List)
	void swapNodes(AnyList& list);

	void swapVal(AnyList& list); //swap values of 2nd and 2nd to last nodes

	//Boolean Functions
	bool sameEnds(const AnyList& list) const;

private:
	sNode *first; //pointer to point to the first sNode in the list
	int count;	      //keeps track of number of sNodes in the list
};

#endif