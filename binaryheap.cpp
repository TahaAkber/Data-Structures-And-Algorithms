#include <iostream>
using namespace std;

class heap{
    int *elem;
    int count;
    public:
    heap(int heapsize){
        this->count =0;
        this->elem = new int(heapsize);
    }
    ///////////////insert case
    void heapup(int root ,int bottom){
        if(bottom > root){
            int parent;
            parent = (bottom-1) / 2;
            if(elem[parent]>elem[bottom]){
                int temp;
                temp = elem[parent];
                elem[parent] = elem[bottom];
                elem[bottom] = temp;
                heapup(root,parent);
            }
        }
    }
    void enqueue(int a)
    {
        elem[count] = a;
        heapup(0,count);
        count++;
    }
    /////////////////delete case
    void heapdown(int root,int bottom){
        int min ,leftchild,rightchild;
        rightchild = (2*root) + 2;
        leftchild = (2*root) + 1;
        if(leftchild<=bottom){
            if(leftchild==bottom){
                min =leftchild;
            }
            else{
                if(elem[leftchild]>= elem[rightchild]){
                    min = rightchild;
                }
                else{
                    min = leftchild;
                }
                if(elem[root]>elem[min]){
                int temp;
                temp = elem[root];
                elem[root] = elem[min];
                elem[min] = temp;
                heapdown(min,bottom);
                }
            }
        }

    }
    void dequeue(){
        count--;
        elem[0]  = elem[count];
        heapdown(0,count);
    }
    void displaY(){
    for(int i = 0; i<count ;i++){
        cout << elem[i] << " " << endl;
    }
}
};



int main(){
        int size = 20;
        heap h1(size);
        h1.enqueue(10);
        h1.enqueue(5);
        h1.enqueue(20);
        h1.enqueue(25);
        //h1.dequeue();
        h1.displaY();
}

