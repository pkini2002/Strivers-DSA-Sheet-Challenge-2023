// Pre, In and Postorder traversals using a single stack

vector<vector<int>> getTreeTraversal(TreeNode *root){
    // Write your code here.
    stack<pair<TreeNode *,int>>st;
    st.push({root,1});
    vector<int>preorder,inorder,postorder;

    vector<vector<int>>ans;

    if(root==NULL){
        return {};
    }

    while(!st.empty()){
        auto it=st.top();
        st.pop();

        if(it.second==1){
            preorder.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->left!=NULL){
              st.push({it.first->left,1});
            }
        }
        else if(it.second==2){
            inorder.push_back(it.first->data);
            it.second++;
            st.push(it);

            if(it.first->right!=NULL){
              st.push({it.first->right,1});
            }
        }
        else{
            postorder.push_back(it.first->data);
        }
    }
    ans.push_back(inorder);
    ans.push_back(preorder);
    ans.push_back(postorder);

    return ans;
}
