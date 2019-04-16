#include "Fundraising.h"

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void getActivityForToday();

int main()
{
	Fundraising bob, jill, jane;
	/* 
	* Default constructor gives 10 boxes
	* to a fundraiser.
	*/

	bob.setID("Bob", 111);
	jill.setID("Jane", 222);
	jane.setID("Jill", 333);

	// DAY 1
	cout << "Activity for DAY 1";
	bob.justSold(5);
	jill.justSold(8);
	jane.justSold(10);
	bob.requestBoxes(5);
	jill.requestBoxes(10);
	jane.requestBoxes(20);
	getActivityForToday();
	
	// DAY 2
	cout << "\nActivity for DAY 2";
	bob.justSold(8);
	jill.justSold(7);
	jane.justSold(2);
	bob.requestBoxes(5);
	jill.requestBoxes(5);
	jane.requestBoxes(10);
	getActivityForToday();

	// DAY 3
	cout << "\nActivity for DAY 3";
	bob.justSold(5);
	jill.justSold(2);
	jane.justSold(6);
	bob.requestBoxes(10);
	jill.requestBoxes(10);
	// Jane does not make a request.
	getActivityForToday();

	// DAY 4
	cout << "\nActivity for DAY 4";
	bob.justSold(4);
	jill.justSold(18);
	jane.justSold(11);
	bob.requestBoxes(20);
	// Jill does not make a request.
	// Jane does not make a request.
	getActivityForToday();

	// DAY 5	
	cout << "\nActivity for DAY 5";
	bob.justSold(6);
	jane.justSold(1);
	// Jill has no more boxes to sell and she gets out.
	jill.~Fundraising();
	bob.requestBoxes(10);
	// Jane does not make a request.
	getActivityForToday();

	// DAY 6
	cout << "\nActivity for DAY 6";
	bob.justSold(12);
	// Jane has still 10 boxes, but she returns them and gets out.
	jill.~Fundraising();
	// Bob makes a request, but there are not enough boxes left.
	bob.requestBoxes(20);
	// Bob has still 20 boxes, but he returns them and gets out.
	bob.~Fundraising();
	getActivityForToday(); //Note that Bob returned his boxes.

	cout << endl;
	system("Pause");
	return 0;
}

void getActivityForToday()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "\n    Total boxes sold: " << Fundraising::getTotalBoxesSold();
	cout << "\n    Total balance: $" << Fundraising::getTotalBalance();
	cout << "\n    Total boxes in storage: " << Fundraising::getTotalBoxesInStorage();
}
