#include<iostream>
using namespace std;

class Queue{
    public:
    int arr[100];
    int front;
    int rear;
    int size = 0;

    Queue(){
        front = 0;
        rear = -1;
    }

    bool isFull(){
        // return size == 100;
        if(rear == 100){
            return true;
        }
        else{
            return false;
        }
        // return rear == 100;
    }
    
    bool isEmpty(){
        // return size == 100;
        if(front == 0){
            return true;
        }
        else{
            return false;
        }
    }

    void enqueue(int x){
        if(isFull() == 1){
            cout << "Queue is full" << endl;
        }else{
            rear=(rear+1)%100;
            arr[rear] = x;
            size++;
        }
    }

    int dequeue(){
        if(isEmpty() == 0){
            cout << "Queue is full" << endl;
        }
        else{
            int val = arr[front];
            front = (front+1)%100;
            size--;
            return val;
        }
    }

    int getFront(){
        if(size == 0){
            return -1;
        }
        else{
            return arr[front];
        }
    }

    void traverse(){
        int i = front;
        int count = size;

        while(count >0){
            cout <<arr[i] << " ";
            i = (i+1)%100;
            count--;
        }
    }
};
int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.traverse();
    cout << endl;

    q.dequeue();
    q.traverse();
    return 0;
}

