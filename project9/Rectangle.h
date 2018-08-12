//
// Keita Nonaka
//
// This is a header file for Rectangle class, base class is Quadrilateral class.
// This header is for declaring methods.
//

#ifndef CS255_RECTANGLE_H
#define CS255_RECTANGLE_H

#include "Parallelogram.h"

class Rectangle :public Parallelogram{

public:
    Rectangle();

    Rectangle(Point p1, int length1, int height);

    ~Rectangle();

    void print();
};


#endif //CS255_RECTANGLE_H
