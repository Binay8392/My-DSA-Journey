class Solution {
  public:
    void bubbleSort(vector<int>& arr) {
        // code here
        
        for(int i=1;i<arr.size();i++)
        {
            for(int f=0;f<arr.size()-i;f++)
            {
                
            
            if(arr[f]>arr[f+1])
            {
                swap(arr[f],arr[f+1]);
            }
            
            
            }
        }
    }
};