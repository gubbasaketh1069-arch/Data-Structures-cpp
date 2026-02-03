#include<iostream>
using namespace std;
class array{
    int *arr;
    public:
    array(int size){
        arr=new int[size];
        for(int i=0;i<size;i++){
            arr[i]=i+1;
        }
    }
    void display(int size){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    array a1(5);
    a1.display(5);
    return 0;
}