#include "Square.h"
#include "Rectangle.h"
#include "ShapeController.h"
#include <sstream>
#include <fstream>
using namespace std;

Square::Square() : Rectangle()
{
}

Square::Square(const Square& sq) : Rectangle(sq)
{
}

Square::Square(double a) : Rectangle(a, a) 
{
}

string Square::toString()
{
	stringstream ss;
	ss << (*this);
	return ss.str();
}

ostream& operator<<(ostream& out, Square& sq)
{
	out << "Square: a = " << sq.getA() << " , perimeter = " << sq.perimeter() << " , area = " << sq.area();
	return out;
}
void Square::output()
{
	writeInFile(this->toString());
}
Square* Square::input()
{
	ifstream in;
	string url = "C:\\Users\\HP\\source\\repos\\Figures\\SquareDataInput.txt";
	in.open(url);
	if (!in) {
		cout << "Unable to open file";
		exit(1);
	}
	string x;
	int num = 0;
	Square* squares = new Square[getSizeOfArr(url)];
	while (getline(in, x)) {
		double r;
		istringstream rStream(x);
		rStream >> r;
		squares[num].setB(r);
		squares[num++].setA(r);
	}
	in.close();
	return squares;
}