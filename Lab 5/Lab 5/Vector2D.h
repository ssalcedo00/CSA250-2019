/*
	Salcedo, Salvador

	CS A250
	March 1, 2019

	Lab 5
*/

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;

class Vector2D
{
	friend ostream& operator<< (ostream& out, const Vector2D& v);

public:
	//Constructors
	Vector2D();
	Vector2D(int newX, int newY);

	//Overloaded Operators
	int operator * (const Vector2D& v) const;
	bool operator == (const Vector2D& v) const;

	//Destructor
	~Vector2D();

private:
	int x, y;
};

#endif //VECTOR2D_H
