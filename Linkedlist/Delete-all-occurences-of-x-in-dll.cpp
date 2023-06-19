class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
        // Write your code here
        // To remove 1st ele of ll if its equal to x
        while((*head_ref)!=NULL){
            if((*head_ref)->data==x){
                *head_ref=(*head_ref)->next;
                continue;
            }
            else{
                break;
            }
        }
        
        struct Node* temp=*head_ref;
        while(temp!=NULL){
            if(temp->data==x){
                temp->prev->next=temp->next;
                // temp->next->prev=temp->prev;
                if(temp->next!=NULL){
                      temp->next->prev=temp->prev;
                 }
            }
            
            temp=temp->next;
        }
    }
};
