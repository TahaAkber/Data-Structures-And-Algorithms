#include <iostream>
using namespace std;

class node{
public:
    int value;
    node *next;
};
class stack:public node{
    public:
node *top = NULL;
void push(int newvalue){
    node *newnode = new node();
    newnode->value = newvalue;
    newnode->next = top;
    top = newnode;
}

void pop(){
    if(top == NULL){
        cout << "stack over flow " << endl;
    }
    else{
        cout << "popped element is " << top->value << endl;
        top = top->next;
    }
}

void display(){
    while(top != NULL){
        cout << top->value << endl;
        top = top->next;
    }
    cout << endl;
}
bool isempty(){
    if(top!=NULL)
        return false;
    else{
        cout << "stack empty :"<< " " << endl;
        return true;
    }    
}
};
void check(){
    stack s1;
    s1.push(23);
    s1.push(234);
    s1.push(54);
    s1.push(45);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.isempty();
    s1.display();
}

int main(){
    check();
}
