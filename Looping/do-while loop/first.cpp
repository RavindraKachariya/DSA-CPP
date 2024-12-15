#include <iostream>
using namespace std;

int main() {
    int number, factorial = 1;

    cout << "Enter a positive integer: ";
    cin >> number;

    do {
        factorial *= number;  
        number--;              
    } while (number > 0);

    cout << "The factorial is: " << factorial << endl;

    return 0;
}
