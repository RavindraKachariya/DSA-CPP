#include <iostream>
using namespace std;

int main()
{
    int i, n, min;
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
        min = arr[0];

        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    cout << "The Min Value Is : ";
    cout << min << endl;

    return 0;
}