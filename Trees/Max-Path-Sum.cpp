class Solution {
public:
    int maxPathSum(TreeNode* root) {
        // maxi stores max path sum
        int maxi=INT_MIN;
        // Function call to find max path sum
        maxPathDown(root,maxi);
        return maxi;
    }

    int maxPathDown(TreeNode* root,int &maxi){
        if(root==NULL){
            return 0;
        }

        // If a node return negative leftsum or rightsum then return 0 because negative sums will never return max path sum
        int left=max(0,maxPathDown(root->left,maxi));
        int right=max(0,maxPathDown(root->right,maxi));

        // max path sum of a node is its left sum + right sum + its current value
        maxi=max(maxi,left+right+root->val);

        // Return path with longest value (check whether left or right sum is maximum)
        return max(left,right)+root->val;
    }
};
