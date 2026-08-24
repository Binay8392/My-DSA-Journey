class Solution {
  public:
    bool checkDuplicates(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]==arr[j]) return true;
            }
        }
        return false;
    }
};
