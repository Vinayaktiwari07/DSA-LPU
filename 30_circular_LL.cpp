#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
    
};

void print(Node* head){
    Node* p = head;
    do{
        cout << p -> data << " ";
        p = p -> next;
    }

    while(p!=head);
}

int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = head;

    print(head);
    
    return 0;
}