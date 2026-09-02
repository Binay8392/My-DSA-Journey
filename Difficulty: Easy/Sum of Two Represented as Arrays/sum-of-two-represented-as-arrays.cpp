class Solution {
  public:
  void rev(vector<int>& arr)
  {
      int i=0;
      int j=arr.size()-1;
      while(i<j)
      {
          swap(arr[i],arr[j]);
          i++;
          j--;
      }
      
  }
    vector<int> addArrays(vector<int>& arr1, vector<int>& arr2) {
        // code here
        vector<int> ans;

        int i = arr1.size() - 1;
        int j = arr2.size() - 1;

        int carry = 0;

        // process digits from right to left
        while (i >= 0 || j >= 0 || carry != 0) {

            int sum = carry;

            // add digit from arr1
            if (i >= 0) {
                sum += arr1[i];
                i--;
            }

            // add digit from arr2
            if (j >= 0) {
                sum += arr2[j];
                j--;
            }

            // store current digit
            ans.push_back(sum % 10);

            // update carry
            carry = sum / 10;
        }

        // reverse to get correct order
        rev(ans);

        return ans;
        
    }
};