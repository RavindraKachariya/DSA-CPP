// Climbing Stairs

#include <iostream>
using namespace std;

int stairs(int n)
{
    if (n == 1)
    { // Base case
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    return stairs(n - 1) + stairs(n - 2);
}

int main()
{
    int num;
    cin >> num;

    cout << stairs(num);
    
    return 0;
}