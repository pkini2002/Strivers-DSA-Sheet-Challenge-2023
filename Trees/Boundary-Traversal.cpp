class Solution {
public:
    bool isLeaf(Node *root){
        return (!root->left && !root->right);
    }
    
    void addLeftBoundary(Node *root,vector<int>&res){
        Node *curr=root->left;
        
        while(curr){
            if(!isLeaf(curr)){
                res.push_back(curr->data);
            }
            
            if(curr->left){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
    
    void addLeaves(Node *root,vector<int>&res){
        // if the node is a leaf node then push it into the vector
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        
        if(root->left){
            addLeaves(root->left,res);
        }
        if(root->right){
            addLeaves(root->right,res);
        }
    }
    
    void addRightBoundary(Node *root,vector<int>&res){
        Node *curr=root->right;
        vector<int>temp;
        
        while(curr){
            if(!isLeaf(curr)){
                temp.push_back(curr->data);
            }
            
            // First traverse right nodes then if it doesnt have right node then go to left
            // Because when we ultimately reverse the vector
            // It prints left node first and then right node acc to anticlockwise boundary traversal
            if(curr->right){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
        }
        
        // to insert it in anticlockwise fashion we need to reverse the elements of temp vector
        for(int i=temp.size()-1;i>=0;i--){
            res.push_back(temp[i]);
        }
    }
    
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>res;
        
        if(root==NULL){
            return res;
        }
        
        // If the root node is not a leaf node then push it into the vector
        if(!isLeaf(root)){
            res.push_back(root->data);
        }
        
        // Add left boundary nodes
        addLeftBoundary(root,res);
        
        // add leaf nodes
        addLeaves(root,res);
        
        // add right boundary nodes
        addRightBoundary(root,res);
        
        return res;
    }
};
