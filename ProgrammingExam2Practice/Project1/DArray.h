#ifndef DARRAY_H
#define DARRAY_H

#include <iostream>
using namespace std;

const int CAP = 50;

class DArray
{
	friend ostream& operator<<(ostream& out, const DArray& theArray);
public:
    DArray();
    DArray(int newCapacity);

    void addElement(int newElement);

	int getNumOfElem() const;
	bool empty() const;
	
	~DArray(); 

protected:
    int *a;					
    int capacity;			
    int numOfElem;		

};

#endif