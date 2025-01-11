// LeetCode 136.Single Number

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // n^n = 0 , n^0 = n

    int ans = 0;

    vector<int> nums = {1, 2, 1, 2, 3};

    for (int val : nums)
    {
        // ans = ans ^ val;
        ans ^= val;
    }

    cout << ans << endl;

    return 0;
}