class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        int j=0;
        vector<int>v;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                if(v.empty() || v.back()!=a[i]) v.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i]>b[j]){
                j++;
            }
            else{
                i++;
            }
            
        }
        
        return v;
    }
};