vector<int> levelOrder(TreeNode<int> * root){
    // Write your code here.
    vector<int>res;

    if(root==NULL){
        return res;
    }

    queue<TreeNode<int>*>nodesQueue;

    nodesQueue.push(root);

    while(!nodesQueue.empty()){
        int size=nodesQueue.size();
        for(int i=0;i<size;i++){
            TreeNode<int>* node=nodesQueue.front();
            res.push_back(node->data);
            nodesQueue.pop();
            if(node->left){
                nodesQueue.push(node->left);
            }
            if(node->right){
                nodesQueue.push(node->right);
            }
        }
    }
    return res;
}
