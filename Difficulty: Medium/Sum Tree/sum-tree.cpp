/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
  public:
   
   int sumleft(Node* root){
       if(root==NULL){
           return 0;
       }

       
      return root->data +sumleft(root->left)+ sumleft(root->right);
       
   }
  
  
  
  
    bool isSumTree(Node* root) {
        // Your code here
        if(root==NULL) return true;
        if(root->left==NULL && root->right==NULL) return true;
        
    
      int left=sumleft(root->left);
      int right=sumleft(root->right);
        
        
        if(left+right == root->data && isSumTree(root->left) && isSumTree(root->right)) return true;
        else return false;
    }
};