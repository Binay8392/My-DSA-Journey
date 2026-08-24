class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            int need=target-arr[i];
            if(m.find(need) !=m.end()) return true;
            m[arr[i]]=i;
        }
        
        return false;
    }
};