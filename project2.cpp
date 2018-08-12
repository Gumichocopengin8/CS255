/*
 * Keita Nonaka
 * CS255:01
 * 7th: p 204 #5.14
 * 1/25/2018
 * c++ 17
 *
 * This is Calculating Total Sales. According to the Textbook, I need to use switch.
 * I also use an array to store the product price.
 */
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double product[5] = {2.98, 4.50, 9.98, 4.49, 6.87};   // constant
    int num_product[5] = {0}; // Initialization. Assign 0 into array
    int code = 0;   // code of product. This can be 1, 2, 3, 4, 5
    int quantity = 0;   // the number of product
    double total = 0.0; // total price

    cout << fixed; // for setprecision
    while (true) {  // infinite loop
        cout << "Enter the product code (1-5, 0 to stop): ";
        cin >> code;
        if(!(code >= 1 and code <= 5))  // not 1 <= code <= 5, end loop
            break;
        cout << "Quantity? ";
        cin >> quantity;
        cout << setprecision(2) << "Retail price for P" << code;
        switch (code){
            case 1:
                cout <<  " = $" << 2.98 * quantity << endl;
                break;
            case 2:
                cout <<  " = $" << 4.50 * quantity << endl;
                break;
            case 3:
                cout <<  " = $" << 9.98 * quantity << endl;
                break;
            case 4:
                cout <<  " = $" << 4.49 * quantity << endl;
                break;
            case 5:
                cout <<  " = $" << 6.87 * quantity << endl;
                break;
        }
        total += product[code - 1] * quantity;
        num_product[code - 1] += quantity;
    }

    cout << "Product Quantities" << endl;
    for(auto i = 0; i < sizeof(num_product) / sizeof(int); i++){
        cout << "   " << i + 1 << "    " << num_product[i] << endl;
    }
    cout << setprecision(2) << "Total sales = $" << total << endl;
}
/*
Enter the product code (1-5, 0 to stop): 2
Quantity? 12
Retail price for P2 = $54.00
Enter the product code (1-5, 0 to stop): 3
Quantity? 10
Retail price for P3 = $99.80
Enter the product code (1-5, 0 to stop): 4
Quantity? 43
Retail price for P4 = $193.07
Enter the product code (1-5, 0 to stop): 1
Quantity? 10
Retail price for P1 = $29.80
Enter the product code (1-5, 0 to stop): 0
Product Quantities
   1    10
   2    12
   3    10
   4    43
   5    0
Total sales = $376.67

 */