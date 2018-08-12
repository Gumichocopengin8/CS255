/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * I created a Parallelogram class which needs 2 points and 1 length.
 *
 */

#include "Parallelogram.h"
#include <iostream>
using namespace std;

Parallelogram::Parallelogram() {
   // nothing
}

Parallelogram::Parallelogram(Point p1, Point p2, int length1): Trapezoid(p1, p2, length1, length1){
    // nothing
}

Parallelogram::~Parallelogram() {
    // nothing
}

void Parallelogram::print() {
    Quadrilateral::print();
}
