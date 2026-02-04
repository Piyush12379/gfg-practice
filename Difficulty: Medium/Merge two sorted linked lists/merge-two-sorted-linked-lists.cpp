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
  
    void InsertAtBegin(Node* &head,int val){
        Node* newnode=new Node(val);
        newnode->next=head;
        head=newnode;
        return;
    }
    
    Node* reversi(Node* &head){
        Node* curr=head;
        Node* prev=NULL;
        Node* nextnode;
        
        while(curr!=NULL){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
        }
        head=prev;
        return head;
    }
  
  
  
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        
        Node* head3=NULL;
        
        while(head1!=NULL && head2!=NULL){
            if(head1->data<head2->data){
                InsertAtBegin(head3,head1->data);
                head1=head1->next;
            }
            else{
                InsertAtBegin(head3,head2->data);
                head2=head2->next;
            }
        }
        
        while(head1!=NULL){
            InsertAtBegin(head3,head1->data);
            head1=head1->next;
        }
        
        while(head2!=NULL){
            InsertAtBegin(head3,head2->data);
            head2=head2->next;
        }
        
        return reversi(head3);
    }
};