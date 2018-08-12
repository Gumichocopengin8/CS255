/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 681 #15.6
 * 4/18/2018
 * c++ 17
 *
 * This program is for practicing StreamIO using cin.get(), cin.getline() etc.
 * There are 6 questions.
 *
 */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    // question a done
    int fours = 4444;
    cout << "a) Print integer 4444 left justified in a 13 digit field, surrounded by /" << endl;
    cout << "/" << left << setw(13) << fours << "/" << endl; // use setw and left

    // question b done
    const int SIZE_STATE = 11; // size of state
    char state[SIZE_STATE]; // need 11 because should care about null (EOS)
    char dummy[SIZE_STATE]; // this is a dummy in order not to skip next cin.get()
    cout << "b) Interactively input a 15 character string into a 10 character array 'state' and then print 'state'" << endl;
    cout << "Input: ";
    cin.getline(state, SIZE_STATE); // input
    for (;;) { // loop not to skip next cin.get()
        cin.getline(dummy, SIZE_STATE);
        if (cin.bad() || cin.eof())
            break;
        if (cin.fail())
            cin.clear(std::cin.rdstate() & ~ios_base::failbit);
        else
            break;
    }
    cout << state << endl; // output

    // question c done
    const int TWOH = 200;
    cout << "c) Print a variable containing 200 with and without sign on the same line" << endl;
    cout << internal << showpos << TWOH << ' ' << noshowpos << TWOH << endl; // use internal and showpos

    // question d done
    const int twoFive = 255;
    cout << "d) Print the decimal value 255 in hexadecimal form preceded by 0x" << endl;
    cout << showbase << hex << twoFive << endl; // use showbase and hex

    // question e done
    const int SIZE_CHAR = 11;
    char charArray[SIZE_CHAR]; // need 11 because should care about null (EOS)
    cout << "e) Interactively input characters until the character '.' is encountered into array 'charArray' of up to 10 characters" << endl;
    cout << "Input: ";
    cin.get(charArray, SIZE_CHAR, '.'); // input
    cout << charArray << endl; // output

    // question f done
    cout << "f) Print 1.235 in a 9 digit field with 2 decimal places and with leading zeroes" << endl;
    cout << right << setw(9) << setfill('0') << setprecision(3) <<1.235 << endl; // use right setw setfill. setprecision is for rounding
}
