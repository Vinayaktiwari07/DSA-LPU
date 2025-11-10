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
class Stack{
public:
    Node* top;

    Stack(){
        top = nullptr;
    }

    void push(int data){
        Node* newNode = new Node(data);
        newNode ->next = top;
        top = newNode; //catch -> 
    }

    void pop(){
        Node* temp = top;
        top = top -> next;
        delete temp;
    }

    bool isEmpty(){
        if(top == nullptr){
            return true;
        }
        else{
            return false;
        }
        // return top == nullptr;
    }

    int peek(){
        if(top == nullptr){
            return -1;
        }
        else{
            return top -> data;
        }
    }
    void traverse(){
        if(top == nullptr){
            cout <<"Stack underflow" << endl;
        }
        else{
            Node* temp = top;
            while(temp != nullptr){
                cout << temp -> data << " ";
                temp = temp -> next;
            }
        }
    }


};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.traverse();
    cout << endl;

    s.pop();
    s.traverse();
    cout << endl;

    cout << s.isEmpty();
    cout << endl;
    
    cout << s.peek();
    cout << endl;
    return 0;
}