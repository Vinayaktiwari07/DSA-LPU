#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};


void insertionInDoublyLL(Node* &head, int pos, int val){
    Node* p = head;
    Node* q = nullptr;
    
    for(int i=1; i<pos; i++){
        q = p;
        p = p -> next;
    }
    
    Node* newNode = new Node(val);
    newNode -> next = p;
    q -> next = newNode;
    p -> prev = newNode;
    newNode -> prev = q;
}
void Print(Node* head){
    Node* p = head;

    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}
int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = new Node(42);

    int pos = 3;
    int val = 100;
    insertionInDoublyLL(head, pos, val);
    Print(head);
    return 0;
}