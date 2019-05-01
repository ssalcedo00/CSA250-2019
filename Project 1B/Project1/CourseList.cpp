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


// Default constructor


// Definition function addCourse


// Definition function isEmpty


// Definition searchCourse
bool CourseList::search(int searchData) const
{
	Node *current = first;

	while (current != nullptr)
	{
		if (current->getCourse().getCourseNumber() == searchData)
			return true;
		else
			current = current->getNext();
	}

	return false;
}

// Definition printAllCourses
void CourseList::printAllCourses() const
{
	Node *current = first;

	while (current != nullptr)
	{
		cout << current->getCourse().getPrefix() << 
			current->getCourse().getCourseNumber() << " - "
			<< current->getCourse().getCourseName() << endl;

		current = current->getNext();
	}
}

// Definition printTransferCourses
void CourseList::printTransferCourses() const
{
	Node *current = first;

	while (current != nullptr)
	{
		if (current->getCourse().isTransferable() == true)
		{
			cout << current->getCourse().getPrefix() <<
				current->getCourse().getCourseNumber() << " - "
				<< current->getCourse().getCourseName() << endl;
		}

		current = current->getNext();
	}
}

// Definition printVocationalCourses


// Definition printCourseByNumber


// Definition printPrereqs


// Definition clearList


// Destructor


// Definition function getCourseLocation
