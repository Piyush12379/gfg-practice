// User function Template for C++

class Solution {
  public:
    int smallestSumSubarray(vector<int>& a) {
        // Code here
        int mini=a[0];
        int ans=a[0];
        for(int i=1;i<a.size();i++){
            mini=min(mini+a[i],a[i]);
            ans=min(mini,ans);
        }
        return ans;
    }
};
