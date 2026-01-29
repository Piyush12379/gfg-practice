class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>prefix(n);
        prefix[0]=arr[0];
        for(int i=0;i<n;i++){
            prefix[i]=arr[i]+prefix[i-1];
        }
        
        for(int j=0;j<n;j++){
            if(2*prefix[j]==prefix[n-1]) return true;
        }
    return false;
    }
};
