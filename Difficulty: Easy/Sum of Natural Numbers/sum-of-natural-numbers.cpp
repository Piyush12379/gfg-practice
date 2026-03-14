class Solution {
  public:
  void count(int &sum,int n){
        if(n<1) return;
        sum=sum+n;
        count(sum,n-1);    
  }
  
    int sumOfNaturals(int n) {
        // code here
        int sum=0;
        count(sum,n);
        return sum;
    }
};