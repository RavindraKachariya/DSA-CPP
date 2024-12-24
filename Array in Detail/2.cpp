#include <iostream>
using namespace std;

int main()
{
    int i, arr[5];

    for (i = 0; i < 5; i++)
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