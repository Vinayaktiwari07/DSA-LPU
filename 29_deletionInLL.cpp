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

void deleteAtPos(Node* head, int pos){
    Node* p = head;
    Node* q = nullptr;

    for(int i=1; i<pos; i++){
        q = p;
        p = p -> next;
    }
    q -> next = p -> next;
    delete p;
    
}
int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);

    int pos = 2;
    int val = 100;
    deleteAtPos(head, pos);
    print(head);
    
    return 0;
}