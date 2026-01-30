// User function Template for C++

class Solution {
  public:
    int DiagonalSum(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][i];
        
                sum+=matrix[i][n-1-i];
            
        }
        return sum;
    }
};