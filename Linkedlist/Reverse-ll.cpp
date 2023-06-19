class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* currptr=head;
        ListNode* prevptr=NULL;
        ListNode* nextptr;

        while(currptr!=NULL){
            nextptr=currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
        }
        return prevptr;
    }
};
