#include<iostream>
#include<bits/stdc++.h>
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

void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* node = q.front();
        q.pop();

        cout << node->data<<" ";

        if(node->left != nullptr) q.push(node->left);
        if(node->right != nullptr) q.push(node->right);
    }
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

    levelOrder(root);
    return 0;
}