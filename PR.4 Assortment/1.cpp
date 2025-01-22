#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    cout << "Enter N : ";
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] : ";
        cin >> a[i];
    }

    cout << "Negative Numbers from the Array : ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << ", ";
        }
    }

    return 0;
}
