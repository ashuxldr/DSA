#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    explicit node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void push(struct node* root, int value){
    if (!root->left){
        root->left = new node(value);
        cout<<root->left->data;
    }
    else{
        root->right =  new node(value);
        cout<<root->right->data;
    }
}


int main(){
    cout<<"Hello CLION!!";
    struct node* root = new node(1);
    cout<<root->data;
    push(root, 2);
    push(root, 3);
    return 0;
}