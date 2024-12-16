#include <iostream>
using namespace std;

int main()
{
    int i, fd, ld, sum;
    cout << "Enter Any Num : ";
    cin >> i;

    ld = i % 10;

    while (i >= 10)
    {
        i /= 10;
    }

    fd = i;

    sum = ld + fd;

    cout << "The Sum Of First And Last Digit : " << sum;

    return 0;
}