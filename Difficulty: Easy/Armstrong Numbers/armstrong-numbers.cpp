class Solution {
  public:
  int sum(int n)
  {
      int last=0;
        int lsum=0;
        int sum=0;
        
        
        while(n>0)
        {
            last=n%10;
            lsum=last*last*last;
            n=n/10;
            sum=sum+lsum;
        }
        return sum;
  }
    bool armstrongNumber(int n) {
        // code here
        if(n==sum(n)) return true;
        
    }
};