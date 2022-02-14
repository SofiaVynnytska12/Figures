#include "Rectangle.h"
#include "ShapeController.h"
#include <sstream>
#include <fstream>
using namespace std;

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
	if (a > 0 && b > 0)
	{
		this->a = a;
		this->b = b;
	} 
	else
	{
		throw invalid_argument("illegal sides to create a triangle");
	}
}

double Rectangle::area()
{
	return a*b;
}

double Rectangle::perimeter()
{
	return 2*(a+b);
}

Rectangle* Rectangle::input()
{
	ifstream in;
	string url = "C:\\Users\\HP\\source\\repos\\Figures\\RectangleDataInput.txt";
	in.open(url);
	if (!in) {
		cout << "Unable to open file";
		exit(1);
	}
	string x;
	int num = 0;
	Rectangle* rectans = new Rectangle[getSizeOfArr(url)];
	while (getline(in, x)) {
		double a, b;
		string* arrOfWords = new string[3];
		stringstream sstream(x);
		string word;
		int i = 0;
		while (getline(sstream, word, ' ')) {
			arrOfWords[i++] = word;
		}
		istringstream aStream(arrOfWords[0]);
		istringstream bStream(arrOfWords[1]);
		aStream >> a; bStream >> b;
		rectans[num].setA(a);
		rectans[num++].setB(b);
	}
	in.close();
	return rectans;
}

void Rectangle::output()
{
	writeInFile(this->toString());
}

string Rectangle::toString()
{
	stringstream ss;
	ss << (*this);
	return ss.str();
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
