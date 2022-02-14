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

Rectangle::Rectangle(double a, double b)
{
	this->a = a;
	this->b = b;
}

double Rectangle::area()
{
	return a*b;
}

double Rectangle::perimeter()
{
	return 2*(a+b);
}

void Rectangle::input(istream&)
{
}

void Rectangle::output()
{
}

double Rectangle::getA()
{
	return a;
}

double Rectangle::getB()
{
	return b;
}

void Rectangle::setA(double a)
{
	this->a = a;
}

void Rectangle::setB(double b)
{
	this->b = b;
}

ostream& operator<<(ostream& out, Rectangle& rec) 
{
	out << "Rectangle: a = " << rec.getA() << " , b = " << rec.getB() << " , perimeter = " << rec.perimeter() << " , area = " << rec.area();
	return out;
}
