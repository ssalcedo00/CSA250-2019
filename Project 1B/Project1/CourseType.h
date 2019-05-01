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

#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

class CourseType
{
	public:
		CourseType();
		CourseType(const string& newCourseName,
			int newCourseNumber, double newCourseUnits);

		string getCourseName() const;
		int getCourseNumber() const;
		double getCourseUnits() const;
		string getPrefix() const;

		void setCourseName(const string& newCourseName);
		void setCourseNumber(int newCourseNumber);
		void setCourseUnits(double newCourseUnits);

		void printCourse() const;

		~CourseType();

	private:
		static const string prefix;

		string courseName;
		int courseNumber;
		double courseUnits;
};

#endif