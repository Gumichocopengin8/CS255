//
// Keita Nonaka
//
// This is a header file for Quadrilateral class
// This header is for declaring methods and variables.
//

#ifndef CS255_QUADRILATERAL_H
#define CS255_QUADRILATERAL_H


#include "Point.h"

class Quadrilateral {
protected:
    Point p1;
    Point p2;
    Point p3;
    Point p4;

public:
    Quadrilateral();

    Quadrilateral(Point p1, Point p2, Point p3, Point p4);

    ~Quadrilateral();

    virtual void print();
};

#endif //CS255_QUADRILATERAL_H
