/*
 * Keita Nonaka
 * CS255:01
 * 7th: pp 383-384 #8.8 a-j
 * 2/21/2018
 * c++ 17
 *
 * Write a main program to demonstrate each of these ten pointer manipulation actions.
 * Annotate each of these steps separately, both in comments and in the output.
 * Explain/annotate what the numbers are!  Each demo may build on the previous step.
 * The assumption that the array address is at 1002500 can be ignored.
 * Just use whatever the computer gives you in this case.
 */

#include <iostream>
using namespace std;

int main(){
    // a
    unsigned int value[5] = {2, 4, 6, 8, 10};
    const int SIZE = 5;

    // b
    unsigned int *vPtr;

    // c
    cout << "Initiation Array Declaration" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << value[i] << endl;
    }
    cout << endl;

    // d
    vPtr = value;
    vPtr = &value[0];

    // e
    cout << "Pointer/offset Notation using pointer name" << endl;
    for(int i = 0; i < SIZE; i++){
        cout << *(vPtr + i) << endl;
    }
    cout << endl;

    // f
    cout << "Pointer/offset Notation using array name" <<  endl;
    for(int i = 0; i < SIZE; i++){
        cout << *(value + i) << endl;
    }
    cout << endl;

    // g
    cout << "Display array with subscripting the pointer" << endl;
    vPtr = value;
    for(int i = 0; i < SIZE; i++){
        cout << vPtr[i] << endl;
    }
    cout << endl;


    // h
    cout << "Array Subscript: " << value[4] << endl;
    cout << "Pointer Notation with Array name: " << *(value + 4) << endl;
    cout << "Pointer Subscript Notation: " << vPtr[4] << endl;
    cout << "Pointer Notation: " << *(vPtr + 4)  << endl;
    cout << endl;

    // i
    cout << "Address referenced by vPtr + 3: " << (vPtr + 3) << endl;
    cout << *(vPtr + 3) << " is found at " << (vPtr + 3) << endl;
    cout << endl;

    // j
    vPtr = &value[4];
    cout << "the address which is referenced by vPtr -= 4 is " << (vPtr - 4) << endl;
    cout << *(vPtr - 4) << " is the value of vPtr-=4 after reassigning the pointer." << endl;
    cout << endl;
}