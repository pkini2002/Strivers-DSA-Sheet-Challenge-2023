class Solution {
public:
    int solve(TreeNode* root,int &ans){
        if(root==NULL){
            return ans;
        }

        ans++;
        solve(root->left,ans);
        solve(root->right,ans);
        return ans;
    }

    int countNodes(TreeNode* root) {
        int ans=0;
        if(root==NULL){
            return 0;
        }
        
        solve(root,ans);
        return ans;
    }
};
