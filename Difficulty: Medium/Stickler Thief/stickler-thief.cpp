class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        if(n==1) return arr[0];
        if(n==2) return max(arr[0],arr[1]);
        vector<int>dp(n+1,-1);
        dp[0]=0;
        dp[1]=arr[0];
        dp[2]=arr[1];

        for(int i=3;i<=n;i++){
            dp[i]=arr[i-1]+max(dp[i-2],dp[i-3]);
        }
        
        return max(dp[n],dp[n-1]); 
         
         
    }
};