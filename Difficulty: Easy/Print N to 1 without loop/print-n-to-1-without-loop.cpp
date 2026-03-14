class Solution {
  public:
   void printn(int i,int n){
       if(i>n)return;
       printn(i+1,n);
       cout<<i<<" ";
   }
  
  
    void printNos(int N) {
        // code here
        // int i=n;
        printn(1,N);
    }
};