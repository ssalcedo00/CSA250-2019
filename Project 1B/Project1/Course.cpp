/*
	Group_Name
	Huang, Ivy
	Huynh, William
	Lee, June
	Salcedo, Salvador

	CS A250
	April 29, 2019

	Project 1 - Part A
*/

#include "Course.h"
using namespace std;

Course::Course()
{
	trans = 'N';
}

Course::Course(const string& newName, int newNum,
	double newUnit, const vector<int>& newPrereqs, char newTrans)
	: CourseType(newName, newNum, newUnit)
{
	prereqs = newPrereqs;
	trans = newTrans;
}

bool Course::isTransferable() const
{
	return (trans == 'Y');
}

void Course::setTransfer(char newTrans)
{
	trans = newTrans;
}

void Course::setPrerequisties(int * a, int numOfElem)
{
	for (int i = 0; i < numOfElem; i++) 
	{
		prereqs.push_back(a[i]);
	}
}

void Course::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << CLASS_PREFIX << getCourseNumber() << " - " << getCourseName()
		<< " (" << getCourseUnits() << " units, " 
		<< ((trans) ? "transferable" : "not transferable") << ")" << endl;
}

void Course::printPrereqs() const
{
	cout << CLASS_PREFIX << getCourseNumber() << " - Prerequisites: ";
	int num = static_cast<int>(prereqs.size());
	for (int i = 0; i < num - 1; i++)
	{
		cout << CLASS_PREFIX << prereqs[i] << " and ";
	}
	cout << CLASS_PREFIX << prereqs[num - 1];
}

Course::~Course()
{}