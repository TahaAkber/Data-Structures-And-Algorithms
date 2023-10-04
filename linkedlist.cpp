#include <iostream>
using namespace std;

struct node{
    int val;
    node *next;
};
void printlist(node *n){
    while(n != NULL){
        cout  << n->val << endl;
        n = n->next;
    }
}
void insertatfront(node **head, int data){
    node *newnode = new node ();
    newnode->val = data;
    newnode->next = *head;
    *head = newnode;
}
void insertatback(node **head,int data){
    node *newnode = new node();
    newnode->val = data;
    newnode->next = NULL;
    if(*head == NULL){
            *head = newnode;
            return;     
    }
    node *last = *head;
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newnode;
}
void insertatmid(node *previous, int data){
    node *newnode = new node();
    newnode->val = data;
    newnode->next = previous->next;
    previous->next = newnode;
}
int main(){
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->val= 34;
    head->next = second;
    second->val = 43;
    second->next = NULL;
insertatfront(&head,555);
insertatback(&head,23);
insertatmid(second,32);
printlist(head);

}