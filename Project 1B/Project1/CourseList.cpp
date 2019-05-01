/*
	Group_Name
	Huang, Ivy
	Huynh, William
	Lee, June
	Salcedo, Salvador

	CS A250
	May 1, 2019

	Project 1 - Part B
*/

#include "CourseList.h"

// Default constructor


// Definition function addCourse


// Definition function isEmpty


// Definition searchCourse


// Definition printAllCourses


// Definition printTransferCourses


// Definition printVocationalCourses
void CourseList::printVocationalCourses() const
{
	Node *current = first;
	while (current != nullptr)
	{
		if (current->getCourse().isTransferable == false)
		{
			cout << current->getCourse().getPrefix() << " - "
				<< current->getCourse().getCourseName() << endl;
		}

		current = current->getNext(); 
	}
	
}

// Definition printCourseByNumber
void CourseList::printCourseByNumber(int courseNum) const
{
	Node *current = getCourseLocation(courseNum);
	current->getCourse().printCourse(); 

}

// Definition printPrereqs
void CourseList::printPrereqs(int courseNum) const
{
	Node *current = getCourseLocation(courseNum);
	current->getCourse().printPrereqs();
}

// Definition clearList


// Destructor


// Definition function getCourseLocation
