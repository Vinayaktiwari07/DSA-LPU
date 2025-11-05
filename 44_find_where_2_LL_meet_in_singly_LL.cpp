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

void intersectionInLL(Node* &head1, Node* &head2){
    Node* p1 = head1;
    Node* p2 = head2;
    int count1 = 0;
    int count2 = 0;

    while(p1 != nullptr){
        count1++;
        p1 = p1 -> next;
    }
    
    while(p2 != nullptr){
        count2++;
        p2 = p2 -> next;
    }

    int diff = count1 - count2;
    p1 = head1;
    p2 = head2;

    if(count1>count2){
        for(int i=0; i<diff; i++){
            p1 = p1 -> next;
        }
    }
    else{
        for(int i=0; i<diff; i++){
            p2 = p2 -> next;
        }
    }

    while(p1 != nullptr && p2 != nullptr){
        if(p1 ==p2){
            cout << "Intersect" << endl;
            return;
        }
        
        p1 = p1 -> next;
        p2 = p2 -> next;
        
    }
    cout << "no intersection" << endl;
}


int main() {
    Node* head1 = new Node(12);
    head1 -> next = new Node(22);
    head1 -> next -> next = new Node(32);
    Node* head2 = new Node(10);
    head2 -> next = new Node(20);
    head2 -> next -> next = head1 -> next -> next;
    head1 -> next -> next -> next = new Node(42);
    // head -> next -> next -> next->next = head;

    // int pos = 2;
    // int val = 100;
    // deleteAtTailInDoublyLL(head);
    // print(head);
    // isCircular(head);
    intersectionInLL(head1, head2);
    return 0;
}