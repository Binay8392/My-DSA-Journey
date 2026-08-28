class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum=0;
        while(n>0)
        {
            sum=sum+(n*n*n);
            n=n-1;
        }
        
        
        return sum;
    }
};