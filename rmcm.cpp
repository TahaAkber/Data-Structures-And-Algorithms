#include <iostream>
using namespace std;


int main(){
    cout << "column measure: "<< endl;
    cout << " " << endl;

    int arr[3][3] = {{2,3,5},{5,5,6},{54,67,7}};
    for(int j=0; j<3 ;j++){
        for(int i = 0; i<3 ;i++){
            cout << arr[i][j] << " ";
            cout << &arr[i][j] + (3*j+i)*4 << " " << endl;
        }
    }
    cout << " " << endl;
    cout << "row measure: " << endl;
    cout << " " << endl;
    for (int i =0; i<3 ; i++){
        for(int j=0; j<3; j++){
            cout << arr[i][j] << " ";
            cout << &arr[i][j] + (3*j+i)*4 << " " << endl;
        }
    }
}