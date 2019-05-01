/*
	(name header)
*/

#ifndef COURSELIST_H
#define COURSELIST_H

#include "Course.h"
#include "CourseType.h"

class Node
{
public:
	Node() : course(), next(nullptr) {}
	Node(const Course& newCourse, Node *newNext)
		: course(newCourse), next(newNext) {}
	Course getCourse() const { return course; }
	Node* getNext() const { return next; }
	void setCourse(const Course& newCourse) { course = newCourse; }
	void setNext(Node *newNext) { next = newNext; }
	~Node() {}
private:
	Course course;
	Node *next;
};

/*
* NOTE: The copy constructor and the overloaded assignment 
* operator should be included in this class, because the 
* object points to dynamic data. 
*/

class CourseList
{
public:
	// Default constructor

	// Function addCourse

	// Boolean functions

	// Print functions

	// Function clearList
	void clearList();

	// Destructor
	~CourseList();
private:
	// Function getCourseLocation
	CourseList * getCourseLocation(int num);
	
	Node *first;
	Node *last;
	int count;
};

#endif
