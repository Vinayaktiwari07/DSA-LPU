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

    Print(head);
    return 0;
}