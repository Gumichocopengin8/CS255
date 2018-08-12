//
// Keita Nonaka
//
// This is a header file for Parallelogram class, base class is Quadrilateral class.
// This header is for declaring methods.
//

#ifndef CS255_PARALLELOGRAM_H
#define CS255_PARALLELOGRAM_H

#include "Trapezoid.h"

class Parallelogram : public Trapezoid{

public:
    Parallelogram();

    Parallelogram(Point p1, Point p2, int length1);

    ~Parallelogram();

    void print();
};


#endif //CS255_PARALLELOGRAM_H
