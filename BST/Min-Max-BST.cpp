/*
 * class Node
 * {
 * public:
 *     int data;
 *     Node *left;
 *     Node *right;
 *     Node() : data(0), left(nullptr), right(nullptr){};
 *     Node(int x) : data(x), left(nullptr), right(nullptr) {}
 *     Node(int x, Node *left, Node *right) : data(x), left(left), right(right) {}
 * };
 */
int minVal(Node* root){
	// Write your code here.
	if(root==NULL){
		return -1;
	}
	Node* curr=root;
	while(curr->left!=NULL){
		curr=curr->left;
	}	
	return curr->data;
}
