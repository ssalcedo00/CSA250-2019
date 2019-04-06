#include "DoublyList.h"

ostream& operator<<(ostream& out, const DoublyList& theList)
{
	if (theList.count == 0)
		out << "(empty)";
	else
	{
		Node *temp = theList.first;
		while (temp != nullptr)
		{
			out << temp->getData() << " ";
			temp = temp->getNext();
		}
	}

	return out;
}

DoublyList::DoublyList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

void DoublyList::insertBack(int newData)
{
	last = new Node(newData, last, nullptr);	

	if(count == 0) 
       first = last;		
    else
        last->getPrev()->setNext(last);	

	++count;
}

bool DoublyList::empty() const
{
	return (count == 0);
}

void DoublyList::destroyList()
{ 	
    while (first != nullptr)
    {
		Node  *temp = first; 
        first = first->getNext();
        delete temp;
		temp = nullptr;
    }

    last = nullptr;
	count = 0;
}

DoublyList::~DoublyList()
{
	destroyList();
}