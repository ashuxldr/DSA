#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	Node* left;
	Node* right;
};

class node{
    public:
        int data;
        node* left;
        node* right;
    public:
/* constructor to create a new node */
        node(int val){
            data = val;
            left = right = NULL;
        }
};

/* Function to insert element in binary tree */
node* insert(node* root, int data){
    if(root==NULL)
    {
        root = new node(data);
        return root;
    }
    queue<node*> q;
	q.push(root);

	while (!q.empty()) {
		node* temp = q.front();
		q.pop();

		if (temp->left != NULL)
			q.push(temp->left);
		else {
			temp->left = new node(data);
			return root;
		}

		if (temp->right != NULL)
			q.push(temp->right);
		else {
			temp->right = new node(data);
			return root;
		}
	}
    return 0;
}

/* Inorder traversal of a binary tree */
void inorder(node* temp)
{
	if (temp == NULL)
		return;
	inorder(temp->left);
	cout << temp->data << ' ';
	inorder(temp->right);
}

void deletion(node* root, int x){
    node* temp = root;
    node* itr = root;
    while(temp.right){
        temp = temp.right;
    }
}
// Driver code
int main()
{
    node* root = new node(10);
	root->left = new node(11);
	root->left->left = new node(7);
	root->right = new node(9);
	root->right->left = new node(15);
	root->right->right = new node(8);
	cout << "Inorder traversal: ";
	inorder(root);
	return 0;
}
