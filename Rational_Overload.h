//
// Keita Nonaka
//
// This is a header file for rational class
// This header is for declaring methods and variables.
//

#ifndef CS255_RATIONAL_OVERLOAD_H
#define CS255_RATIONAL_OVERLOAD_H


class Rational_Overload {

private:
    int numerator; // numerator
    int denominator; // denominator

    int gcd (int a, int b); // gcd method

public:
    Rational_Overload(); // constructor

    Rational_Overload(int a, int b); // constructor

    ~Rational_Overload();

    void add(Rational_Overload obj); // addition

    void sub(Rational_Overload obj); // subtraction

    void mul(Rational_Overload obj); // multiplication

    void div(Rational_Overload obj); // division

    Rational_Overload operator+(Rational_Overload obj); // overloading

    Rational_Overload operator-(Rational_Overload obj); // overloading

    Rational_Overload operator*(Rational_Overload obj); // overloading

    Rational_Overload operator/(Rational_Overload obj); // overloading

    Rational_Overload operator-(); // overloading

    Rational_Overload operator!(); // overloading

    bool operator<(Rational_Overload obj); // overloading

    bool operator<=(Rational_Overload obj); // overloading

    bool operator>(Rational_Overload obj); // overloading

    bool operator>=(Rational_Overload obj); // overloading

    bool operator==(Rational_Overload obj); // overloading

    bool operator!=(Rational_Overload obj); // overloading

    void reciprocal(); // reciprocal

    void negate(); // negation

    void reduce(int& numer, int& denom); // reduce

    int getNumer();

    int getDenom();

    void print(); // print fraction

    void  printFloat(); // print float value
};

#endif //CS255_RATIONAL_OVERLOAD_H
