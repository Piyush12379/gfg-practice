class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
         vector<int>v;
         sort(arr.begin(),arr.end());
         for(int i=1;i<arr.size();i++){
             if(arr[i]==arr[i-1]){
                 v.push_back(arr[i]);
             }
         }
         return v;
    }
};