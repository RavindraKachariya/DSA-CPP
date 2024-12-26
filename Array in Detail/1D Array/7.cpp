#include <iostream>
using namespace std;

int main()
{
    int i, arr[5] = {10, 8, 5, 9, 1};

    for (i = 0; i < 5 - 1; i++)
    {
        cout << abs(arr[i] - arr[i + 1]) << endl;
    }

    return 0;
}