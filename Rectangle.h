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
	virtual Rectangle* input();
	virtual void output();
	virtual string toString();
	double getA();
	double getB();
	void setA(double);
	void setB(double);
	friend ostream& operator<<(ostream& out, Rectangle& rec);
};

