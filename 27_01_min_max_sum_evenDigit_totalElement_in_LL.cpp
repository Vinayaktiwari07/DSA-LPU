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


void Print(Node* head){
    Node* p = head;

    while(p != NULL){
        cout << p -> data << " ";
        p = p -> next;
    }
    cout << endl;
}

void Printmax(Node* head){
    Node* p = head;

    int max = INT8_MIN;
    while(p != NULL){
        if(p -> data > max){
            max = p -> data;
        }
        p = p -> next;
    }
    cout << max << endl;;
}

void Printmin(Node* head){
    Node* p = head;

    int min = INT8_MAX;
    while(p != NULL){
        if(p -> data < min){
            min = p -> data;
        }
        p = p -> next;
    }
    cout << min << endl;;
}

void PrintTotalNodes(Node* head){
    Node* p = head;

    int count = 0;
    while(p != NULL){
        count = count + 1;
        p = p -> next;
    }
    cout <<count << endl;
}

void PrintSumOfNodes(Node* head){
    Node* p = head;

    int sum = 0;
    while(p != NULL){
        sum += p -> data;
        p = p -> next;
    }
    cout << sum << endl;
}

void PrintEvenCount(Node* head){
    Node* p = head;

    int count = 0;
    while(p != NULL){
        if(p -> data % 2 == 0){
            count++;
        }
        p = p -> next;
    }
    cout <<count << endl;
}

int main() {
    Node* head = new Node(12);
    head -> next = new Node(22);
    head -> next -> next = new Node(32);
    head -> next -> next -> next = new Node(42);

    Print(head);
    Printmax(head);
    Printmin(head);
    PrintTotalNodes(head);
    PrintSumOfNodes(head);
    PrintEvenCount(head);
    return 0;
}