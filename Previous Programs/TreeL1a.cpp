#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data ;
    node* left;
    node* right;

    node(int d){
        this -> data = d ;
        node* left = NULL ; 
        node* right = NULL ;

    }

};

node* buildTree(node* root){

    cout << "Enter the data " << endl;
    int data ;
    cin >> data ;
    root = new node(data);

    if (data == -1){
        return NULL;
    }
    
    cout << "Enter the value for inserting the left of " << data << endl;
    root->left = buildTree(root->left) ;
    cout << "Enter the value for inserting the right of " << data << endl;
    root->right = buildTree(root->right) ;
}

 void preorder(node* root){ // dry run krna hai
    // base case 
    if (root == NULL){
        return ;
    }

    cout << root->data << " " ;
    preorder(root->left);
    preorder(root->right) ;
 }

 void inorder(node* root){ // dry run krna hai
    // base case 
    if (root == NULL){
        return ;
    }

    
    inorder(root->left);
    cout << root->data << " " ;
    inorder(root->right) ;
 }

 void postorder(node* root){ // dry run krna hai
    // base case 
    if (root == NULL){
        return ;
    }

    
    postorder(root->left);
    postorder(root->right) ;
     cout << root->data << " " ;
 }

void levelOrderTraversal(node* root){ // iska ek baar dry run krna hai 
    queue< node* > q; 
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

    if(temp==NULL){
        // purana node complete hochuka hai 
        cout << endl;
        if(!q.empty()){
            // queue still has some child nodes left
            q.push(NULL);
        }
    }
    else {
         cout << temp -> data << " " ;
         if(temp -> left ) {
            q.push(temp->left);
        }
        if(temp -> right ) {
            q.push(temp->right);
        }
    }
       
    }
}

void buildFromLevelOrder(node* &root) {
    queue<node*> q;
    cout << "Enter data for root " << endl;
    int data ; 
    cin>> data ;
    root = new node(data);

    while (!q.empty()){
        node* temp = q.front();
        q.pop();

        cout << "Enter left n ode for : " << temp->data << endl;
        int leftData ; 
        cin>> leftData;
        if(leftData!=-1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }

        cout << "Enter right node for : " << temp->data << endl;
        int rightData ; 
        cin>> rightData;
        if(rightData!=-1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main (){

    node* root = NULL;

    // creating a tree
    root = buildTree(root);

    cout << "Printing the tree " << endl;
    levelOrderTraversal(root);
    // 1 2 3 -1 -1 4 -1 -1 5 6 -1 -1 -1

    cout << "Inorder traversal is : ";
    inorder(root);
    cout << endl;

    cout << "postorder traversal is : ";
    postorder(root);
    cout << endl;

    cout << "preorder traversal is : ";
    preorder(root);
    cout << endl;

    // for building buildFromLevelOrder comment the above ones and write 
    // node* root = NULL
    // buildFromLevelOrder(root);

    return 0;
}
