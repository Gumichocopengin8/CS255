//
// Keita Nonaka
//
// This is a header file for rational class
// This header is for declaring methods and variables.
//

#ifndef CS255_PROJECT6_H
#define CS255_PROJECT6_H

class Rational{

private:
    int numerator; // numerator
    int denominator; // denominator

    int gcd (int a, int b); // gcd method

public:
    Rational(); // constructor

    Rational(int a, int b); // constructor

    ~Rational();

    void add(Rational obj); // addition

    void sub(Rational obj); // subtraction

    void mul(Rational obj); // multiplication

    void div(Rational obj); // division

    void reciprocal(); // reciprocal

    void negate(); // negation

    void reduce(int& numer, int& denom);

    void finally(); // reduce

    void print(Rational obj);
};


#endif //CS255_PROJECT6_H
