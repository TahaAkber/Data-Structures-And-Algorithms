#include <iostream>
using namespace std;

void factorial(int n){
    if(n <= 1){
        return;
    }
    return n*factorial(n-1);
}
int main(){
    int a;
    a = 5;
    cout << factorial(a);
}
