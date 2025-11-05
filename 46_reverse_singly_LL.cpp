#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
    // Node* prev;

    Node(int value){
        data = value;
        next = NULL;
        // prev = NULL;
    }
    
};


int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    // Node* head2 = new Node(10);
    // head2 -> next = new Node(20);
    // head2 -> next -> next = head1 -> next -> next;
    // head1 -> next -> next -> next = new Node(42);

    Node* p = head;
    Node* q = nullptr, *r = nullptr;

    while(p != nullptr){
        r = q;
        q = p;
        p = p -> next;

        q -> next = r;
    }
    head = q;

    while(q != nullptr){
        cout << q -> data << " ";
        q = q -> next;
    }
    return 0;
}