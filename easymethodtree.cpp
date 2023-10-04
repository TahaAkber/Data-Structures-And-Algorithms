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
node *insert(node *root, int data){
    if(root == NULL){
        root = getnewnode(data);
    }
    else if (data <= root->value)
    {
        root->left = insert(root->left,data);
    }
    else{
        root->right = insert(root->right,data);
    }
    return root;
}
void inorder(node *root){
    if(root == NULL){
        return;
    }
    else{
        inorder(root->left);
        cout << root->value << endl;
        inorder(root->right);
    }
}

void preorder(node *root){
    if(root == NULL){
        return;
    }
    else{
        cout << root->value << endl;
        preorder(root->left);
        preorder(root->right);
    }
}
bool existance(node *root , int key){
    if(root == NULL)
        return false;
    if(key == root->value ){
        return true;
    }
    else if(key <= root->value){
        return existance(root->left,key);        
    }
    else{
        return existance(root->right,key);    
}
}
node *inordersucc(node *root){
    node *curr = root;
    while(curr!=NULL){
        curr = curr->left;
    }
    return curr;
}
node *todelete(node *root,int value){
    if(root == NULL){
        return root;
    }
    if(value <= root->value){
        root->left = todelete(root->left,value);
    }
    else if(value >= root->value){
        root -> right = todelete(root->right,value);
    }
    else{
        if(root->left== NULL and root->right == NULL){
            return NULL;
        }
        else if(root->left == NULL){
            node *temp = root->right;
            free(root);
            return temp;

        }
        else if(root->right == NULL){
            node *temp = root->left;
            free(root);
            return temp;
        }
        else{
            node *temp = inordersucc(root->right);
            root->value = temp->value;
            root = todelete(root->right,temp->value);
        }
    }
    return root;
}



int main(){
    node *root = NULL;
    root = insert(root,50);
    root = insert(root,25);
    root = insert(root,75);
    root = insert(root,100);
    
    inorder(root);
    if(existance(root,100)){
        cout << "it exists" << endl;
    }
    else{
        cout << "not existed " << endl;
    }

}