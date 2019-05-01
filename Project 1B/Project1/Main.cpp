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
	CourseType c;
	c.printCourse();

	c.setCourseName("C++ Programming I");
	c.setCourseNumber(150);
	c.setCourseUnits(4.00);
	CourseType d("C++ Programming II", 250, 4.00);

	c.printCourse();
	d.printCourse();

	cout << c.getCourseName() << c.getCourseNumber() << c.getCourseUnits()
		<< c.getPrefix() << endl;
	cout << d.getCourseName() << d.getCourseNumber() << d.getCourseUnits()
		<< d.getPrefix() << endl;

	vector<int> sE = { 150, 170 };
	Course a("Software Engineering", 220, 4.00, sE, 'Y');
	a.printCourse(); 
	a.printPrereqs();

	cout << endl;
	system("pause");
	return 0;
}