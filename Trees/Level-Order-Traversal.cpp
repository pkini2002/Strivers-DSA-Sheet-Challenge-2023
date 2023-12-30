class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>res;

        if(root==NULL){
            return res;
        }

        queue<TreeNode*>nodesQueue;
        nodesQueue.push(root);

        while(!nodesQueue.empty()){
            int size=nodesQueue.size();
            vector<int>row;

            for(int i=0;i<size;i++){
                TreeNode* node=nodesQueue.front();
                row.push_back(node->val);
                nodesQueue.pop();

                if(node->left){
                    nodesQueue.push(node->left);
                }
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            res.push_back(row);
        }
        return res;
    }
};
