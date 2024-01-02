struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */

// Should return  right view of tree
class Solution
{
    public:
    void solve(Node *root,int level,vector<int>&ans){
        if(root==NULL){
            return;
        }
        
        if(level==ans.size()){
            ans.push_back(root->data);
        }
        solve(root->right,level+1,ans);
        solve(root->left,level+1,ans);
    }
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
       solve(root,0,ans);
       return ans;
    }
};
