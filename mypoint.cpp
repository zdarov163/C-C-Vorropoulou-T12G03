#include <iostream>
#include <cmath>
#include "mypoint.hpp"
using namespace std;

// Konstruktor
MyPoint::MyPoint(int x, int y, int z)

{
    this->x = x;
    this->y = y;
    this->z = z;
}

double MyPoint::dist(MyPoint *q, MyPoint *p)

{
    teil1 = pow(((p->x) - (q->x)), 2);
    teil2 = pow(((p->y) - (q->y)), 2);
    teil3 = pow(((p->z) - (q->z)), 2);
    ergebnis = sqrt(teil1 + teil2 + teil3);
}

// Methode, die die Attribute des Punktes auf die Konsole schreibt
void MyPoint::show()
{
  std::cout << "(x,y,z)  =  (" << x << "," << y << "," << z << ")" << std::endl;
}
