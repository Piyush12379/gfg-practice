class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int>v;
        int n=arr.size();
        int first=-1;
        int last=-1;
        
        
        for(int i=0;i<n;i++){
            if(arr[i]==x ){
                first=i;
                break;
            }
        }
        
        v.push_back(first);
        last=first;
        for(int i=first+1;i<n;i++){
            if(arr[i]==x){
                last=i;
            }
        }
        
        v.push_back(last);
        return v;
        
    }
};