#include "Rectangle.h"

Rectangle::Rectangle()
{
	a = 1;
	b = 2;
}

Rectangle::Rectangle(const Rectangle& rec)
{
	a = rec.a;
	b = rec.b;
}

Rectangle::Rectangle(int a, int b)
{
	a = this->a;
	b = this->b;
}

double Rectangle::area()
{
	return 0.0;
}

double Rectangle::perimeter()
{
	return 0.0;
}

void Rectangle::input(istream&)
{
}

void Rectangle::output()
{
}
