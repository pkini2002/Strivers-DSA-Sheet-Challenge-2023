class Solution {
public:
    ListNode* sortList(ListNode* head) {
       if(head==NULL || head->next==NULL){
           return head;
       }

       ListNode* curr=head;
       vector<int>ans;
       while(curr!=NULL){
          ans.push_back(curr->val);
          curr=curr->next;
       }

       sort(ans.begin(),ans.end());

       curr=head;

       for(int i=0;i<ans.size();i++){
           curr->val=ans[i];
           curr=curr->next;
       }
       return head;
    }
};
