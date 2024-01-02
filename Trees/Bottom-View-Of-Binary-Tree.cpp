class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        // ans vector stores the bottom view of binary tree
        vector<int>ans;
        
        if(root==NULL){
            return ans;
        }
        
        map<int,int>mpp;
        queue<pair<Node *,int>>q;
        
        // Initially push the root node
        q.push({root,0});
        
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            
            Node *node=it.first;
            int level=it.second;
            
            // The value can be rewritten to get the bottom view
            // Unlike the top view where we have a check if(mpp.find(level)==mpp.end())
            mpp[level]=node->data;
            
            if(node->left!=NULL){
                q.push({node->left,level-1});
            }
            
            if(node->right!=NULL){
                q.push({node->right,level+1});
            }
        }
        
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
