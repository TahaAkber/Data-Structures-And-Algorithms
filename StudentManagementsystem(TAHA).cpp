#include <iostream>
#include <string.h> 
#include <stdio.h>
#include<cstring>
using namespace std;
class student{
    public:
    student *next;
    int marks;
    string age;
    string name;
    string fathername;
};
void insertstudent(student **head,int marks,string age,string name,string fathername){
        student *newnode = new student();
        newnode->age = age;
        newnode->marks = marks;
        newnode->fathername = fathername;
        newnode->name = name;
        newnode->next = *head;
        *head = newnode;
}
void printstudents(student *ptr){
    while(ptr->next!=NULL){
        cout << "Name :" << "  " <<  ptr->name<< endl;
        cout << "FatherName :"<< "   " << ptr->fathername << endl;
        cout << "Age :" << "   " << ptr->age <<endl;
        cout << "Marks :" << "   "<< ptr->marks << endl;
        cout << "---------------" << endl;
        ptr = ptr->next;
    }
}
void deletionstudent(student **head,string name){
    student *temp = *head;
    while(temp->next->name!=name){
        temp = temp->next;
    }
    student *todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete;
}
void firstposition(student**head){
    student *ptr = *head;
    student *temp;
    int max = 0;
   while(ptr->next!=NULL){
       if(ptr->marks>max){
            max = ptr->marks;
            temp = ptr;
       }
       ptr = ptr->next;
   }

cout << "First Position : " << temp->name;
cout << "       " << temp->age << endl;

}
void failedstudents(student **head){
    student *ptr = *head;
    while(ptr->next!=NULL){
        if(ptr->marks<40){
        cout << ptr->marks << "  ";
        cout << ptr->name << "   " << endl;
        }
        ptr = ptr->next;
    }
}

int main(){
int option;
string name;
string age;
int marks;
string fathersname;
student *head = new student();
do
{
cout << "Press 1 to Insert Student: " << endl;
cout << "Press 2 to Remove Student: " << endl;
cout << "Press 3 to Print all Students : " << endl;
cout << "Press 4 to First position: " << endl;
cout << "Press 5 to List of failed Students: " << endl;
cout << "Press 0 to Exit: " << endl;
cin>>option;
switch (option)
{
case 0:
    cout << "Thanks: " << endl;
    break;
case 1:
    cout << "Enter Your Name: "<< endl;
    cin >> name;
    cout << "Enter Your Age "<< endl;
    cin >> age;
    cout << "Enter Marks Obtained: " << endl;
    cin >> marks;
    cout << "Enter Your Father Name :" << endl;
    cin >> fathersname;
    insertstudent(&head,marks,age,name,fathersname);
    break;
case 2:
    cout << "Enter name to Remove Student : " << endl;
    cin>> name;
    deletionstudent(&head,name);
    break;
case 3:
    cout << "List of Students : " << endl;
    printstudents(head);
    break;
case 4:
    cout << "First position goes to : " << endl;
    firstposition(&head);
    break;
case 5:
    cout << "Number of failed Students : " << endl;
    failedstudents(&head);
    break;

default:
    cout<<"Try Again "<<endl;
    break;
}

} while (option != 0);
return 0;
}
