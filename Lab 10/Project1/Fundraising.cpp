/*
	Salcedo, Salvador

	CS A250
	April 15, 2019

	Lab 10
*/

#include "Fundraising.h"

//static variable initialized 
int Fundraising::totalBoxesSold = 0;
int Fundraising::totalBoxesInStorage = TOTAL_BOXES_TO_SELL;
double Fundraising::totalBalance = -COST_PER_BOX * TOTAL_BOXES_TO_SELL;

// Default constructor
Fundraising::Fundraising() {
	id = 0;
	boxesSold = 0;
	boxesToSell = BOXES_FIRST_TRY;
	totalBoxesInStorage -= BOXES_FIRST_TRY;
	name = "Not set yet.";
}

// Definition of function setID
void Fundraising::setID(const string& newName, int newID) {
	name = newName;
	id = newID;
}

// Definition of function requestBoxes
void Fundraising::requestBoxes(int numRequested) {
	if (numRequested > totalBoxesInStorage)
		cerr << "\n*** Not able to fulfull request. There are only " << totalBoxesInStorage << " left.";
	else {
		boxesToSell += numRequested;
		totalBoxesInStorage -= numRequested;
	}
}

// Definition of function justSold
void Fundraising::justSold(int sold) {
	totalBalance += (sold * PRICE_PER_BOX);
	boxesSold += sold;
	totalBoxesSold += sold;
	boxesToSell -= sold;
}

// Definition of function getTotalBalance
double Fundraising::getTotalBalance() {
	return totalBalance;
}

// Definition of function getTotalBoxesSold
int Fundraising::getTotalBoxesSold() {
	return totalBoxesSold;
}

// Definition of function getTotalBoxesInStorage
int Fundraising::getTotalBoxesInStorage() {
	return totalBoxesInStorage;
}

// Destructor
Fundraising::~Fundraising() {
	totalBoxesInStorage += boxesToSell;
}