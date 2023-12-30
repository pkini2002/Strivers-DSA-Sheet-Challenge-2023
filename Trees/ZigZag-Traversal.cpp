class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        // Maintain a vector of vector to store the final result
        vector<vector<int>>res;

        if(root==NULL){
            return res;
        }

        // Set the flag leftToRight to true initially
        bool leftToRight=true;

        // Maintain a queue datastructure 
        queue<TreeNode*>nodesQueue;

        // Initially push the root of binary tree
        nodesQueue.push(root);

        // Do the following actions until the queue is not empty
        while(!nodesQueue.empty()){
            // Find out the number of elements in queue = number of nodes in a level 
            int size=nodesQueue.size();
            // Initialize a vector of the size of that level of binary tree
            vector<int>row(size);

            // Iterate through each element of that level
            for(int i=0;i<size;i++){
                TreeNode* node=nodesQueue.front();
                nodesQueue.pop();

            // Check whether the node needs to be inserted in which fashion reverse / correct
                int index=(leftToRight) ? i : (size-1-i);

                row[index]=node->val;

                // if there is any node to the left push it into the queue
                if(node->left){
                    nodesQueue.push(node->left);
                }

                // if there is any node to the right push it into the queue
                if(node->right){
                    nodesQueue.push(node->right);
                }
            }
            
            // Reverse the flag for zigzag printing
            leftToRight=!leftToRight;

            // Finally push the row (level wise elements) into vector of vector
            res.push_back(row);
        }
        return res;
    }
};
