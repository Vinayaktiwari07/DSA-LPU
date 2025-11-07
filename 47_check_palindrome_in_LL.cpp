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
    head -> next -> next -> next = new Node(22);
    head -> next -> next -> next -> next = new Node(12);
    // Node* head2 = new Node(10);
    // head2 -> next = new Node(20);
    // head2 -> next -> next = head1 -> next -> next;
    // head1 -> next -> next -> next = new Node(42);

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr){
        slow = slow -> next;
        fast = fast -> next -> next;
    }




    Node* p = slow;
    Node* q = nullptr, *r = nullptr;

    while(p != nullptr){
        r = q;
        q = p;
        p = p -> next;

        q -> next = r;
    }
    // head = q;
    Node* first = head;
    Node* second = q;
    bool isPalindrome = true;


    Node* init = head;
    while(second != nullptr){
        if(first -> data != second -> data){
            isPalindrome = false;
            break;
        }
        first = first -> next;
        second = second -> next;
    }

    if(isPalindrome)
        cout << "palindrome" << endl;
    else
        cout << "not a palindrome" << endl;

    return 0;
}