// User function template for C++

class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> matrix) {
        // code here
          int n=matrix.size();
        int sum=0;
        int sum1=0;
        for(int i=0;i<n;i++){
            sum+=matrix[i][i];
        
                sum1+=matrix[i][n-1-i];
            
        }
        return abs(sum1-sum);
    }
};