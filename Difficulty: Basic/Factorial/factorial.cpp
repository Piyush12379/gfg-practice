class Solution {
  public:
    void fact(int n,int &sum){
        if(n<1){
            return;
        }
        sum=sum*n;
        fact(n-1,sum);
    }
  
    int factorial(int n) {
        // code here
        int sum=1;
        fact(n,sum);
        return sum;
    }
};