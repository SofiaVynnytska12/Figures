#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
	int a;
	int b;
	int c;
public:
	Triangle();
	Triangle(int, int, int);
	Triangle(const Triangle&);
	virtual double area();
	virtual double perimeter();
	virtual void input(istream&);
	virtual void output();
};

