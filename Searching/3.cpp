// Find a Peak Element in a Rotated Sorted Array and Search for a Target

#include <iostream>
#include <vector>
using namespace std;

// Function to find the peak element (highest value)
int findPeak(const vector<int> &arr)
{
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] > arr[mid + 1])
        {
            e = mid;
        }
        else
        {
            s = mid + 1;
        }
    }
    return s;
}

// Function for Binary Search
int binarySearch(const vector<int> &arr, int target, int left, int right)
{
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
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 1, 2, 3, 4};
    int target = 40;

    int peak = findPeak(arr);

    int index = binarySearch(arr, target, 0, peak);
    if (index == -1)
    {
        index = binarySearch(arr, target, peak + 1, arr.size() - 1);
    }

    cout << "Index of target : " << index << endl;

    return 0;
}
