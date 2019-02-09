/*
	Salcedo, Salvador

	CS A250
	February 8, 2019

	Lab 2
*/

#ifndef FERRARI_H
#define FERRARI_H
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Ferrari {
public:
	//Constructors
	Ferrari();

	Ferrari(const string& newModel, int newYear);

	//Accessor Functions
	string getModel() const;
	int getYear() const;

	//Mutator Functions
	void setModel(const string& newModel);
	void setYear(int newYear);

	//Misc. Functions
	void print() const;
	bool sameCar(const Ferrari & carComp) const;

	//Destructor

	~Ferrari();
private:
	string carModel;
	int year;
};
#endif // !"FERRARI.H";
