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

void minMax(Node* root, int &mini, int &maxi){
    if (!root) return;

    mini = min(mini, root->data);
    maxi = max(maxi, root->data);

    minMax(root->left, mini, maxi);
    minMax(root->right, mini, maxi);
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

    int maxi = INT8_MIN;
    int mini = INT8_MAX;
    minMax(root,mini,maxi);

    cout << maxi << endl;
    cout << mini << endl;


    return 0;
}