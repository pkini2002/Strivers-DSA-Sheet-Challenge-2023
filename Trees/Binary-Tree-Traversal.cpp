void inorderTraversal(TreeNode *root,vector<int> &inorder){
    if(!root){
        return;
    }
    inorderTraversal(root->left,inorder);
    inorder.push_back(root->data);
    inorderTraversal(root->right,inorder);
}

void preorderTraversal(TreeNode *root,vector<int> &preorder){
    if(!root){
        return;
    }
    preorder.push_back(root->data);
    preorderTraversal(root->left,preorder);
    preorderTraversal(root->right,preorder);
}

void postorderTraversal(TreeNode *root,vector<int> &postorder){
    if(!root){
        return;
    }
    postorderTraversal(root->left,postorder);
    postorderTraversal(root->right,postorder);
    postorder.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    vector<vector<int>>ans;
    vector<int>preorder;
    vector<int>inorder;
    vector<int>postorder;

    inorderTraversal(root,inorder);
    preorderTraversal(root,preorder);
    postorderTraversal(root,postorder);

    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);

    return ans;
}
