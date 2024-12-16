class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = 0;
        int maxSum = INT_MIN;

        for (int num : nums) {
            // Either include the current number in the existing subarray or start a new subarray
            currentSum = max(num, currentSum + num);
            
            // Update the global maximum sum
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
