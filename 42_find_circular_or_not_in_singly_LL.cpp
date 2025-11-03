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

void isCircular(Node* &head){
    Node* fast = head;
    Node* slow = head;

    int flag = 0;
    do{
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            flag = 1;
            break;
        }
        
    }
    while( fast!=nullptr && fast -> next != nullptr);
    // cout << slow -> data;

    if(flag){
        cout << "yes" << endl;
        
    }
    else{
        cout << "no" << endl;
        
    }
}


int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = new Node(42);
    head -> next -> next -> next->next = head;

    // int pos = 2;
    // int val = 100;
    // deleteAtTailInDoublyLL(head);
    // print(head);
    isCircular(head);
    return 0;
}