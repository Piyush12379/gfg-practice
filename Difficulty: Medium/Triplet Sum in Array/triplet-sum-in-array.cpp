class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        
        for(int i=0;i<n-2;i++){
            int sum=0;
            if(i>0 && arr[i]==arr[i-1]) continue; 
            int j=i+1;
            int k= n-1;
            while(j<k){
                 sum=arr[j]+arr[i]+arr[k];
                if(sum==target){
                    return true;
                }
                else if(sum>target){
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                
            }
                 
        }
        return false;
        
        
    }
};