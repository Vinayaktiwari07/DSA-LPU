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

void printRootToLeaf(Node* root, vector<int> &arr){
    if(!root) return;
    arr.push_back(root->data);
    if(root->left==nullptr && root->right==nullptr){
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] <<" ";
        }
        cout << endl;
    }
    printRootToLeaf(root->left, arr);
    printRootToLeaf(root->right, arr);
    arr.pop_back();
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

    vector<int> arr;

    printRootToLeaf(root,arr);
    return 0;
}