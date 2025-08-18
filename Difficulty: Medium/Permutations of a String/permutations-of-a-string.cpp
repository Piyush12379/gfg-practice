class Solution {
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        sort(s.begin(),s.end());
        vector<string>v;
        v.push_back(s);
        bool hasnext=next_permutation(s.begin(),s.end());
        while(hasnext){
            v.push_back(s);
            hasnext=next_permutation(s.begin(),s.end());
        }
        return v;
    }
};
