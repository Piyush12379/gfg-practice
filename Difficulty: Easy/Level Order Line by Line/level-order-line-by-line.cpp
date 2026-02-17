/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>>res;
        queue<Node*>q;
        if(root==NULL) return res;
        
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            vector<int>level;
            
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                level.push_back(temp->data);
                q.pop();
                
                if(temp->left) q.push(temp->left);
                if(temp->right)q.push(temp->right);
            }
            res.push_back(level);
        }
        return res;
        
    }
};