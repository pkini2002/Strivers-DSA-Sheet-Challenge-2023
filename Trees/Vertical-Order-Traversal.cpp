class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>todo;

        // Initially push the root node into the queue
        todo.push({root,{0,0}});

        // Do the following operation until the queue is empty
        while(!todo.empty()){
            //  queue<pair<TreeNode*,pair<int,int>>> datatype we dont know so we write as auto
            auto p=todo.front();
            todo.pop();

            // 1st value is the node value
            TreeNode* node=p.first;
            // second element is a pair in which the 1st element is vertical value
            int x=p.second.first;
            // second element of the pair is the level
            int y=p.second.second;

            nodes[x][y].insert(node->val);

            // if that node is having a left child (decr vertical by 1 and incr level by 1)
            if(node->left){
                todo.push({node->left,{x-1,y+1}});
            }
            // if that node is having a right child (incr vertical by 1 and level by 1)
            if(node->right){
                todo.push({node->right,{x+1,y+1}});
            }
        }

        // Maintain a vector of vector for storing the output
        vector<vector<int>>ans;
        for(auto p:nodes){
            vector<int>col;
            // Case for handling multiple nodes at the same level
            // Iterate through the vertical,level pair
            for(auto q:p.second){
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
