#ifndef FUNDRAISING_H
#define FUNDRAISING_H

#include <iostream>

using namespace std;

// The cost for each box.
const double COST_PER_BOX = 2.0;

// The number of boxes in storage.
const int TOTAL_BOXES_TO_SELL = 150;

// The selling price for each box.
const double PRICE_PER_BOX = 5.0;

// Number of boxes given the first time to the fundraiser.
const int BOXES_FIRST_TRY = 10;

class Fundraising
{
public:
	/* 
	* Default constructor
	* Set the default ID to 0.
	* Which other member variables do you need to initialize?
	*/


	/*
	* Declaration function setID
	* Re-sets the member variables name and id to 
	* the given values passed as parameters.
	*/

	
	/*
	* Declaration function requestBoxes
	* The fundraiser makes a request to get 
	* more boxes from storage.
	* If there are not enough boxes to fulfill the request,
	* print out an error message as shown in the expected output.
	*/


	/*
	* Declaration function justSold
	* The number of boxes sold in a day by
	* a fundraiser is reported here.
	*/


	/*
	* Declaration function getTotalBalance
	* Returns the total balance left after
	* a day's activity.
	* Returns the total balance.
	*/


	/*
	* Declaration function getTotalBoxesSold
	* Returns the total number of boxes sold so far.
	* Returns the total number of boxes sold by all fundraisers.
	*/


	/*
	* Declaration function getTotalBoxesInStorage
	* Returns the total number of boxes in storage.
	* Note that this does not include boxes that the 
	* fundraisers still have.
	* Returns the total number of boxes presently in storage.
	*/


	// Destructor


private:
	// The total available funds (initial cost is detracted)
	static double totalBalance;
	// Boxes left in storage and not yet given to fundraisers.
	static int totalBoxesInStorage;	
	// Boxes sold so far (this include the ones that fundraisers still have).
	static int totalBoxesSold;


	// Relative to each fundraiser.
	int boxesSold;
	int boxesToSell;
	int id;
	string name;
};

#endif