#include <bits/stdc++.h>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;
    node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};


node* build_tree(node* root){
        int data;
        cout<<"Enter data";
        cin>>data;
        if(data==-1)
        return NULL;
        root = new node(data);
        cout<<"Enter data for left";
        root->left = build_tree(root->left); 
        cout<<"Enter data for right";
        root->right = build_tree(root->right); 
        return root;
}

void level_order_traversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
            continue;
        }
        cout<<temp->data<<"->";
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }

}

void inorder(node* root){
    if(!root)
    return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}

void preorder(node* root){
    if(!root)
    return;
    cout<<root->data<<"->";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node* root){
    if(!root)
    return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<"->";
}

void tree_from_level_order(node* &root){
    int val;
    cout<<"enter data:"<<endl;
    cin>>val;
    root = new node(val);
    queue<node*> q;
    q.push(root);
    
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<"enter data for left node: "<<temp->data<<endl;
        cin>>val;
        if(val!=-1){
            temp->left = new node(val);
            q.push(temp->left);
        }
        cout<<"enter data for right node: "<<temp->data<<endl;
        cin>>val;
        if(val!=-1){
            temp->right = new node(val);
            q.push(temp->right);
        }

    }
}


int main(){
    node* root = NULL;
    // root = build_tree(root);
    // cout<<"INORDER: "<<endl;
    // inorder(root);
    // cout<<"PREORDER: "<<endl;
    // preorder(root);
    // cout<<"POSTORDER: "<<endl;
    // postorder(root);
    tree_from_level_order(root);
    // 1 2 5 3 4 6 10 8 9
    level_order_traversal(root);
    return 0;
}