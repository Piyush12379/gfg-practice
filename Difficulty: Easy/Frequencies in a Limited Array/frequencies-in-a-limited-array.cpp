class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        // code here
        vector<int>count(arr.size(),0);
        for(int i=0;i<arr.size();i++){
           count[arr[i]-1]++;    
        }
        return count;
        
    }
};
