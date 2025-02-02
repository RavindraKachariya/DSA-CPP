class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // O(n log n)
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                return nums[i]; // Found duplicate
            }
        }
        return -1; // Should never reach here
    }
};
