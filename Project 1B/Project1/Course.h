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

#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>
#include "CourseType.h"

using namespace std;

class Course : public CourseType 
{
	public:
		//Constructors
		Course();
		Course(const string& newName, int newNum,
			double newUnit, const vector<int>& newPrereqs, char newTrans);

		//Functions
		bool isTransferable() const;

		//Mutator Functions
		void setTransfer(char);
		void setPrerequisties(int * a, int numOfElem);

		//Print Functions
		void printCourse() const;
		void printPrereqs() const;

		~Course();

	private:
		vector<int> prereqs;
		char trans;
};





#endif // DEBUG
