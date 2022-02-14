#pragma once
#include "Rectangle.h"
class Square : public Rectangle
{
private:
	int a;
public:
	Square();
	Square(const Square&);
	Square(double a);
	friend ostream& operator<<(ostream& out, Square& sq);
};

