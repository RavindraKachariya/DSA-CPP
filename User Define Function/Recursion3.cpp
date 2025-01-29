// Print Array

#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &arr, int i)
{
    if (i < 0)
    { // Base case
        return;
    }

    print(arr, i - 1);

    cout << arr[i] << " ";
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    print(arr, arr.size() - 1);

    return 0;
}
