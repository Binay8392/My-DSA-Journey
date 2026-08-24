class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        if(nums.size()==1) return { };
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size()-1;i++)
        {
           if(nums[i]==nums[j])
           {
            ans.push_back(nums[i]);
            j++;
           }
           else j++;
        }
        return ans;
    }
};