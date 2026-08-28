class Solution {
  public:
    int countFactors(int n) {
        // code here
        
        long count=2;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0) count++;
        }
        return count;
        }
};