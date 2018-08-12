//
// Keita Nonaka
//
// This is Rational class, which calculate rational numbers.
// This class is for implementing methods.
//

#include "project6.h"
#include <iostream>
using namespace std;

int numeratorF = 0; // final numerator, global variable
int denominatorF = 0; // final denominator, global variable
char sign = '+'; // sign, global variable

Rational::Rational() { // constructor
    numerator = 0;
    denominator = 0; // doesnt matter if denominator is assigned 0
}

Rational::Rational(int a, int b) { // constructor
    int GCD = gcd(a, b);
    numerator = a / GCD;
    denominator = b / GCD;
    reduce(numerator, denominator);
}

Rational::~Rational() {
    numerator = 0;
    denominator = 0;
}

int Rational::gcd(int a, int b){ // gcd
    if(b == 0)
            return a;
    return gcd(b, a % b);
}

void Rational::add(Rational obj) { // addition
    numeratorF = numerator * obj.denominator + obj.numerator * denominator;
    denominatorF = denominator * obj.denominator;
    sign = '+';
}

void Rational::sub(Rational obj) { // subtraction
    obj.negate();
    this->add(obj);
    sign = '-';
}

void Rational::mul(Rational obj) { // multiplication
    numeratorF = numerator * obj.numerator;
    denominatorF = denominator * obj.denominator;
    sign = '*';
}

void Rational::div(Rational obj) { // division
    obj.reciprocal();
    this->mul(obj);
    sign = '/';
}

void Rational::reciprocal() { // reciprocal
    int numer = numerator;
    numerator = denominator;
    denominator = numer;
}

void Rational::negate() { // negation
    numerator = -numerator;
}

void Rational::reduce(int& numer, int& denom){
    if (denom < 0) {
        numer = -numer;
        denom = -denom;
    }
}

void Rational::finally() { // instead of reduce
    int GCD = gcd(numeratorF, denominatorF);
    numeratorF /= GCD;
    denominatorF /= GCD;
    reduce(numeratorF, denominatorF);
}

void Rational::print(Rational obj) {
    finally();
    cout << numerator << "/" << denominator << " " << sign << " " << obj.numerator << "/" << obj.denominator << " = ";
    cout << numeratorF << "/" << denominatorF << endl;
    cout << numerator / (float)denominator << " " << sign << " " << obj.numerator / (float)obj.denominator << " = ";
    cout << numeratorF / (float)denominatorF << endl;
}
