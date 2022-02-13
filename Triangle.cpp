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
		a = this->a;
		b = this->b;
		c = this->c;
	}
	else
	{
		a = 0;
		b = 0;
		c = 0;
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
	cout << "Triangle: a = " << a << " , b = " << b << " , c = " << c << " , perimeter = " << perimeter() << " , area = " << area() << endl;
}
