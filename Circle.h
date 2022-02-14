#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	double radius;
public:
	Circle();
	Circle(double);
	Circle(const Circle&);
	virtual double area();
	virtual double perimeter();
	virtual Circle* input();
	virtual void output();
	virtual string toString();
	void setRadius(double);
	int getRadius();
	friend ostream& operator<<(ostream& out, Circle& emp);
};

