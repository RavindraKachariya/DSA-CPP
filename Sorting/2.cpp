// Selection Sort

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
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Swaping The Index
        int tmp = arr[i];
        arr[i] = arr[min];
        arr[min] = tmp;
    }

    // Print sorted array
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
