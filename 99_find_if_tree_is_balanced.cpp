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

int height(Node* root){
    if(!root) return 0;
    int lh = height(root->left);
    int rh = height(root->right);
}
// int height2(Node* root, bool isBalanced){
//     if(!root) return 0;
//     int lh = height2(root->left);
//     int rh = height2(root->right);

//     if(abs(lh-rh)>1){
//        isBalanced = false;
//        return 0; 
//     }
        
//     return 1 + max(lh,rh);
// }



bool checkIfBalanced(Node* root){
    if(!root) return true;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);


    bool leftCall = checkIfBalanced(root->left);
    bool rightCall = checkIfBalanced(root->right);

    return leftCall && rightCall;
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

    
    cout << checkIfBalanced(root);

    return 0;
}