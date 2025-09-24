class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // Your code here
        long long mx=LLONG_MIN;
        long long scmx=LLONG_MIN;
        long long  thdmx=LLONG_MIN;
        
        for(int i=0;i<arr.size();i++){
        
            
            if(arr[i]>mx){
                thdmx=scmx;
                scmx=mx;
                mx=arr[i];
            }
            else if(arr[i]>scmx){
                thdmx=scmx;
                scmx=arr[i];
            }
            else if(arr[i]>thdmx){
                thdmx=arr[i];
            }
        }
        
        if(thdmx==LLONG_MIN) return -1;
        return (int)thdmx;
    }
};