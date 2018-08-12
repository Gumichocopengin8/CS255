//
// Keita Nonaka
//
// This is a header file for Trapezoid class, base class is Quadrilateral class.
// This header is for declaring methods.
//

#ifndef CS255_TRAPEZOID_H
#define CS255_TRAPEZOID_H

#include "Quadrilateral.h"

class Trapezoid : public Quadrilateral {

public:
    Trapezoid();

    Trapezoid(Point p1, Point p2, int length1, int length2);

    ~Trapezoid();

    void print();
};

#endif //CS255_TRAPEZOID_H
