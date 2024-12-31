#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter N : ";
    cin >> n;

    int arr[n], i;

    for (i = 0; i < n; i++)
    {
        cout << "Arr" << " " << i << " ";
        cin >> arr[i];
    }

    cout << "Negative Number From An Array : ";

    for (i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i];
        }
    }

    return 0;
}