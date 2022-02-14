#include "Circle.h"
#include <corecrt_math_defines.h>
Circle::Circle()
{
	radius = 10;
}

Circle::Circle(int)
{
	this->radius = radius;
}

Circle::Circle(const Circle& cir)
{
	radius = cir.radius;
}

double Circle::area()
{
	return M_PI*pow(radius, 2);
}

double Circle::perimeter()
{
	return 2*M_PI*radius;
}

void Circle::input(istream&)
{
}

void Circle::output()
{
	
}

void Circle::setRadius(int radius)
{
	this->radius = radius;
}

int Circle::getRadius()
{
	return radius;
}

ostream& operator<<(ostream& out, Circle& circle)
{
	out << "Circle: radius: " << circle.getRadius() << " , length: " << circle.perimeter() << " , area: " << circle.area();
	return out;
}
