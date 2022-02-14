#include "Triangle.h"
#include "ShapeController.h"
#include <fstream>
#include <sstream>
using namespace std;

Triangle::Triangle()
{
	a = 1;
	b = 1;
	c = 1;
}

Triangle::Triangle(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && c + b > a)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}
	else
	{
		throw invalid_argument("illegal sides to create a triangle");
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

Triangle* Triangle::input()
{
	ifstream in;
	string url = "C:\\Users\\HP\\source\\repos\\Figures\\TriangleDataInput.txt";
	in.open(url);
	if (!in) {
		cout << "Unable to open file";
		exit(1);
	}
	string x;
	int num = 0;
	Triangle* triangles = new Triangle[getSizeOfArr(url)];
	while (getline(in, x)) { 
		double a, b, c;
		string* arrOfWords = new string[3];
		stringstream sstream(x);
		string word;
		int i = 0;
		while (getline(sstream, word, ' ')) {
			arrOfWords[i++] = word;
		}
		istringstream aStream(arrOfWords[0]);
		istringstream bStream(arrOfWords[1]);
		istringstream cStream(arrOfWords[2]);
		aStream >> a; bStream >> b; cStream >> c;
		triangles[num].setA(a);
		triangles[num].setB(b);
		triangles[num++].setC(c);
	}
	in.close();
	return triangles;
}

void Triangle::output()
{
	writeInFile(this->toString());
}
string Triangle::toString()
{
	stringstream ss;
	ss << (*this);
	return ss.str();
}
double Triangle::getA()
{ 
	return a;
}
void Triangle::setA(double a) 
{
	this->a = a;
}
double Triangle::getB() 
{
	return b;
}
void Triangle::setB(double b) 
{
	this->b = b;
}
double Triangle::getC() 
{
	return c;
}
void Triangle::setC(double c)
{
	this->c = c;
}

ostream& operator<<(ostream& out, Triangle& tr)
{
	out << "Triangle: a = " << tr.getA() << " , b = " << tr.getB() << " , c = " << tr.getC() << " , perimeter = " << tr.perimeter() << " , area = " << tr.area();
	return out;
}
