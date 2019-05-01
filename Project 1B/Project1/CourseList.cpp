/*
	(name header)
*/

#include "CourseList.h"


// Default constructor


// Definition function addCourse


// Definition function isEmpty


// Definition searchCourse


// Definition printAllCourses


// Definition printTransferCourses


// Definition printVocationalCourses


// Definition printCourseByNumber


// Definition printPrereqs


// Definition clearList
void CourseList::clearList()
{
	Node* current = first->getNext();
	while(current != nullptr) 
	{
		first->setNext(current->getNext());
		delete current;
		current = first->getNext();
	}
	delete first;
	last = nullptr;
	first = nullptr;
	current = nullptr;
	count = 0;
}

// Destructor
CourseList::~CourseList() 
{
	clearList();
}

// Definition function getCourseLocation
CourseList* CourseList::getCourseLocation(int num)
{
	/*
	if (searchCourse(num)) 
	{
		Node* current = first;
		while (current != nullptr) {
			if(current->getCourse().getCourseNumber() == num)
		}
	}
	else 
	*/
		return nullptr;
}