class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int countzero=0;
        int countone=0;
        int counttwo=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0) countzero++;
            else if(arr[i]==1)countone++;
            else counttwo++;
        }
        
        int k=0;
        
        while(countzero>0){ 
        arr[k]=0;
        k++;
        countzero--;
        }
        
        
         while(countone>0){ 
        arr[k]=1;
        k++;
        countone--;
        }
        
        
         while(counttwo>0){ 
        arr[k]=2;
        k++;
        counttwo--;
        }
    }
};
