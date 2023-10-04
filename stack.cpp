#include <iostream>

using namespace std;
class node{
    public:
    int data;
    node *next;
};
node *top = NULL;
void push(int value){   
    node *newnode = new node();
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}
void printlist(){
    while(top != NULL){
        cout << top->data << endl;
        top = top->next;
    }
}
void pop(){
    if(top == NULL){
        cout << "stack overflow" << endl;
    }
    else{
        cout << "popped element is :" << top->data << endl;
        top = top->next;
    }
}
int main(){
   // int ch,pt;
    // cout << "1 to push value to stack " << endl;
    // cout << "2 to pop value to stack " << endl;
    // cout << "3 to display stack " << endl;
    // cout << "4 exit " << endl;

    // // do
    // // {
    //     // cout << "Enter numbver you want to do: " << endl;
    //     // cin >> ch;
    //     switch (ch)
    //     {
    //     case 1:{
    //         cout << "enter value to be pushed "<< endl;
    //         cin >> pt;
    //         push(pt);
    //         break;
    //     }
    //     case 2:{
    //         pop();
    //         break;
    //     }
    //     case 3:{
    //         printlist();
    //         break;
    //     }
    //     case 4:{
    //         cout << "Exit" << endl;
    //         break;
    //     }
    //     default:
    //         cout << "invalid " << endl;
    //         break;
    //     }
   // } while (ch != 4);
//without switch case statement:
    push(32);
    push(455);
    push(31);
    push(34);
    pop();
    printlist();
    return 0;
    
}