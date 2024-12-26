#include <iostream>
using namespace std;

int calculateSum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements of the array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = calculateSum(arr, n);

    cout << "The sum of the elements in the array is: " << sum << endl;

    return 0;
}
