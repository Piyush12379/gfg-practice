class Solution {
  public:
    int maxSumSubarray(vector<int>& arr) {
        // Code here
        int deleteone=0;
        int nodelete=arr[0];
        int n=arr.size();
        int ans=arr[0];
        for(int i=1;i<n;i++){
            int prevnodelete=nodelete;
            nodelete=max(nodelete+arr[i],arr[i]);
            deleteone=max(deleteone+arr[i],prevnodelete);
            ans=max({ans,nodelete,deleteone});
        } 
        return ans;
        
    }
};