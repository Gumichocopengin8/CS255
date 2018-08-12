/*
 * Keita Nonaka
 * CS255:01
 * 5/1/2018
 * c++ 17
 *
 * I created a rational number class to calculate rational number with overloading.
 * If divided by 0, throw exception.
 */

#include "Rational_Overload.h"
#include <iostream>
using namespace std;

void printAll(Rational_Overload c, char sign){ // function
    if(!(c.getNumer() == 0 && sign == '/')) {
        c.print();
        cout << " or ";
        c.printFloat();
        cout << endl;
    }
}

void compare(Rational_Overload first, Rational_Overload second, string msg){
    first.print();
    cout << msg;
    second.print();
    cout << endl;
}

int main(){

    int a = 0;
    int b = 0;
    char again = 'n';
    Rational_Overload c; // instantiate Rational object

    do {
        cout << "Enter information for Rational a" << endl;
        cout << "Enter numerator: ";
        cin >> a;
        do {
            try { // try catch
                cout << "Enter denominator: ";
                cin >> b;
                if (b == 0)
                    throw invalid_argument("Cannot set denominator to be 0. Please try again");
            } catch(exception& e) {
                cout << e.what() << endl;
            }
        }while(b == 0);
        Rational_Overload first(a, b);  // instantiate Rational object

        cout << "Enter information for Rational b" << endl;
        cout << "Enter numerator: ";
        cin >> a;
        do{
            try{
                cout << "Enter denominator: ";
                cin >> b;
                if (b == 0)
                    throw invalid_argument("Cannot set denominator to be 0. Please try again");
            }catch (exception& e){
                cout << e.what() << endl;
            }
        }while (b == 0);
        Rational_Overload second(a, b);  // instantiate Rational object
        cout << endl;

        cout << "a is ";
        first.print();
        cout << endl;
        cout << "b is ";
        second.print();
        cout << endl << endl;

        cout << "a+b is: ";
        c = first + second;
        printAll(c, '+');
        cout << "a-b is: ";
        c = first - second;
        printAll(c, '-');
        cout << "a*b is: ";
        c = first * second;
        printAll(c, '*');

        cout << "a/b is: ";
        try {
            if(second.getNumer() == 0)
                throw overflow_error("Division results in denominator of 0.");
            c = first / second;
            printAll(c, '/');
        }catch (exception& e){
            cout << e.what() << endl;
        }

        cout << "(a+b)/(a-b) is: ";
        try{
            if((first - second).getNumer() == 0)
                throw overflow_error("Operation results in denominator of 0.");
            c = (first + second) / (first - second);
            c.print();
            cout << " or ";
            c.printFloat();
            cout << endl;
        }catch (exception& e){
            cout << e.what() << endl;
        }


        cout << "-a is: ";
        c = -first; // negation
        c.print();
        cout << " or ";
        c.printFloat();
        cout << endl;

        cout << "!b (reciprocal of b) is: ";
        try{
            if (c.getNumer() == 0)
                throw overflow_error("Operation results in denominator of 0.");
            c = !second; // reciprocal
            c.print();
            cout << " or ";
            c.printFloat();
        }catch(exception& e) {
            cout << e.what() << endl;
        }


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

        cout << "\nEnter a y/n to test more fractions: ";
        cin >> again;
    }while(again == 'y'); // loop if again is 'y'
}
