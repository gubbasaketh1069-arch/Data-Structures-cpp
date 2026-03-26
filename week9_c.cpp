#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
private:
    Node *front, *rear;

public:
    Queue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int val){
        Node* newNode = new Node(val);

        if(newNode == NULL){
            cout << "Queue Overflow\n";
            return;
        }

        // First element
        if(front == NULL){
            front = rear = newNode;
            cout << "Inserted Successfully\n";
            return;
        }

        rear->next = newNode;
        rear = newNode;

        cout << "Inserted Successfully\n";
    }

    void display(){
        if(front == NULL){
            cout << "Queue is empty\n";
            return;
        }

        Node *temp = front;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty\n";
            return;
        }
        Node *temp=front;
        cout<<"Deleted element:"<<temp->data<<"\n";
        front=front->next;
        delete temp;
    }
};

int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.display();
q.dequeue();
q.display();
    return 0;
}