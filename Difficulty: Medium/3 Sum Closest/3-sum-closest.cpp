class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        // code here
       int n=arr.size();
       sort(arr.begin(),arr.end());
       int currsum=0;
       int maxsum=0;
       int maxdiff=INT_MAX;
       for(int i=0;i<n-2;i++){
           int j=i+1;
           int k=n-1;
           while(j<k){
                int diff=abs(target - (arr[i]+arr[j]+arr[k]));
                if(diff<maxdiff){
                    maxdiff=diff;
                    currsum=arr[i]+arr[j]+arr[k];
                }
                else if(maxdiff ==diff){
                    currsum=max(arr[i]+arr[j]+arr[k],currsum);
            
                }
               
               if(arr[i]+arr[j]+arr[k]==target){
                   j++;
                   k--;
                   
               }
               else if(arr[i]+arr[j]+arr[k]>target){
                    k--;
               }
               else{
                   j++;
               }
                    
           }
       }
       
       return currsum;
       
        
        
    }
};