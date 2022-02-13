#include "Square.h"
#include "Rectangle.h"
Square::Square()
{

}

Square::Square(const Square& sq)
{
	Rectangle r(sq);
}

Square::Square(int a)
{
	Rectangle r(a, a);
}
