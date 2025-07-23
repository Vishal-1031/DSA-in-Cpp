#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Creating node 
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

// Code for inorder traversal
void inorder(node* root, vector<int>& arr) {
         if(root==NULL){
        return ;
        }
        
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
        
    }

// preorder 

void preorder(vector<int>& arr, node* root, int& index)
{
    if(root==NULL){
        return ;
    }

    root -> data = arr[index++];
    preorder(arr,root->left,index);
    preorder(arr,root->right,index);

}

void convertBSToHeap(node* root){

    vector<int> ans;
    inorder(root,ans);

    int index = 0;
    preorder(ans, root, index);

}

int main(){

    // Constructing the Binary Search Tree (BST)
    //          4
    //        /   \
    //       2     6
    //      / \   / \
    //     1   3 5   7

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(6);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->left = new node(5);
    root->right->right = new node(7);

}