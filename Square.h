#pragma once
#include "Rectangle.h"
class Square : public Rectangle
{
private:
	int a;
public:
	Square();
	Square(const Square&);
	Square(int);
};

