// Leetcode - Remove nth node from back of ll

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr=head;
        int count=0;
        while(curr!=NULL){
            count++;
            curr=curr->next;
        }

        if(head ==NULL || head->next == NULL)
        {
            return NULL;
        }

        // delete 1st node of ll
        if(count-n==0){
           head=head->next;
           return head;
        }

        ListNode* prev=head;
        curr=head;
        for(int i=0;i<count-n;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete(curr);
        return head;
    }
};

// GFG : Return Nth node from back of LL

class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
           // Your code here
           Node *curr=head;
           int count=0;
           while(curr!=NULL){
               count++;
               curr=curr->next;
           }
        
        if(n>count){
            return -1;
        }
        curr=head;
        for(int i=0;i<(count-n);i++){
            curr=curr->next;
        }
        return curr->data;
    }
};
