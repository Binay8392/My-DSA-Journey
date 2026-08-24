class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int i=0;
        int j=arr.size()-1;
        int m=0;
        while(m<=j)
        {
            if(arr[m]==0) 
            {
                swap(arr[i],arr[m]);
                i++;
                m++;
                
                
            }
            else if(arr[m]==1)
            {
               m++;
            }
            else 
            {
                swap(arr[m],arr[j]);
                j--;
            }
        }
    }
};