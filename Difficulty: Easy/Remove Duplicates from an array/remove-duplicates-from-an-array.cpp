class Solution {
  public:
    vector<int> remDuplicate(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end());
        arr.erase(unique(arr.begin(),arr.end()),arr.end());
        return arr;
    }
};