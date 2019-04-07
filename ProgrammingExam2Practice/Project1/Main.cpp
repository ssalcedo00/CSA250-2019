#include "Functions.h"
#include "TestFunction1.h"
#include "TestFunction2.h"
#include "TestFunction3.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "================================================\n";
	cout << "\n    => TEST FUNCTION 1\n";
	cout << "\n================================================\n";
	testFunction1();

	
	cout << "================================================\n";
	cout << "\n    => TEST FUNCTION 2\n";
	cout << "\n================================================\n";
	testFunction2();
	
	cout << "================================================\n";
	cout << "\n    => TEST FUNCTION 3\n";
	cout << "\n================================================\n";
	testFunction3();

	cout << endl;
	system("Pause");
	return 0;
}
