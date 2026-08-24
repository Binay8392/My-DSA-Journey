class Solution {
public:

    long long cost(vector<int>& positions) {
        long long ans = 0;

        for (int i = 0; i < positions.size(); i++) {
            int target = 2 * i;
            ans += abs(positions[i] - target);
        }

        return ans;
    }

    int minSwaps(vector<int>& nums) {

        vector<int> even, odd;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0)
                even.push_back(i);
            else
                odd.push_back(i);
        }

        // Cannot alternate
        if (abs((int)even.size() - (int)odd.size()) > 1)
            return -1;

        long long ans = LLONG_MAX;

        // Even starts
        if (even.size() >= odd.size()) {
            ans = min(ans, cost(even));
        }

        // Odd starts
        if (odd.size() >= even.size()) {
            ans = min(ans, cost(odd));
        }

        return ans;
    }
};