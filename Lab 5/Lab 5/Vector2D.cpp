/*
	Salcedo, Salvador

	CS A250
	March 1, 2019

	Lab 5
*/

#include "Vector2D.h"

ostream & operator<<(ostream & out, const Vector2D & v)
{
	out << "<" << v.x << "," << v.y << ">";
	return out;
}

Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}

Vector2D::Vector2D(int newX, int newY)
{
	x = newX;
	y = newY;
}

int Vector2D::operator*(const Vector2D & v) const
{
	return (x * v.x) + (y * v.y);
}

bool Vector2D::operator==(const Vector2D & v) const
{
	return (x == v.x) && (y == v.y);
}

Vector2D::~Vector2D()
{
}
