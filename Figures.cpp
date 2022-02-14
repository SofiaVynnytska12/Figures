#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include "ShapeController.h"
using namespace std;

int main()
{
    cout << "Triangle demonstration" << endl;
    Triangle t1;
    t1.output();
    try {
        Triangle t2(2, 4, 1);
        t2.output();
    }
    catch (const std::invalid_argument& e) {
        cout << "Illegal args" << endl;
    }
    try {
        Triangle t2(2, 4, 5);
        t2.output();
    }
    catch (const std::invalid_argument& e) {
        cout << "Illegal args" << endl;
    }
    Triangle t3(t1);
    t3.output();
    cout << "Wrote data about the third triangle into file" << endl;

    Triangle* tr = t3.input();
    cout << "Read data about triangles from file" << endl;
    for (int i = 0; i < getSizeOfArr("C:\\Users\\HP\\source\\repos\\Figures\\TriangleDataInput.txt"); i++)
    {
        cout << tr[i] << endl;
    }

    cout << "Rectangle demonstration" << endl;
    Rectangle r1(12, 6);
    Rectangle r2(r1);
    cout << r2 << endl;
    r1.output();
    cout << "Wrote data about the first rectangle into file" << endl;
    Rectangle* rec = r1.input();
    cout << "Read data about rectangles from file" << endl;
    for (int i = 0; i < getSizeOfArr("C:\\Users\\HP\\source\\repos\\Figures\\RectangleDataInput.txt"); i++)
    {
        cout << rec[i] << endl;
    }

    cout << "Square demonstration" << endl;
    Square s1(6);
    Square s2(s1);
    cout << s2 << endl;
    s1.output();
    cout << "Wrote data about the first square into file" << endl;
    Square* sq = s1.input();
    cout << "Read data about squares from file" << endl;
    for (int i = 0; i < getSizeOfArr("C:\\Users\\HP\\source\\repos\\Figures\\SquareDataInput.txt"); i++)
    {
        cout << sq[i] << endl;
    }

    cout << "Circle demonstration" << endl;
    Circle c1;
    cout << c1 << endl;
    Circle c2;
    c2.output();
    cout << "Wrote data about the second circle into file" << endl;
    Circle* cir = c2.input();
    cout << "Read data about circles from file" << endl;
    for (int i = 0; i < getSizeOfArr("C:\\Users\\HP\\source\\repos\\Figures\\CircleDataInput.txt"); i++)
    {
        cout << cir[i] << endl;
    }
}
