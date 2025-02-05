// Bubble Sort

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
