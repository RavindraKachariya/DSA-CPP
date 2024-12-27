#include <iostream>
using namespace std;

bool ispairExists(int arr[], int n, int t)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (t == sum)
        {
            return true;
        }
        else if (sum > t)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int t;
    cin >> t;

    cout << ispairExists(arr, n, t) << endl;

    return 0;
}
