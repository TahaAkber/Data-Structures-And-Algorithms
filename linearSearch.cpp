#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,5,74,2,1,54,56,7,8,9,0};
    int a;
    cout << "enter value u want to search : " << endl;
    cin>>a;
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i<length ; i++){
        if( a == arr[i]){
            cout << "it exist at " << i << endl;;
        }
    
}
}