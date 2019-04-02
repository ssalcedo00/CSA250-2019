/*
	Salcedo, Salvador

	CS A250
	April 2, 2019

	Lab 8
*/

#include "DPair.h"

// Declaration overloaded insertion operator
ostream& operator<<(ostream& out, const DPair& pair)
{
	out << "(" << pair.first << ", " << endl;
	return out;
}

// Default constructor
DPair::DPair()
{
	first = 0;
	second = new int(0);
}

// Overloaded constructor
DPair::DPair(int newFirst, int newSecond)
{
	first = newFirst;
	second = new int(newSecond);
}

// Copy constructor
DPair::DPair(const DPair& oldDPair)
{
	DPair(oldDPair.first, *(oldDPair.second));
}

// Definition function getFirst
int DPair::getFirst() const
{
	return first;
}

// Definition function getSecond
int& DPair::getSecond() const
{
	return *second;
}

// Definition function setFirst
void DPair::setFirst(int newFirst) {
	first = newFirst;
}

// Definition function setSecond
void DPair::setSecond(int newSecond) {
	*second = newSecond;
}

// Definition overloaded assignment operator
DPair& DPair::operator=(const DPair& leftPair) {
	first = leftPair.first;
	*second = *(leftPair.second); 
	return *this;
}

// Destructor
DPair::~DPair() {
	delete second;
	second = nullptr;
}