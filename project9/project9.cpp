/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 570 #12.8
 * 5/2/2018
 * c++ 17
 *
 * This program is for creating Quadrilateral, trapezoid,
 * parallelogram, rectangle, and square.
 * This is a main.
 *
 */

#include "Square.h"
#include "Point.h"
#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    int length1 = 0;
    int length2 = 0;
    char shape_char = ' ';
    char again = 'n';

    do {
        cout << "What shape would you like to create?";
        cout << "(p = parallelogram, q = quadrilateral, r = rectangle, s = square, or t = trapezoid)" << endl
             << "Ans-> ";
        cin >> shape_char;

        if (shape_char == 'p') { // parallelogram
            cout << "Enter first point (two integers): ";
            cin >> x >> y;
            Point p1(x, y);
            cout << "Enter second point (two integers): ";
            cin >> x >> y;
            Point p2(x, y);
            cout << "Enter length: ";
            cin >> length1;
            Parallelogram shape(p1, p2, length1);
            shape.print();
        } else if (shape_char == 'q') { // quadrilateral
            cout << "Enter first point (two integers): ";
            cin >> x >> y;
            Point p1(x, y);
            cout << "Enter second point (two integers): ";
            cin >> x >> y;
            Point p2(x, y);
            cout << "Enter third point (two integers): ";
            cin >> x >> y;
            Point p3(x, y);
            cout << "Enter forth point (two integers): ";
            cin >> x >> y;
            Point p4(x, y);
            Quadrilateral shape(p1, p2, p3, p4);
            shape.print();
        } else if (shape_char == 'r') { // rectangle
            cout << "Enter point (two integers): ";
            cin >> x >> y;
            Point p1(x, y);
            cout << "Enter length: ";
            cin >> length1;
            cout << "Enter height: ";
            cin >> length2;
            Rectangle shape(p1, length1, length2);
            shape.print();
        } else if (shape_char == 's') { // square
            cout << "Enter point (two integers): ";
            cin >> x >> y;
            Point p1(x, y);
            cout << "Enter length: ";
            cin >> length1;
            Square shape(p1, length1);
            shape.print();
        } else if (shape_char == 't') { // trapezoid
            cout << "Enter first point (two integers): ";
            cin >> x >> y;
            Point p1(x, y);
            cout << "Enter second point (two integers): ";
            cin >> x >> y;
            Point p2(x, y);
            cout << "Enter first length: ";
            cin >> length1;
            cout << "Enter second length: ";
            cin >> length2;
            Trapezoid shape(p1, p2, length1, length2);
            shape.print();
        } else{
            cout << "Invalid character" << endl;
        }
        cout << "Would you like to enter another shape? (y/n): "; // try again?
        cin >> again;
    }while (again == 'y');
}

