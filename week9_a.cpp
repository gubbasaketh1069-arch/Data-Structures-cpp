#include<iostream>
using namespace std;
#define Max 5
class Queue{
  private:
  int arr[Max];
  int front,rear;
  public:
  Queue(){
   front=-1;
   rear=-1;
  }
void enqueue(int val){
    if(rear==Max-1){
        cout<<"Queue Overflow\n";
        return;
    }
    if(front==-1){
        front=0;
    }
        arr[++rear]=val;
        cout<<"Inserted "<<val<<" sucessfully\n";
}
void dequeue(){
    if(front==-1||front>rear){
        cout<<"queue Underflow\n";
    }
    else{
    cout<<"Deleted element:"<<arr[front++]<<"\n";
    }

}
void display(){
    if(front==-1||front>rear){
        cout<<"Queue underflow\n";
        return;
    }
    else{
        cout<<"Queue Elements are:";
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
    }
}
};
int main(){
    Queue q;
    q.dequeue();
    q.enqueue(10);
     q.enqueue(30);
      q.enqueue(20);
       q.enqueue(60);
        q.enqueue(50);
        q.dequeue();
         q.enqueue(90);
         q.display();
    return 0;
}