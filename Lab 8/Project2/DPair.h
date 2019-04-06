#ifndef DPAIR_H
#define DPAIR_H

#include <iostream>
#include <string>

using namespace std;

class DPair
{
	// Declaration overloaded insertion operator
	friend ostream& operator<<(ostream& out, const DPair& pair);

public:
	// Default constructor
	DPair();

	// Overloaded constructor
	DPair(int newFirst, int newSecond);

	// Copy constructor
	DPair(const DPair& oldDPair);

	// Declaration function getFirst
	int getFirst() const;

	// Declaration function getSecond
	int getSecond() const;

	// Declaration function setFirst
	void setFirst(int newFirst);

	// Declaration function setSecond
	void setSecond(int newSecond);

	// Declaration overloaded assignment operator
	DPair& operator=(const DPair&);

	// Destructor
	~DPair();

private:
	int first;
	int	*second;
};
#endif
