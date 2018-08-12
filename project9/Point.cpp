/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * I created a Point class which stores x, y points.
 *
 */

#include "Point.h"
#include <iostream>
using namespace std;

Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

Point::~Point() {
    // nothing
}

int Point::getX() {
    return x;
}

int Point::getY() {
    return y;
}