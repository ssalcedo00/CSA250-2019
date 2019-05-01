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
	if (count == 0) 
	{
		first = new Node(newCourse, nullptr);
		last = first;
		count++;
	}

	else 
	{
		Node* newNode = new Node(newCourse, nullptr);
		count++;
		last->setNext(newNode);
		last = newNode;
	}
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
bool CourseList::searchCourse(int searchData) const
{
	Node *current = first;

	while (current->getNext() != nullptr)
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

	while (current->getNext() != nullptr)
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
void CourseList::printVocationalCourses() const
{
	Node *current = first;

	while (current->getNext() != nullptr)
	{
		if (current->getCourse().isTransferable() == false)
		{
			cout << current->getCourse().getPrefix() <<
				current->getCourse().getCourseNumber() << " - "
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
	cout << endl;

}

// Definition clearList
void CourseList::clearList()
{
	while(first != nullptr) 
	{
		Node* current = first;
		first = first->getNext();
		delete current;
		current = nullptr;
	}
	last = nullptr;
	count = 0;
}

// Destructor
CourseList::~CourseList() 
{
	clearList();
}

// Definition function getCourseLocation
Node* CourseList::getCourseLocation(int num) const
{
	if (searchCourse(num)) 
	{
		Node* current = first;
		while (current->getNext() != nullptr) 
		{
			if (current->getCourse().getCourseNumber() == num)
			{
				return current;
			}
			else
				current = current->getNext();
		}
	}
	else 
		return nullptr;
}