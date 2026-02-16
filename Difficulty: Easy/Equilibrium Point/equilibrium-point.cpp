class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int left=0;
        
        int total=0;
        for(int x:arr){
            total+=x;
        }
        
       for(int i=0;i<arr.size();i++){
           left+=arr[i];
           if(left==total-left+arr[i]) return i;
       }
       return -1;
    }
};