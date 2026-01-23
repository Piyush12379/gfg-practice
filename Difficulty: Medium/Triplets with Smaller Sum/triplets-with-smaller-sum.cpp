class Solution {

  public:
    long long countTriplets(int n, long long sum, long long arr[]) {
         sort(arr,arr+n);
        // Your code goes here
            long long count=0;
        for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
               if((long long)arr[i]+arr[j]+arr[k]<sum){
                    count+=(k-j);
                    j++;
                }
                else  k--;
            }
            
        }
        return count;
        
    }
};