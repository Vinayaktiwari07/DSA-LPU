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

void deletionInCircularLLhead(Node* head){
    Node* p=head;
    Node* q = head;

    while(p -> next != head){
        p = p -> next;
    }

    // Node* newnode = new Node(val);
    p -> next = head -> next;
    // newnode -> next = head;
    head -> next = head;
    delete q;
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


    deletionInCircularLLhead(head);

    Print(head);
    return 0;
}