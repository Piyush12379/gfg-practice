class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
      queue<int>res;
      stack<int>v;
      int n=q.size();
      
      if(k>n) return q;
      int i=0;
      while(i<k){
          v.push(q.front());
          q.pop();
          i++;
      }
      
      for(int i=0;i<n;i++){
          if(i<k){
              res.push(v.top());
              v.pop();
          }
          else{
              res.push(q.front());
              q.pop();
          }
      }
      
      return res;
      
      
      
      
    }
};