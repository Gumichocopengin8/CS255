/*
 * Keita Nonaka
 * CS255:01
 * 7th: pp 463-4 #10.8
 * 3/8/2018
 * c++ 17
 *
 * I created integer set class.
 * There are two cpp files and one header file.
 * These files are for calculating set such as {1, 5, 8, 10}.
 */

#include "IntegerSet.h"
#include <iostream>
using namespace std;

int main(){

    int num = 0;
    IntegerSet A;
    IntegerSet B;

    cout << endl << "-------------------------------- SET CREATION ---------------------------------" << endl; // creation
    cout << "Enter set A one element at a time" << endl << "The range of the set is 0 through 100 (inclusive)" << endl;
    cout << "Enter -1 when you are done entering set A" << endl; // insert elements to set A
    for(;;){ // infinite loop
        cout << "Enter an element: ";
        cin >> num;
        if(num == -1)
            break;
        else if(num >= 0 && num <= 100)
            A.insertElement(num);
    }
    cout << "element:" << endl << "Set A = { ";
    A.printSet();

    cout << "\nEnter -1 when you are done entering set B" << endl; // insert elements to set B
    for(;;){ // infinite loop
        cout << "Enter an element: ";
        cin >> num;
        if(num == -1)
            break;
        else if(num >= 0 && num <= 100)
            B.insertElement(num);
    }
    cout << "element:" << endl << "Set A = { ";
    B.printSet();

    cout << "---------------------------------- DELETION -----------------------------------" << endl; // deletion
    cout << "Enter any elements you want to delete from set A one at a time" << endl;
    cout << "Enter -1 when you are done deleting from set A" << endl; // delete elements of set A
    for(;;){ // infinite loop
        cout << "A = { ";
        A.printSet();
        cout << "Enter an element to delete: ";
        cin >> num;
        if(num == -1)
            break;
        else if(num >= 0 && num <= 100)
            A.deleteElement(num);
    }

    cout << "Enter any elements you want to delete from set B one at a time" << endl;
    cout << "Enter -1 when you are done deleting from set B" << endl; // delete elements of set B
    for(;;){ // infinite loop
        cout << "B = { ";
        B.printSet();
        cout << "Enter an element to delete: ";
        cin >> num;
        if(num == -1)
            break;
        else if(num >= 0 && num <= 100)
            B.deleteElement(num);
    }

    cout << "-------------------------------- DEMONSTRATION --------------------------------" << endl; // demonstration
    cout << "Set A = { ";
    A.printSet();
    cout << "Set B = { ";
    B.printSet();
    cout << "Intersection of A and B = { ";
    A.intersect(B).printSet(); // intersect
    cout << "Union of A and B = { ";
    A.unionize(B).printSet(); // union
    cout << "Complement of A and B = { ";
    A.unionize(B).complement().printSet(); // complement
    cout << "Difference of A and B = { ";
    A.difference(B).printSet(); // difference
    A.subset(B) ? cout << "A is a subset of B" << endl : cout << "A is not a subset of B" << endl;
    B.subset(A) ? cout << "B is a subset of A" << endl : cout << "B is not a subset of A" << endl;
    A.isEmpty() ? cout << "A is empty" << endl : cout << "A is not empty" << endl;
    B.isEmpty() ? cout << "B is empty" << endl : cout << "B is not empty" << endl;
    A.isEqualTo(B) ? cout << "A and B are equal" << endl : cout << "A and B are not equal" << endl;;
}
