#pragma once
#include "Shape.h"
class Triangle : public Shape
{
private:
	double a;
	double b;
	double c;
public:
	Triangle();
	Triangle(double, double, double);
	Triangle(const Triangle&);
	virtual double area();
	virtual double perimeter();
	virtual Triangle* input();
	virtual void output();
	virtual string toString();
	void setA(double);
	void setB(double);
	void setC(double);
	double getB();
	double getA();
	double getC();
	friend ostream& operator<<(ostream& out, Triangle& tr);
};

