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
	CourseList();

	// Function addCourse
	void addCourse(const string& newCourseName, int newCourseNumber,
		double newCourseUnits, const vector<int>& newPrereqs, char newTrans);

	// Boolean functions
	bool isEmpty() const;
	bool searchCourse(int searchData) const;

	// Print functions
	void printAllCourses() const;
	void printTransferCourses() const;
	void printVocationalCourses() const;
	void printCourseByNumber(int courseNum) const;
	void printPrereqs(int courseNum) const;

	// Function clearList
	void clearList();

	// Destructor
	~CourseList();
private:
	// Function getCourseLocation
	Node* getCourseLocation(int num) const;
	
	Node *first;
	Node *last;
	int count;
};

#endif
