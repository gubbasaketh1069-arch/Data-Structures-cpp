#include<iostream>
using namespace std;
template <class T>
T findmax(T a, T b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<"max of integers:"<<findmax(40,30)<<endl;
    cout<<"max of floats:"<<findmax(2.5f,5.5f)<<endl;
    cout<<"max of characters:"<<findmax(B,X)<<endl;
    return 0;
}
