// Lower Bound

#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            result = mid;
            right = mid - 1;
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 1, 2, 3, 4};
    int target = 25;

    int result = binarySearch(arr, target);

    cout << arr[result] << endl;
    return 0;
}
