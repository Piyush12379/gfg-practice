class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // code here
        int i=0;
        while(i+1<arr.size()){
            swap(arr[i],arr[i+1]);
            i=i+2;
        }
    
    }
};