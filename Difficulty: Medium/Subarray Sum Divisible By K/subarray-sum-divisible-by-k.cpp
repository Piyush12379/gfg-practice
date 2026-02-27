class Solution {
  public:
    // Function to count the number of subarrays with a sum that is divisible by K
    int subCount(vector<int>& arr, int k) {
        // Your code goes here
     long long sum=0;
     long long count=0;
     unordered_map<int,int>mp;
     mp[0]=1;
     
     for(int i=0;i<arr.size();i++){
          sum+=arr[i];
          int rem=sum%k;
          if(rem<0) rem+=k;
          if(mp[rem]>0) count+=mp[rem];
          mp[rem]++;
     }
     
     return (int)count;
        
        
    }
};
