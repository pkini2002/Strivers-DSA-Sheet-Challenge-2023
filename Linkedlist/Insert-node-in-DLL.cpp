void addNode(Node *head, int pos, int data)
{
   // Your code here
   int count=0;
   Node *temp=new Node(data);
   
   Node *curr=head;
   while(curr!=NULL){
       if(count==pos){
           break;
       }
       else{
           count++;
           curr=curr->next;
       }
   }
   if(curr->next==NULL){
      curr->next=temp;
      temp->prev=curr;
   }
   else{
       temp->next=curr->next;
       curr->next->prev=temp;
       curr->next=temp;
       temp->prev=curr;
   }
}
