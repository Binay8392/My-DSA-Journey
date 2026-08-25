class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        // code here
        int lo=0;
        int hi=arr.size()-1;
        int mid=lo+(hi-lo)/2;
        while(lo<=hi){
            
        
        if(arr[mid]>k)
        {
            hi=mid-1;
        }
        else if(arr[mid]<k)
        {
            
            lo=mid+1;
        }
        else {
            return true;
        }
        
        mid=lo+(hi-lo)/2;
        }
        return false;
    }
};