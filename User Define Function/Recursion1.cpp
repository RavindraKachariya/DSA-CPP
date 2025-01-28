// Recursive function to calculate factorial

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1)
    { // Base case
        return 1;
    }
    else
    {
        return n * factorial(n - 1); // Recursive call
    }
}

int main()
{
    int num = 5;
    int result = factorial(num);
    cout << "Factorial of " << num << " is : " << result << endl;
    return 0;
}