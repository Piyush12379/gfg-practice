class Solution {
  public:
    int mostFreqEle(vector<int>& arr) {
        // code here
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
        }
        
        int maxi=0;
        int maxidx=arr[0];
        for(auto it:mp){
            
            if(it.second>=maxi){
                maxi=it.second;
                maxidx=it.first;
            }

        }
        return maxidx;
        
    }
};