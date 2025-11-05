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
    Node* head1 = new Node(12);
    head1 -> next = new Node(22);
    head1 -> next -> next = new Node(32);
    Node* head2 = new Node(10);
    head2 -> next = new Node(20);
    head2 -> next -> next = head1 -> next -> next;
    head1 -> next -> next -> next = new Node(42);

    Node* p = head1;
    Node* q = head2;

    while(p!=q){
        if(p==nullptr){
            p = head2;
        }
        else{
            p = p-> next;
        }

        if(q == nullptr){
            q = head1;
        }
        else{
            q = q -> next;
        }
    }
    cout << p -> data;
    return 0;
}