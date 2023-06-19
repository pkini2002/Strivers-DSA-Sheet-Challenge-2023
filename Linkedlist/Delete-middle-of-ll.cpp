// Deletes middle of linked list and returns head of the modified list
Node* deleteMid(Node* head)
{
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    
    Node* slow=head;
    Node* fast=head;
    Node* prev=NULL;
    
    while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    prev->next=slow->next;
    delete slow;
    return head;
}
