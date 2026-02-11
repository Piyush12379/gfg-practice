/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
       data = x;
       next = NULL;
    }
};
*/

class Solution {
  public:
    bool isPalindrome(Node *head) {
        //  code here
        Node* slow= head;
        Node* fast=head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
             fast=fast->next;
        }
        Node* curr=slow;
        Node* prev=NULL;
        while(curr!=NULL){
            Node* next= curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        Node* first=head;
        Node* second=prev;
        
        while(second){
            if(first->data!=second->data) return false;
            first=first->next;
            second=second->next;
        }
        return true;
        
    }
};