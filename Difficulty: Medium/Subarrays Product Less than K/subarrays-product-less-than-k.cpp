

class Solution {
  public:
    long long countSubArrayProductLessThanK(const vector<int>& arr, int n,long long k) {
        
                                                  if(k<=1) return 0;
                                                long long prod=1;
                                                int left=0;
                                                long long countsubarray=0;
                                                for(int right=0;right<n;right++){
                                                    prod*=arr[right];
                                                    
                                                    while(prod>=k){
                                                       prod=prod/arr[left];
                                                       left++;
                                                    }
                                                    
                                                    countsubarray+=right-left+1;
                                                    
                                                    
                                                    
                                                    
                                                }
                                                return   countsubarray;
                                                
                                                
                                                
    
                                                
                                            }
};