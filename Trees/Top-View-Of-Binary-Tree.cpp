/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        // Vector ans to store the answer
        vector<int>ans;
        map<int,int>mpp; // used to store the level and value for the top view
        
        queue<pair<Node *,int>>q; // Stores node value and level
        
        if(root==NULL){
            return ans;
        }
        
        // Initially push the root node into the queue
        q.push({root,0});
        
        // Do the following operations until the queue is empty
        while(!q.empty()){
            // Take the front element of the queue and pop it
            auto it=q.front();
            q.pop();
            
            // first element of queue of pair is the node value
            Node *node=it.first;
            // second element of queue of pair is the level
            int level=it.second;
            
            // If we are visiting the level for the first time then add it into the map
            // To store the top view
            if(mpp.find(level)==mpp.end()){
                mpp[level]=node->data;
            }
            
            if(node->left!=NULL){
                q.push({node->left,level-1});
            }
            
            if(node->right!=NULL){
                q.push({node->right,level+1});
            }
        }
        
        // Traverse the map and store the values into the vector ans
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
    }

};
