#include "Triangle.h"
#include <stdexcept>

Triangle::Triangle()
{
	a = 1;
	b = 1;
	c = 1;
}

Triangle::Triangle(int a, int b, int c)
{
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && c + b > a)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		throw std::invalid_argument("illegal sides to create a triangle");
	}
}

Triangle::Triangle(const Triangle& t)
{
	a = t.a;
	b = t.b;
	c = t.c;
}

double Triangle::area()
{
	double p = (a + b + c) / 2.0;
	return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::perimeter()
{
	return a+b+c;
}

void Triangle::input(istream& in)
{
	in >> a >> b >> c;
}

void Triangle::output()
{
	
}
int Triangle::getA()
{ 
	return a;
}
void Triangle::setA(int a) 
{
	this->a = a;
}
int Triangle::getB() 
{
	return b;
}
void Triangle::setB(int b) 
{
	this->b = b;
}
int Triangle::getC() 
{
	return c;
}
void Triangle::setC(int c)
{
	this->c = c;
}

ostream& operator<<(ostream& out, Triangle& tr)
{
	out << "Triangle: a = " << tr.getA() << " , b = " << tr.getB() << " , c = " << tr.getC() << " , perimeter = " << tr.perimeter() << " , area = " << tr.area();
	return out;
}
