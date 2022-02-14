#pragma once
#include "Shape.h"
class Rectangle : public Shape
{
private:
	double a;
	double b;
public:
	Rectangle();
	Rectangle(const Rectangle&);
	Rectangle(double, double);
	virtual double area();
	virtual double perimeter();
	virtual void input(istream&);
	virtual void output();
	double getA();
	double getB();
	void setA(double);
	void setB(double);
	friend ostream& operator<<(ostream& out, Rectangle& rec);
};

