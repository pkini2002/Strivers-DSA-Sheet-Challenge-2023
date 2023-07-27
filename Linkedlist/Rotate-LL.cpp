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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }

        vector<int>v;
        vector<int>v1;

        ListNode* curr=head;
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }

        int n=v.size();
        k=k%n;

        for(int i=(n-k);i<n;i++){
            v1.push_back(v[i]);
        }

        for(int i=0;i<(n-k);i++){
            v1.push_back(v[i]);
        }

        ListNode* head1=new ListNode(v1[0]);
        ListNode* ptr=head1;

        for(int i=1;i<n;i++){
            ListNode* temp=new ListNode(v1[i]);
            ptr->next=temp;
            ptr=temp;
        }
        return head1;
    }
};
