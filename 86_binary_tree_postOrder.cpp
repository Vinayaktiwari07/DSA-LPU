#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void postOrder(Node* root){
    if(!root) return;
    postOrder(root -> left);
    postOrder(root -> right);
    cout << root -> data << " ";
}
int main() {
    Node* root = new Node(1);
    Node* leftNode = new Node(2);
    Node* rightNode = new Node(3);

    root -> left = leftNode;
    root -> right = rightNode;

    Node* left1 = new Node(4);
    Node* right1 = new Node(5);

    leftNode -> left = left1;
    leftNode -> right = right1;

    postOrder(root);
    return 0;
}