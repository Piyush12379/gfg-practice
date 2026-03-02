// User function Template for C++

class Solution {
  public:
    // Function to check if we can reach the last index from 0th index.
    bool canReach(vector<int> &arr) {
        // code here
        int maxreach=0;
        
        for(int i=0;i<arr.size();i++){
            if(i>maxreach) return false;
            maxreach=max(maxreach,arr[i]+i);
        }
    
    return true;    
    }
    
};