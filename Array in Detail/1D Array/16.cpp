// Linear & Binary Search

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function for Linear Search
int linearSearch(const vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); ++i)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Function for Binary Search
int binarySearch(const vector<int> &arr, int target)
{
    int left = 0;
    int right = arr.size() - 1;

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
    vector<int> arr = {12, 34, 23, 56, 78, 90, 10};
    int target = 56;                                

    // Linear Search
    int linearResult = linearSearch(arr, target);
    if (linearResult != -1)
    {
        cout << "Linear Search: Element " << target << " found at index " << linearResult << endl;
    }
    else
    {
        cout << "Linear Search: Element " << target << " not found." << endl;
    }

    // Binary Search (Array must be sorted for binary search)
    sort(arr.begin(), arr.end()); // Sorting the array for binary search
    int binaryResult = binarySearch(arr, target);
    if (binaryResult != -1)
    {
        cout << "Binary Search: Element " << target << " found at index " << binaryResult << endl;
    }
    else
    {
        cout << "Binary Search: Element " << target << " not found." << endl;
    }

    return 0;
}
