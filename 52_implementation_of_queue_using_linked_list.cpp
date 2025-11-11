#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Queue{
public:
    Node* front;
    Node* rear;

    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    void enqueue(int x){
        Node* newNode = new Node(x);
        
        if(rear == nullptr){
            rear = newNode;
            front = newNode;
            return;
        }

        rear -> next = newNode;
        rear = newNode;
    }

    void dequeue(){
        if(front == nullptr){
            cout <<"Queue is empty" << endl;
        }
        else{
            Node *temp = front;
            front = front -> next;
            delete temp;

            if(front == nullptr){
                rear = nullptr;
            }
        }
    }

    bool isEmpty(){
        if(front == nullptr){
            return true;
        }
        else{
            return false;
        }

        return front == nullptr;
    }

    int getFront(){
        if(isEmpty()){
            return -1;
        }
        else{
            return front -> data;
        }
    }

    void traverse(){
        if(isEmpty() == 1){
            cout <<"Queue is empty" << endl;
        }
        else{
            Node* temp = front;

            while(temp != nullptr){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }
    }

    int getEnd(){
        if(isEmpty()){
            return -1;
        }
        else{
            return rear -> data;
        }
    }



};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.traverse();
    cout << endl;
    
    q.dequeue();
    q.traverse();

    return 0;
}