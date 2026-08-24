class Solution {
  public:
    void swapElements(vector<int> &arr) {
        // code here
        int j=2;
        for(int i=0;i<arr.size();i++)
        {
            if(j < arr.size()){
              swap(arr[i],arr[j]); 
              j++;
            }
            
        }
        
        
    }
};