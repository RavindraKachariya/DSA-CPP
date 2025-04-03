// Print Fibonacci Series Up to a Given Number

#include <iostream>
using namespace std;

int main()
{
    int count;
    cout << "Enter the count : ";
    cin >> count;

    int a = 0, b = 1, nextTerm;
    cout << "Fibonacci series : " << a;

    for (int i = 1; i < count; i++)
    {
        cout << " , " << b;
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}