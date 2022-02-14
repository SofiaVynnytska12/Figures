#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
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

    cout << "Rectangle demonstration" << endl;


    cout << "Square demonstration" << endl;
    Square s1(10);
    Square s2(s1);
    cout << s2.perimeter() << endl;

    cout << "Circle demonstration" << endl;
    Circle c1;
    cout << c1 << endl;
    Circle c2;
}
