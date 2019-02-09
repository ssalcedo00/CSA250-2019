/*
	Salcedo, Salvador

	CS A250
	February 8, 2019

	Lab 2
*/

#ifndef FERRARI_CPP
#define FERRARI_CPP
#include "Ferrari.h"

Ferrari::Ferrari() {
}

Ferrari::Ferrari(const string& newModel, int newYear) {
	this->carModel = newModel;
	this->year = newYear;
}

string Ferrari::getModel() const {
	return this->carModel;
}

int Ferrari::getYear() const {
	return this->year;
}

void Ferrari::setModel(const string & newModel) {
	this->carModel = newModel;
}

void Ferrari::setYear(int newYear) {
	this->year = newYear;
}

void Ferrari::print() const {
	cout << this->carModel << " (" << this->year << ")" << endl;
}

bool Ferrari::sameCar(const Ferrari & carComp) const
{
	return (this->carModel == carComp.getModel() && this->year == carComp.getYear());
}

Ferrari::~Ferrari()
{
}

#endif // !FERRARI.CPP
