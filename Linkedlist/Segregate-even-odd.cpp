class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
       ListNode* curr=head;
       int count=1;
       vector<int>ans;
       while(curr!=NULL){
           if(count % 2==1){
               ans.push_back(curr->val);
           }
           count++;
           curr=curr->next;
       } 

       curr=head;
       count=1;
       while(curr!=NULL){
           if(count % 2==0){
               ans.push_back(curr->val);
           }
           count++;
           curr=curr->next;
       } 
     
       curr=head;
       for(int i=0;i<ans.size();i++){
           curr->val=ans[i];
           curr=curr->next;
       }
       return head;
    }
};
