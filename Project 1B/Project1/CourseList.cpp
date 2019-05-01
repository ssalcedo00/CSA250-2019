/*
	Group_Name
	Huang, Ivy
	Huynh, William
	Lee, June
	Salcedo, Salvador

	CS A250
	April 29, 2019

	Project 1 - Part B
*/

#include "CourseList.h"
#include "CourseType.h"
#include "Course.h"


// Default constructor
CourseList::CourseList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

// Definition function addCourse
void CourseList::addCourse(const string& newCourseName, int newCourseNumber,
	double newCourseUnits, const vector<int>& newPrereqs, char newTrans)
{
	Course newCourse(newCourseName, newCourseNumber, newCourseUnits, newPrereqs, newTrans);

	Node *newNode = new Node(newCourse, nullptr);

	last->setNext(newNode);
	last = newNode;

}

// Definition function isEmpty
bool CourseList::isEmpty() const
{
	if (first == nullptr)
		return true;

	else
		return false;
}

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