#include <iostream>

using namespace std;

int main(){
    int number;
    int check = 0;
    cout << "Enter number: " << endl;
    cin>>number;
    for(int i = 1; i<=number ; i++){
        if(number%i == 0){
            check++;
        }
    }
    if(check == 2){
        cout << "No is prime: " << endl;
    }
    else{
        cout << "No is not prime" << endl;
    }
    
}