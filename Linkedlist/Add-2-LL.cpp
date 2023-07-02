class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy node
        ListNode* dummy=new ListNode();
        // Create a ptr to dummy node
        ListNode* curr=dummy;

        int carry=0;
        while(l1!=NULL || l2!=NULL || carry){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }

            // Add if there is any carry generated
            sum+=carry;
            carry=sum/10;

            // Wrapping it to 0-9
            ListNode* node=new ListNode(sum%10);
            curr->next=node;
            curr=curr->next;
        }
        return dummy->next;
    }
};
