// Find a Peak Element

#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> arr, int t)
{
    int s = 0;
    int e = arr.size() - 1;
    int result = -1;

    while (s <= e)
    {
        int mid = int((s + e) / 2);
        if (arr[mid] < arr[0])
        {
            e = mid - 1;
        }
        else
        {
            result = mid;
            s = mid + 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 1, 2, 3, 4};
    int target = 40;

    int peak = findPeak(arr, target);

    cout << arr[peak] << endl;

    return 0;
}
