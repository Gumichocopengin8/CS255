/*
 * Keita Nonaka
 * CS255:01
 * 7th: 276 #6.35
 * 1/26/2018
 * c++ 17
 *
 * This is a guessing game. You can guess a number between 1 and 1000.
 * I use time to get random number.
 */
#include <iostream>
using namespace std;

void guess(int random, int count){
    int input = 0;

    cout << "Guess a number between 1 and 1,000" << endl; // message
    cin >> input;
    count++;    // counting how many times attempt to guess
    if(input < random) {
        cout << "Your guess is less than the number" << endl; // message
        guess(random, count);   // recursive
    } else if(input > random) {
        cout << "Your guess is more than the number" << endl; // message
        guess(random, count);   // recursive
    } else if(input == random) {
        cout << "Your guess is right!" << endl; // Done
        if(count <= 10)
            cout << "Either you know the secret or you got lucky!" << "You guessed " << count << " times" << endl;
        else
            cout << "You should be able to do better!" << endl; // if count is more than 10
    }
}

int main(){
    char ans = 'N';
    srand((unsigned int)time( 0 )); // random

    do{
        int random =  rand() % 1000 + 1;  // random
        int count = 0; // initializing count
        guess(random, count);
        cout << "Would you like to play again? Y/N: ";  // ask try again?
        cin >> ans;
    }while(ans == 'Y' or ans == 'y'); // looping
}
