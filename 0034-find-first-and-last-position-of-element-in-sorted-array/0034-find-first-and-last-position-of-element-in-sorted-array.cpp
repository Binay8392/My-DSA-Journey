class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int fo = -1;
        int lo = -1;

        // Find first occurrence
        int f = 0;
        int l = nums.size() - 1;

        while (f <= l) {

            int mid = f + (l - f) / 2;

            if (nums[mid] == target) {
                fo = mid;
                l = mid - 1;       // continue searching LEFT
            }
            else if (nums[mid] > target) {
                l = mid - 1;
            }
            else {
                f = mid + 1;
            }
        }

        // Find last occurrence
        f = 0;
        l = nums.size() - 1;

        while (f <= l) {

            int mid = f + (l - f) / 2;

            if (nums[mid] == target) {
                lo = mid;
                f = mid + 1;       // continue searching RIGHT
            }
            else if (nums[mid] > target) {
                l = mid - 1;
            }
            else {
                f = mid + 1;
            }
        }

        return {fo, lo};
    }
};