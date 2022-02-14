#pragma once
#include <iostream>
using namespace std;

class Shape
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual Shape* input() = 0;
	virtual void output() = 0;
	virtual string toString() = 0;
};