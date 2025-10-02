class Solution {
  public:
    bool search(vector<int>& arr, int target) {
        // Code here
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(arr[mid]==target) return true;
            if(arr[mid]==arr[low] && arr[mid]==arr[high]){
                low++;
                high--;
            }
            else if(arr[mid]>=arr[low]){
                 if(target>=arr[low] && target<arr[mid]) high=mid-1;
                 else low=mid+1;
            }
            else{
                if(target>arr[mid] && target<=arr[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return false;
    }
};