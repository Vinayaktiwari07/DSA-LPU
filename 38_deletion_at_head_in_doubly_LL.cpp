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

void print(Node* head){
    Node* p = head;

    while(p!=NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}

void deleteAtHeadInDoublyLL(Node* &head){
    Node* p = head;
    // Node* q = nullptr;

    // for(int i=1; i<pos; i++){
    //     q = p;
    //     p = p -> next;
    // }
    // q -> next = p -> next;
    // p -> next -> prev = q;
    head = head -> next;
    head -> prev = nullptr;
    delete p;
    
}
int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);

    // int pos = 2;
    // int val = 100;
    deleteAtHeadInDoublyLL(head);
    print(head);
    
    return 0;
}