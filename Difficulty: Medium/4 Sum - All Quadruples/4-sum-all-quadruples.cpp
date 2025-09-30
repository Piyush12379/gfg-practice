class Solution {
  public:
    vector<vector<int>> fourSum(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<vector<int>>v;
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 & arr[j]==arr[j-1]) continue;
                int k=j+1;
                int p=n-1;
                while(k<p){
                    long long sum = (long long) arr[i]+arr[j]+arr[k]+arr[p];
                    if(sum==target){
                    v.push_back({arr[i],arr[j],arr[k],arr[p]});
                    while(k<p && arr[k]==arr[k+1]) k++;
                    while(k<p && arr[p]==arr[p-1]) p--;
                    k++;
                    p--;
                    }
                    else if(sum>target){
                        p--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    
                }
            }
        }
        return v;
    }
};