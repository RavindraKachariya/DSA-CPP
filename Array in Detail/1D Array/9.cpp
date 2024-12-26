#include <iostream>
using namespace std;

int *twoSum(int nums[], int numsSize, int target)
{
    static int result[2];
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return nullptr;
}

int main()
{
    int nums[] = {2, 7, 11, 15};

    int target;
    cin >> target;

    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int *result = twoSum(nums, numsSize, target);

    if (result)
    {
        cout << result[0] << " " << result[1] << endl;
    }
    else
    {
        cout << "-1 -1" << endl;
    }

    return 0;
}
