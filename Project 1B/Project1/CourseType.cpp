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

#include "CourseType.h"

CourseType::CourseType()
{
	courseName = "No name assigned";
	courseNumber = 0;
	courseUnits = 0;
}

CourseType::CourseType(const string& newCourseName,
	int newCourseNumber, double newCourseUnits)
{
	courseName = newCourseName;
	courseNumber = newCourseNumber;
	courseUnits = newCourseUnits;
}

string CourseType::getCourseName() const
{
	return courseName;
}

int CourseType::getCourseNumber() const
{
	return courseNumber;
}

double CourseType::getCourseUnits() const
{
	return courseUnits;
}

string CourseType::getPrefix() const
{
	return CLASS_PREFIX;
}

void CourseType::setCourseName(const string& newCourseName)
{
	courseName = newCourseName;
}

void CourseType::setCourseNumber(int newCourseNumber)
{
	courseNumber = newCourseNumber;
}

void CourseType::setCourseUnits(double newCourseUnits)
{
	courseUnits = newCourseUnits;
}

void CourseType::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << CLASS_PREFIX << courseNumber << " - " << courseName
		<< " (" << courseUnits << " units)" << endl;
}

CourseType::~CourseType()
{}