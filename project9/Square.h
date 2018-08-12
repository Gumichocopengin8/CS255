//
// Keita Nonaka
//
// This is a header file for Square class, base class is Quadrilateral class.
// This header is for declaring methods.
//

#ifndef CS255_SQUARE_H
#define CS255_SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle{

public:
    Square();

    Square(Point p1, int length1);

    ~Square();

    void print();
};


#endif //CS255_SQUARE_H
