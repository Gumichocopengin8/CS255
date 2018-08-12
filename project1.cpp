/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 65 #2.19, Chapter 2
 * 1/22/2018
 */
#include <iostream>
using namespace std;

int main() {
    int num[3];     // Array
    int sum = 0;    // sum

    cout << "Input three different integers, please." << endl;  // Output
    for(int i = 0; i < 3; i++){     // Looping to get integers.
        cout << "Enter an Integer: ";   // Output
        cin >> num[i];      // Input an integer.
        sum += num[i];      // Calculate sum.
    }
    cout << "Sum is " << sum << endl;   // Output Sum.
    cout << "Average is " << sum / 3.0 << endl;     // Divide sum by 3.0. <- 3.0 is for double.
    cout << "Product is " << num[0] * num[1] * num[2] << endl;  // Multiplying.
    cout << "Smallest is " << min(min(num[0], num[1]), num[2]) << endl;     // Use min function.
    cout << "Largest is " << max(max(num[0], num[1]), num[2]) << endl;      // Use max function.
    return 0;
}
