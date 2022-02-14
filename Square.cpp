#include "Square.h"
#include "Rectangle.h"
Square::Square()
{
}

Square::Square(const Square& sq) :Rectangle(sq)
{
}

Square::Square(double a) : Rectangle(a, a) 
{
}

ostream& operator<<(ostream& out, Square& sq)
{
	out << "Square: a = " << sq.getA() << " , parimeter = " << sq.perimeter() << " , square = " << sq.area();
	return out;
}
