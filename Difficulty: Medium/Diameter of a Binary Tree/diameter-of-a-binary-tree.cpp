/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int height(Node* root){
        if(root==NULL) return 0;
        
        return 1+max(height(root->right),height(root->left));
        
    }
     
     
    int diameter(Node* root) {
        // code here
        if(root==NULL) return 0;
        
        int diameterleft=diameter(root->left);
        int diameterright=diameter(root->right);
        int diameterboth=height(root->left)+height(root->right);
        
        return max({diameterleft,diameterright,diameterboth});
    }
};