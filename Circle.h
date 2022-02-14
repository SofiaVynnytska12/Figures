#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	int radius;
public:
	Circle();
	Circle(int);
	Circle(const Circle&);
	virtual double area();
	virtual double perimeter();
	virtual void input(istream&);
	virtual void output();
	void setRadius(int);
	int getRadius();
	friend ostream& operator<<(ostream& out, Circle& emp);
};

