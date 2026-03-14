class Solution {
  public:
  
    void printn(int i,int n){
        if(i<1) return;
        printn(i-1,n);
        cout<<i<<" ";
    }
  
    void printTillN(int n) {
        // code here
        int i=n;
        printn(i,n);
    }
};