class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int n=s.length();
     unordered_map<char,int>mp;
     int low=0;
     int maxi=-1;
     for(int right=0;right<n;right++){
         mp[s[right]]++;
         
         while(mp.size()>k){
             mp[s[low]]--;
              if(mp[s[low]]==0){
                  mp.erase(s[low]);
              }
             low++;
         }
         
         if(mp.size()==k) maxi=max(maxi,right-low+1);
         
     }
     return maxi;
     
     
    }
};