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


int diameter(Node* root, int &dia){
    if(!root) return 0;
    int lh = diameter(root->left, dia);
    int rh = diameter(root->right, dia);

    dia = max(dia, lh+rh);
    
    return 1+max(lh,rh);
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

    int dia = 0;
    cout << diameter(root,dia);

    return 0;
}