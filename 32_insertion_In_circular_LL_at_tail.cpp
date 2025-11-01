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

void insertionInCircularLL(Node* &head, int val){
    Node* p=head;

    while(p -> next != head){
        p = p -> next;
    }

    Node* newnode = new Node(val);
    p -> next = newnode;
    newnode -> next = head;
    // head = newnode;
}

void Print(Node* head){
    Node* p = head;
    do{
        cout << p -> data << " ";
        p = p -> next;

    }
    while(p != head);
    
}
int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = new Node(42);
    head -> next -> next -> next -> next = head;


    insertionInCircularLL(head, 11);

    Print(head);
    return 0;
}