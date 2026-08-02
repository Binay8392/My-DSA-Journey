class Solution {
  public:
  int fact(int n)
  {
      if(n==1 || n==0)  return 1;
      return n*fact(n-1);
  }
    int isPerfect(int N) {
        // code here
        int d=0,sum=0;
        int temp=N;
        while(N>0){
            int temp=N;
            d=N%10;
            sum=sum+fact(d);
            N=N/10;
        }
        
         return (sum==temp) ? 1 :0 ;
        
    }
};