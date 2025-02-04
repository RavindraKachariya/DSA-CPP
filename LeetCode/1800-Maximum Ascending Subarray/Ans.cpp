class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = nums[0], currentSum = nums[0];

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];  // Continue summing ascending subarray
            } else {
                currentSum = nums[i];  // Start a new subarray
            }
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
