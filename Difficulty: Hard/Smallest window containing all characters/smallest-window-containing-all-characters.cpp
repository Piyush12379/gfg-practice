class Solution {
  public:
  
    bool sahi(unordered_map<char,int>&have,unordered_map<char,int>&required){
          
          for(auto it: required){
              if(it.second>have[it.first]){
                  return false;
              }
          }
          return true;
        
    }
  
  
  
  
  
  
    string smallestWindow(string &s, string &p) {
        
        // code here
        unordered_map<char,int>required;
        unordered_map<char,int>have;
        
        for(char c: p){
            required[c]++;      
        }
        
       int minlen=INT_MAX;
       int n=s.size();
       int start=0;
       int left=0;
       
       for(int right=0;right<n;right++){
              have[s[right]]++;
              
              while(sahi(have,required)){
                  int len=right-left+1;
                  if(len<minlen){
                   minlen=len;
                   start=left;
                  }
                  have[s[left]]--;
                  left++;
                
              }    
            
            
        }
        return (minlen==INT_MAX)?"":s.substr(start,minlen);
        
        
        
        
    }
};