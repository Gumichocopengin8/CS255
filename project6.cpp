/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 427 #9.6
 * 3/6/2018
 * c++ 17
 *
 * I created a rational number class to calculate rational number.
 * There are two cpp files and one header file.
 */

#include "project6.h"
#include <iostream>
using namespace std;

int main(){

    int a = 0;
    int b = 0;
    char again = 'n';
    Rational c; // instantiate Rational object

    do {
        cout << "Enter a rational number separating the numerator and denominator with a space: ";
        cin >> a >> b;
        Rational first(a, b);  // instantiate Rational object
        cout << "Enter another rational number: ";
        cin >> a >> b;
        Rational second(a, b);  // instantiate Rational object

        c = first; // save first's value
        first.add(second); // addition
        first.print(second); // print the calculation
        first = c; // restore first
        first.sub(second); // subtraction
        first.print(second); // print the calculation
        first = c; // restore first
        first.mul(second); // multiplication
        first.print(second); // print the calculation
        first = c; // restore first
        first.div(second); // division
        first.print(second); // print the calculation

        cout << "Would you like to enter new rational numbers? (y/n): ";
        cin >> again;
    }while(again == 'y'); // loop if again is 'y'
}



