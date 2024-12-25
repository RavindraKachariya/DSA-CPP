#include <iostream>
using namespace std;

int main()
{
    int i, n, max;
    cout << "Enter The Size Of Array : ";
    cin >> n;

    int arr[n];

    for (i = 0; i < n; i++)
    {
        cout << "Enter Array Value" << i << " : ";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++)
    {
        max = arr[0];

        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "The Max Value Is : ";
    cout << max << endl;

    return 0;
}