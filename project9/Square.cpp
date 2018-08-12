/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * I created a Square class which needs 1 point and 1 length.
 *
 */

#include "Square.h"
#include <iostream>
using namespace std;

Square::Square() {
    // nothing
}

Square::Square(Point p1, int length1): Rectangle(p1, length1, length1) {
    // nothing
}

Square::~Square() {
    // nothing
}

void Square::print() {
    Quadrilateral::print();
}