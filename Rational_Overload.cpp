//
// Keita Nonaka
//
// This is Rational class, which calculate rational numbers with overloading.
// This class is for implementing methods.
//

#include "Rational_Overload.h"
#include <iostream>
using namespace std;

Rational_Overload::Rational_Overload() { // constructor
    numerator = 0;
    denominator = 0; // doesnt matter if denominator is assigned 0
}

Rational_Overload::Rational_Overload(int a, int b) {
    int GCD = gcd(a, b);
    numerator = a / GCD;
    denominator = b / GCD;
    reduce(numerator, denominator);
}

Rational_Overload::~Rational_Overload() {
    // nothing
}

int Rational_Overload::gcd(int a, int b){ // gcd
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

void Rational_Overload::add(Rational_Overload obj) { // addition
    numerator = numerator * obj.denominator + obj.numerator * denominator;
    denominator = denominator * obj.denominator;
    reduce(numerator, denominator);
}

void Rational_Overload::sub(Rational_Overload obj) { // subtraction
    obj.negate();
    this->add(obj);
}

void Rational_Overload::mul(Rational_Overload obj) { // multiplication
    numerator = numerator * obj.numerator;
    denominator = denominator * obj.denominator;
    reduce(numerator, denominator);
}

void Rational_Overload::div(Rational_Overload obj) { // division
    obj.reciprocal();
    this->mul(obj);
}

Rational_Overload Rational_Overload::operator+(Rational_Overload obj) { // addition
    Rational_Overload x = *this;
    x.add(obj);
    return x;
}

Rational_Overload Rational_Overload::operator-(Rational_Overload obj) { // subtraction
    Rational_Overload x = *this;
    x.sub(obj);
    return x;
}

Rational_Overload Rational_Overload::operator*(Rational_Overload obj) { // multiplication
    Rational_Overload x = *this;
    x.mul(obj);
    return x;
}

Rational_Overload Rational_Overload::operator/(Rational_Overload obj) { // division
    Rational_Overload x = *this;
    x.div(obj);
    return x;
}

Rational_Overload Rational_Overload::operator-() { // negation
    Rational_Overload x = *this;
    x.negate();
    return x;
}

Rational_Overload Rational_Overload::operator!() { // reciprocal
    Rational_Overload x = *this;
    x.reciprocal();
    return x;
}

bool Rational_Overload::operator<(Rational_Overload obj) { // less
    if(this->numerator * obj.denominator < this->denominator * obj.numerator)
        return true;
    return false;
}

bool Rational_Overload::operator<=(Rational_Overload obj) { // less or equal
    if(this->numerator * obj.denominator <= this->denominator * obj.numerator)
        return true;
    return false;
}

bool Rational_Overload::operator>(Rational_Overload obj) { // greater
    if(this->numerator * obj.denominator > this->denominator * obj.numerator)
        return true;
    return false;
}

bool Rational_Overload::operator>=(Rational_Overload obj) { // greater or equal
    if(this->numerator * obj.denominator >= this->denominator * obj.numerator)
        return true;
    return false;
}

bool Rational_Overload::operator==(Rational_Overload obj) { // equal
    if(this->numerator * obj.denominator == this->denominator * obj.numerator)
        return true;
    return false;
}

bool Rational_Overload::operator!=(Rational_Overload obj) { // not equal
    if(this->numerator * obj.denominator != this->denominator * obj.numerator)
        return true;
    return false;
}

void Rational_Overload::reciprocal() { // reciprocal
    int numer = numerator;
    numerator = denominator;
    denominator = numer;
    reduce(numerator, denominator);
}

void Rational_Overload::negate() { // negation
    numerator = -numerator;
}

void Rational_Overload::reduce(int& numer, int& denom){ // reduce
    int GCD = gcd(numer, denom);
    numer /= GCD;
    denom /= GCD;
    if (denom < 0) {
        numer = -numer;
        denom = -denom;
    }
}

int Rational_Overload::getNumer() {
    return numerator;
}

int Rational_Overload::getDenom() {
    return denominator;
}

void Rational_Overload::print() { // print fraction
    cout << numerator << "/" << denominator;
}

void Rational_Overload::printFloat() { // print float
    cout << numerator / (float)denominator;
}
