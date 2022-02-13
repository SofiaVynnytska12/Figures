#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	int a;
	int b;
public:
	Rectangle();
	Rectangle(const Rectangle&);
	Rectangle(int, int);
	virtual double area();
	virtual double perimeter();
	virtual void input(istream&);
	virtual void output();
};

