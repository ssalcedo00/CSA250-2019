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
#include "CourseType.h"

using namespace std;


int main()
{
	CourseList courseList;

	cout << ((courseList.isEmpty()) ? "List is empty.\n" : "List is not empty.\n");
	cout << endl;

	cout << "Add courses...\n";
	vector<int> prereq150 = { 131, 140, 170 };
	courseList.addCourse("C++ Programming 1", 150, 4.0, prereq150, 'Y');
	vector<int> prereq250 = { 150 };
	courseList.addCourse("C++ Programming 2", 250, 4.0, prereq250, 'Y');
	vector<int> prereq200 = { 250 };
	courseList.addCourse("Data Structures", 200, 4.0, prereq250, 'Y');
	vector<int> prereq100;
	courseList.addCourse("Intro to Programming", 100, 3.0, prereq100, 'N');

	cout << ((courseList.isEmpty()) ? "List is empty.\n" : "List is not empty.\n");
	cout << endl;

	cout << "\nPrint all courses...\n";
	courseList.printAllCourses();

	cout << "\nPrint transfer courses...\n";
	courseList.printTransferCourses();

	cout << "\nPrint vocational courses...\n";
	courseList.printVocationalCourses();

	cout << "\nPrint information about CS A250...\n";
	courseList.printCourseByNumber(250);

	cout << "\nPrint prerequisites for CS A150...\n";
	courseList.printPrereqs(150);

	cout << "\nClear list...\n";
	courseList.clearList();
	cout << ((courseList.isEmpty()) ? "List is empty.\n" : "List is not empty.\n");
	cout << endl;


	cout << endl;
	system("Pause");
	return 0;

}