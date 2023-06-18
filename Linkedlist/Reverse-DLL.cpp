Node* reverseDLL(Node * head)
{
    //Your code here
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;
    
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        currptr->prev=nextptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}
