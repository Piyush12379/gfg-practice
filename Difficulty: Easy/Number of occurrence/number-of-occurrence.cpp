class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int first= lower_bound(arr.begin(),arr.end(),target)-arr.begin();
        int last= upper_bound(arr.begin(),arr.end(),target)-arr.begin();
        return last-first;
    }
};
