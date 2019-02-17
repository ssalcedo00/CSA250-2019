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
	carModel = "No name yet";
	year = 0;
}

Ferrari::Ferrari(const string& newModel, int newYear) {
	carModel = newModel;
	year = newYear;
}

string Ferrari::getModel() const {
	return carModel;
}

int Ferrari::getYear() const {
	return year;
}

void Ferrari::setModel(const string & newModel) {
	carModel = newModel;
}

void Ferrari::setYear(int newYear) {
	year = newYear;
}

void Ferrari::print() const {
	cout << carModel << " (" << year << ")" << endl;
}

bool Ferrari::sameCar(const Ferrari & carComp) const {
	return (carModel == carComp.getModel() && year == carComp.getYear());
}

Ferrari::~Ferrari() {
}

#endif // !FERRARI.CPP
