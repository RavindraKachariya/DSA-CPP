#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;

    do
    {
        cout << "Enter a number (enter 0 to stop): ";
        cin >> number;
        sum += number;
    } while (number != 0);

    cout << "The total sum is: " << sum << endl;

    return 0;
}
