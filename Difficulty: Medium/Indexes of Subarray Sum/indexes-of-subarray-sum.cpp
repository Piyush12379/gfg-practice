class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int low=0;
        int sum=0;
        vector<int>v;
        
        for(int right=0;right<arr.size();right++){
            sum+=arr[right];
            
            while(low<right && sum>target){
                sum-=arr[low];
                low++;
            }
          
          if(sum==target){
              v.push_back(low+1);
              v.push_back(right+1);
              return v;
          }    
        
            
        }
        
        v.push_back(-1);
        return v;
        
        
        
    }
};