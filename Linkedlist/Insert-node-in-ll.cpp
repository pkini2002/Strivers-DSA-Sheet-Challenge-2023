class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node *temp=new Node(x);
       if(head==NULL){
           head=temp;
           head->next=NULL;
       }
       else{
           temp->next=head;
           head=temp;
       }
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node *temp=new Node(x);
       if(head==NULL){
           head=temp;
           head->next=NULL;
       }
       else{
         Node *curr=head;
         Node *prev=NULL;
         
         while(curr!=NULL){
             prev=curr;
             curr=curr->next;
         }
         prev->next=temp;
         temp->next=NULL;
       }
       return head;
    }
};
