class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
        int count=0;
        //Code here
        Node* curr=head;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }
        return count;
    }
};
  
