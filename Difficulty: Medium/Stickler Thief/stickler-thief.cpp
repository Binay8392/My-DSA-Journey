class Solution {
public:
    int maxloot(vector<int>& arr, int idx, vector<int>& dp) {
        // Base case
        if (idx >= arr.size())
            return 0;

        // Already calculated
        if (dp[idx] != -1)
            return dp[idx];

        // Steal current house
        int steal = arr[idx] + maxloot(arr, idx + 2, dp);

        // Skip current house
        int skip = maxloot(arr, idx + 1, dp);

        return dp[idx] = max(steal, skip);
    }

    int findMaxSum(vector<int>& arr) {
        vector<int> dp(arr.size(), -1);

        return maxloot(arr, 0, dp);
    }
};