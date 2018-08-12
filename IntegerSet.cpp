//
// Keita Nonaka
//
// This is Rational class, which calculate rational numbers.
// This class is for implementing methods.
//


#include "IntegerSet.h"
#include <iostream>
using namespace std;

IntegerSet::IntegerSet() { // constructor
    initializeVT();
}

IntegerSet::~IntegerSet() { // destructor
    // nothing
}

void IntegerSet::initializeVT() { // integer set, initialize 101 sets as false
    for (int i = 0; i < 101; i++)
        integerSet.push_back(false);
}

IntegerSet IntegerSet::intersect(IntegerSet intset) { // intersect
    IntegerSet setC;
    for (int i = 0; i < 101; i++) {
        setC.integerSet[i] = this->integerSet[i] && intset.integerSet[i];
    }
    return setC;
}

IntegerSet IntegerSet::unionize(IntegerSet intset) { // union
    IntegerSet setC;
    for (int i = 0; i < 101; i++) {
        setC.integerSet[i] = this->integerSet[i] || intset.integerSet[i];
    }
    return setC;
}

IntegerSet IntegerSet::complement() { // complement
    for (int i = 0; i < 101; i++)
        integerSet[i] = !integerSet[i];
    return *this;
}

IntegerSet IntegerSet::difference(IntegerSet intset) { // difference
    IntegerSet setC = this->intersect(intset);
    IntegerSet setD;
    setC = setD.unionize(setC).complement();
    setC = this->intersect(setC);
    return setC;
}

bool IntegerSet::subset(IntegerSet intset) { // subset
    IntegerSet setC = this->intersect(intset);
    return this->isEqualTo(setC);
}

bool IntegerSet::isEmpty() { // empty or not
    vector<bool>::iterator itr = integerSet.begin(); // iterator
    itr = find(itr, integerSet.end(), true);
    return itr == integerSet.end();
}

bool IntegerSet::isEqualTo(IntegerSet intset) { // is equal to
    return this->integerSet == intset.integerSet;
}

void IntegerSet::insertElement(int num) { // insert element to vector
    integerSet[num] = true;
}

void IntegerSet::deleteElement(int num) { // delete element of set
    integerSet[num] = false;
}

void IntegerSet::printSet() { // print element of set
    vector<bool>::iterator itr = integerSet.begin(); // iterator
    itr = find(itr, integerSet.end(), true);
    while(itr != integerSet.end())  {
        cout << itr - integerSet.begin() << " ";
        ++itr;
        itr = find(itr, integerSet.end(), true);
    }
    cout << "}" << endl;
}

