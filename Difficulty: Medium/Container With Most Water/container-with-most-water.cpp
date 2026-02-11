class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        if(n<=1) return 0;
        int i=0;
        int j=n-1;
        int mini=INT_MAX;
        int maxarea=INT_MIN;
        while(i<j){
            mini=min(arr[i],arr[j]);
            maxarea=max(maxarea,mini*(j-i));
            (mini==arr[i])?i++:j--;
        }
        return maxarea;
    }
};