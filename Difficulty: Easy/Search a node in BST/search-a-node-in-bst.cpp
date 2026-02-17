/*
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool search(Node* root, int key) {
        if(root==NULL) return false;
        // code here
        if(root->data==key){
            return true;
        }
        else if(root->data>key){
           return search(root->left,key);
        }
        else{
            return search(root->right,key);
        }
        return false;
    }
    
};