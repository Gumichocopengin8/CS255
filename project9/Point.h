//
// Created by Keita Nonaka on 4/16/18.
//
// This is a header for Point class which has two variable.
//
//

#ifndef CS255_POINT_H
#define CS255_POINT_H


class Point {

private:
    int x;
    int y;

public:
    Point();

    Point(int x, int y);

    ~Point();

    int getX();

    int getY();
};


#endif //CS255_POINT_H
