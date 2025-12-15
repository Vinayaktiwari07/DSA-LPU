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

void inOrder(Node* root){
    if(!root) return;
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

bool searchInBst(Node* root, int target){
    if(root == nullptr) return false;

    if(root->data == target) return true;
    else if(root->data < target){
        return searchInBst(root-> right, target);
    }
    else{
        return searchInBst(root->left, target);
    }
}
int main() {
    Node* root = new Node(10);
    Node* leftNode = new Node(6);
    Node* rightNode = new Node(20);

    root -> left = leftNode;
    root -> right = rightNode;

    Node* left1 = new Node(1);
    Node* right1 = new Node(8);

    leftNode -> left = left1;
    leftNode -> right = right1;

    inOrder(root);
    cout << endl;

    cout << searchInBst(root, 80);
    return 0;
}