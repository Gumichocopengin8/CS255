//
// Keita Nonaka
//
// This is a header file for rational class
// This header is for declaring methods and variables.
//

#ifndef CS255_INTEGERSET_H
#define CS255_INTEGERSET_H

#include <vector>
using namespace std;

class IntegerSet {

private:
    vector<bool> integerSet;


public:
    IntegerSet(); // constructor

    ~IntegerSet(); // destructor

    void initializeVT(); // integer set, initialize 101 sets as false

    IntegerSet intersect (IntegerSet intset); // called by setC = setA.intersect(setB);

    IntegerSet unionize(IntegerSet intset); //similar.  Note 'union' is a C++ keyword

    IntegerSet complement(); //''

    IntegerSet difference(IntegerSet intset); //''

    bool subset(IntegerSet intset); // called by if(setA.subset(setB))

    bool isEmpty(); //similar

    bool isEqualTo(IntegerSet intset); //''

    void insertElement(int num);  // called by setA.insertElement(k)

    void deleteElement(int num); // similar

    void printSet(); // print
};

#endif //CS255_INTEGERSET_H
