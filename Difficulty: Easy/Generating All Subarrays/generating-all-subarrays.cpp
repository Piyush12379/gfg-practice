// User function Template for C++
class Solution {
  public:
    vector<vector<int> > getSubArrays(vector<int>& arr) {
        // code here
        vector<vector<int>>v2;
        for(int i=0;i<arr.size();i++){
            for(int j=i;j<arr.size();j++){
                vector<int>v;
                for(int k=i;k<=j;k++){
                    v.push_back(arr[k]);
                }
                v2.push_back(v);
            }
        }
        return v2;
        
        
        
    }
};