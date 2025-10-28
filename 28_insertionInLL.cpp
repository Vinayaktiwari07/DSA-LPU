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

    while(p!=NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
}

void insertionInLL(Node* head, int pos, int val){
    Node* p = head;
    Node* q = nullptr;

    for(int i=1; i<pos; i++){
        q = p;
        p = p -> next;
    }

    Node* newNode = new Node(val);
    newNode -> next = p;
    q -> next = newNode;
}
int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);

    int pos = 3;
    int val = 100;
    insertionInLL(head, pos, val);
    print(head);
    
    return 0;
}