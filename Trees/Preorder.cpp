//Function to return a list containing the preorder traversal of the tree.
int* preorder(struct Node* root)
{
    while(root!=NULL){
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
        return arr;
    }
}
