#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    } 
};

node* build(node* root){
    cout<<"enter data";
    int data;
    cin>>data;
    root = new node(data);
    if (data == -1 ){
        return NULL;
    }
    cout<<"enter left"<<endl;
    root->left = build(root->left);
    cout<<"enter right"<<endl;
    root->right = build(root->right);
    return root;
}

int  main(){
    node* root = NULL;
    root = build(root);
    return 0;
} 