#include <iostream>
using namespace std;

int main()
{
    int number, count = 0;

    cout << "Enter positive numbers (enter a negative number to stop): " << endl;

    while (true)
    {
        cin >> number;
        if (number < 0)
        {
            break;
        }
        count++;
    }

    cout << "You entered " << count << " positive numbers." << endl;

    return 0;
}
