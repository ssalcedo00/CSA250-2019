/*
	Salcedo, Salvador

	CS A250
	February 8, 2019

	Lab 2
*/

#include "Ferrari.h"
using namespace std;

int main() {

	Ferrari LaFerrari = Ferrari("LaFerrari", 2013);
	Ferrari LAFerrari = Ferrari("LAFerrari", 2013);
	Ferrari Enzo = Ferrari("Enzo", 2003);
	Ferrari Enzo2005 = Ferrari("Enzo", 2005);

	LaFerrari.print();
	LAFerrari.print();
	Enzo.print();
	Enzo2005.print();

	cout << "LaFerrari vs. LaFerrari: " << LaFerrari.sameCar(LaFerrari) << endl;
	cout << "LaFerrari vs. LAFerrari: " << LaFerrari.sameCar(LAFerrari) << endl;

	cout << "Car Model: " << LaFerrari.getModel() << endl;
	cout << "Car Year: " << LaFerrari.getYear() << endl;


	LaFerrari.setModel("Caca");
	LaFerrari.setYear(6969);
	LaFerrari.print();
	cout << endl;

	system("Pause");
	return 0;
}