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

void count(Node* &head){
    Node* fast = head;
    Node* slow = head;

    while(fast -> next != nullptr && fast -> next -> next != nullptr){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    cout << slow -> data;

}


int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = new Node(42);

    // int pos = 2;
    // int val = 100;
    // deleteAtTailInDoublyLL(head);
    // print(head);
    count(head);
    return 0;
}