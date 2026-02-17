/*
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int>res;
        queue<Node*>q;
        if(root==NULL) return res;
        q.push(root);
        
        
        while(!q.empty()){
            Node* temp=q.front();
            res.push_back(temp->data);
            q.pop();
            
            if(temp->right) q.push(temp->right);
            if(temp->left) q.push(temp->left);
        }
        
        reverse(res.begin(),res.end());
        return res;
        
        
    }
};