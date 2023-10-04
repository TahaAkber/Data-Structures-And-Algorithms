#include <iostream>

using namespace std;

int main(){
    int array1[] = {2,3,4,5,6,7};
    cout << sizeof(array1);
    int sum= 0;
    int n = 3;
    for(int i=0 ; i<6; i++){
        if(n == array1[i]){
            cout << "it exists: ";
            return true;
        }
        else{
            cout << "not existed:";
            return false;
        }
    }
    cout << sum;
    }
