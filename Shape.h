#pragma once
#include <iostream>
#include <fstream>
using namespace std;

class Shape
{
public:
	virtual double area() = 0;
	virtual double perimeter() = 0;
	virtual void input(istream&) = 0;
	virtual void output() = 0;
};