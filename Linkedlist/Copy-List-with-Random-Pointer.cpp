/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* curr=head;
        unordered_map<Node*,Node*>mpp;

        while(curr!=NULL){
            mpp[curr]=new Node(curr->val);
            curr=curr->next;
        }

        curr=head;

        while(curr!=NULL){
            Node *ans=mpp[curr];
            ans->next=mpp[curr->next];
            ans->random=mpp[curr->random];
            curr=curr->next;
        }
        return mpp[head];
    }
};
