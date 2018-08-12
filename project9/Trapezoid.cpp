/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 4/16/2018
 * c++ 17
 *
 * I created a Trapezoid class which needs 2 points and 2 length.
 *
 */

#include "Trapezoid.h"
#include <iostream>
using namespace std;

Trapezoid::Trapezoid() {
    // nothing
}

Trapezoid::Trapezoid(Point p1, Point p2, int length1, int length2): Quadrilateral(p1, p2, Point(p1.getX() + length1, p1.getY()), Point(p2.getX() + length2, p2.getY())){
}

Trapezoid::~Trapezoid() {
    // nothing
}

void Trapezoid::print() {
    Quadrilateral::print();
}
