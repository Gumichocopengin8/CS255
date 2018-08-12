/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * I created a Rectangle class which needs 1 point and 2 length.
 *
 */

#include "Rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() {
    // nothing
}

Rectangle::Rectangle(Point p1, int length1, int height): Parallelogram(p1, Point(p1.getX(), p1.getY() + height), length1){
    // nothing
}

Rectangle::~Rectangle() {
    // nothing
}

void Rectangle::print() {
    Quadrilateral::print();
}
