#include <iostream>
using namespace std;

class node{
    public:

    int value;
    node *left;
    node *right;
    
};
node *getnewnode(int data){
    node *newnode = new node();
    newnode->value = data;
    newnode->left = newnode->right =NULL;
    return newnode;
}
node *insert(node *root,int value){
    if(root == NULL){
        root = getnewnode(value);
    }
    else if(value<= root->value){
        root->left = insert(root->left,value);
    }
    else if(value >= root->value){
        root->right = insert(root->left,value);
    }
    return root;
}
node *inordersucc(node *root){
    node *curr = root;
    while(curr!=NULL){
        curr = curr->left;
    }
    return curr;
}
node *todelete(node *root,int data){
    if(root == NULL){
        return root;
    }
    if(data <= root->value){
        root->left = todelete(root->left,data);
    }
    else if(data >= root->value ){
        root->right = todelete(root->right,data);
    }
    else{
        if(root->left = NULL){
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right = NULL){
            node *temp = root->left;
            free(root);
            return temp;
        }
        else{
            node *temp = inordersucc(root->right);
            root->value = temp->value;
            root->right = todelete(root->right,temp->value);
        }

    }
}
void preorder(node *root){
    if(root == NULL){
        return;
    }
    cout << root->value << endl;
    preorder(root->left);
    preorder(root->right);
}

int main(){
    node *root = NULL;
    root = insert(root,53);
    root = insert(root,1000);
    root = insert(root,67);
    root = insert(root,78);
    preorder(root);
}