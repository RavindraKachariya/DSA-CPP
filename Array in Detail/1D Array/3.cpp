#include <iostream>
using namespace std;

int main()
{
    int i, n;
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
        cout << "The Value of Array : ";
        cout << arr[i] << endl;
    }
    return 0;
}