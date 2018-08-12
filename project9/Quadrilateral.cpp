/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * I created a Quadrilateral which needs 4 points.
 *
 */

#include "Quadrilateral.h"
#include <iostream>
using namespace std;

Quadrilateral::Quadrilateral() {
    // nothing
}

Quadrilateral::Quadrilateral(Point p1, Point p2, Point p3, Point p4) {
    this->p1 = p1;
    this->p2 = p2;
    this->p3 = p3;
    this->p4 = p4;
}

Quadrilateral::~Quadrilateral() {
    // nothing
}

void Quadrilateral::print() {
    cout << "(" << p1.getX() << ", " << p1.getY() << ")";
    cout << "(" << p2.getX() << ", " << p2.getY() << ")";
    cout << "(" << p3.getX() << ", " << p3.getY() << ")";
    cout << "(" << p4.getX() << ", " << p4.getY() << ")" << endl;
}
