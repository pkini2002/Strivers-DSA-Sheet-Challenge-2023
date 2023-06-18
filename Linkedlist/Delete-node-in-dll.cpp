class Solution
{
    public:
    Node* deleteNode(Node *head_ref, int x)
    {
      //Your code here
      Node *curr=head_ref;
      int count=1;
      
      while(curr!=NULL){
          if(count==x){
              // Deleting 1st node in DLL
              if(curr->prev==NULL){
                  head_ref=curr->next;
                  head_ref->prev=NULL;
              }
              // Deleting last node in DLL
              else if(curr->next==NULL){
                  curr->prev->next=NULL;
                  delete curr;
              }
              // Deleting intermediary nodes
              else{
                  curr->prev->next=curr->next;
                  curr->next->prev=curr->prev;
                  delete curr;
              }
          }
          count++;
          curr=curr->next;
      }
      return head_ref;
    }
};
