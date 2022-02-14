#include "Circle.h"
#include <corecrt_math_defines.h>
#include <sstream>
#include <fstream>
#include "ShapeController.h"
using namespace std;

Circle::Circle()
{
	radius = 10;
}

Circle::Circle(double)
{
	if (radius > 0)
	{
		this->radius = radius;
	}
	else
	{
		throw invalid_argument("illegal sides to create a triangle");
	}
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

Circle* Circle::input()
{
	ifstream in;
	string url = "C:\\Users\\HP\\source\\repos\\Figures\\CircleDataInput.txt";
	in.open(url);
	if (!in) {
		cout << "Unable to open file";
		exit(1);
	}
	string x;
	int num = 0;
	Circle* circles = new Circle[getSizeOfArr(url)];
	while (getline(in, x)) {
		double r;
		istringstream rStream(x);
		rStream >> r;
		circles[num++].setRadius(r);
	}
	in.close();
	return circles;
}

void Circle::output()
{
	writeInFile(this->toString());
}

string Circle::toString()
{
	stringstream ss;
	ss << (*this);
	return ss.str();
}

void Circle::setRadius(double radius)
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
