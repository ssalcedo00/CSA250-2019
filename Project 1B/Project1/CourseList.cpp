/*
	(name header)
*/

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
void CourseList::printVocationalCourses() const
{
	Node *current = first;

	while (current != nullptr)
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
void CourseList::printCoursebyNumber(int courseNum) const
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