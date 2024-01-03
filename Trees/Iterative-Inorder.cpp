/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode *>st;
        TreeNode* node=root;
        vector<int>inorder;

        while(true){
            // Until the left node is null go to the left and push it into the stack
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }
            else{
                if(st.empty()==true){
                    break;
                }


                // If there is no node to the left / right then pop the element
                node=st.top();
                st.pop();

                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
    }
};
