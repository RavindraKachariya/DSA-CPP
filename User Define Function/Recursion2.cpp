// Fibonacci Series

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    { // Base case
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << fibonacci(i) << " ";
    }

    return 0;
}