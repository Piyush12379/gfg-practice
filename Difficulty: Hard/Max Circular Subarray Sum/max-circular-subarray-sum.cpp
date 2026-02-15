class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int currmax=0;
        int currmin=0;
        int total=0;
        int maxsum=arr[0];
        int minsum=arr[0];
        
        for(int i=0;i<arr.size();i++){
            total+=arr[i];
            
            currmax=max(currmax+arr[i],arr[i]);
            maxsum=max(maxsum,currmax);
            
            currmin=min(currmin+arr[i],arr[i]);
            minsum=min(minsum,currmin);
            
        }
        
        if(maxsum<0) return maxsum;
        
        return max(maxsum,total-minsum);
    }
};