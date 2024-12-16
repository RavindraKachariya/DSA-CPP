#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter any number: ";
    cin >> n;

    do
    {
        n /= 10;
        ++count;
    } while (n != 0);

    cout << "Total number of digits: " << count << endl;
    return 0;
}
