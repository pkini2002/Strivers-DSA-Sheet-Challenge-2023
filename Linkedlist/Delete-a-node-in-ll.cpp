Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(x==1){
        return head->next;
    }
    Node *curr=head;
    Node *prev=NULL;
    int count=1;
    while(curr!=NULL){
        if(count==x){
            break;
        }
        else{
            count++;
            prev=curr;
            curr=curr->next;
        }
    }
    prev->next=curr->next;
    delete curr;
    return head;
}
