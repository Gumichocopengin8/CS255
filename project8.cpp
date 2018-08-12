/*
 * Keita Nonaka
 * CS255:01
 * 7th: pp 519-520 #11.10
 * 3/29/2018
 * c++ 17
 *
 * I created a rational number class to calculate rational number with overloading.
 * There are two cpp files and one header file.
 */

#include "Rational_Overload.h"
#include <iostream>
using namespace std;

void printAll(Rational_Overload first, Rational_Overload second, Rational_Overload c, char sign){ // function
    first.print();
    cout << " " << sign << " ";
    second.print();
    cout << " = ";
    c.print();
    cout << " or ";
    c.printFloat();
    cout << endl;
}

void compare(Rational_Overload first, Rational_Overload second, char message[100]){
    first.print();
    cout << message;
    second.print();
    cout << endl;
}

int main(){

    int a = 0;
    int b = 0;
    char again = 'n';
    Rational_Overload c; // instantiate Rational object

    do {
        cout << "Enter the numerator of the first fraction: ";
        cin >> a;
        cout << "Enter the denominator of the first fraction: ";
        cin >> b;
        Rational_Overload first(a, b);  // instantiate Rational object
        cout << "First fraction: ";
        first.print();
        cout << " or ";
        first.printFloat();
        cout << "\nEnter the numerator of the second fraction: ";
        cin >> a;
        cout << "Enter the denominator of the second fraction: ";
        cin >> b;
        Rational_Overload second(a, b);  // instantiate Rational object
        cout << "Second fraction: ";
        second.print();
        cout << " or ";
        second.printFloat();
        cout << endl << endl;

        c = first + second;
        printAll(first, second, c, '+');
        c = first - second;
        printAll(first, second, c, '-');
        c = first * second;
        printAll(first, second, c, '*');
        c = first / second;
        printAll(first, second, c, '/');

        c = (first - second) / (second * first);
        cout << "(";
        first.print();
        cout << " - ";
        second.print();
        cout << ") / (";
        second.print();
        cout << " * ";
        first.print();
        cout << ") = ";
        c.print();
        cout << " or ";
        c.printFloat();
        cout << endl;

        if(first > second) // greater
            compare(first, second, " is greater than ");
        if(first >= second) // greater or equal
            compare(first, second, " is greater than or equal to ");
        if(first < second) // less
            compare(first, second, " is less than ");
        if(first <= second) // less or equal
            compare(first, second, " is less than or equal to ");
        if(first == second) // equal
            compare(first, second, " is equal to ");
        if(first != second) // not equal
            compare(first, second, " is not equal to ");

        first.print();
        cout << " negated is ";
        c = -first; // negation
        c.print();
        cout << endl;

        cout << "The reciprocal of ";
        second.print();
        cout << " is ";
        c = !second; // reciprocal
        c.print();

        cout << "\nEnter a y/n to test more fractions: ";
        cin >> again;
    }while(again == 'y'); // loop if again is 'y'
}
