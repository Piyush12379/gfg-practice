
class Solution {
  public:
    // Function to count the number of ways in which frog can reach the top.
    int countWays(int n) {

        // your code here
        if(n<3) return n;
        vector<int>dp(n+1,-1);
        dp[1]=1;
        dp[2]=2;
        dp[3]=4;
        for(int i=4;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        }
        return dp[n];
        
    }
};
