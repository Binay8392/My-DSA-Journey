class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        int idx=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] !=x) idx=idx+1;
            else return idx;
        }
        return -1;
        
    }
};