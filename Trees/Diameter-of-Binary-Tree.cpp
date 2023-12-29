class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter=0;
        solve(root,diameter);
        return diameter;
    }

    int solve(TreeNode* root,int &diameter){
        if(!root){
            return 0;
        }
        int lh=solve(root->left,diameter);
        int rh=solve(root->right,diameter);
        diameter=max(diameter,lh+rh);

        return 1+max(lh,rh);
    }
};
