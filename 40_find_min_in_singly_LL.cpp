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
    int count = 0;
    Node* p = head;

    while(p!=NULL){
        count = count + 1;
        p = p -> next;
    }

    // cout << count << endl;

    int mid = count / 2;
    p = head;

    for(int i=0; i<mid; i++){
        p = p -> next;
        
    }
    cout << p -> data;
}

// void findMid(Node* &head){
//     Node* p = head;
//     Node* q = nullptr;

//     while(p -> next != nullptr){
//         q = p;
//         p = p -> next -> next;
//         q = q -> next;
//     }

//     cout << q << endl;
// }
// void deleteAtTailInDoublyLL(Node* &head){
//     Node* p = head;
//     Node* q = nullptr;

//     while(p -> next != nullptr){
//         q = p;
//         p = p -> next;
//     }

//     // for(int i=1; i<pos; i++){
//     //     q = p;
//     //     p = p -> next;
//     // }
//     q -> next = nullptr;
//     // p -> prev = q;
//     // head = head -> next;
//     // head -> prev = nullptr;
    
//     delete p;
    
// }
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