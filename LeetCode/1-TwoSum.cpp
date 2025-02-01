class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> indexedNums;

        // Store value and original index
        for (int i = 0; i < nums.size(); i++)
        {
            indexedNums.push_back({nums[i], i});
        }

        // Sort based on values
        sort(indexedNums.begin(), indexedNums.end());

        int left = 0, right = nums.size() - 1;

        while (left < right)
        {
            int sum = indexedNums[left].first + indexedNums[right].first;

            if (sum == target)
            {
                return {indexedNums[left].second, indexedNums[right].second}; // Return original indices
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return {}; // No valid pair found
    }
};
