/*
Structure of the node of the binary tree is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
*/
class Solution {
  public:
    // function should return level of the target node
    int getLevel(struct Node *node, int target) {
        // code here
        
        queue<Node*>q;
        q.push(node);
        
        if(node->data==target) return 1;
        
        int count=1;
        
        while(!q.empty()){
            
            int n=q.size();
            
            for(int i=0;i<n;i++){
             Node* temp=q.front();
             if(temp->data== target) return count;
             q.pop();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            }
            count++;
          
            
        }
        return 0;
    }
};