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

int countOfLeaf(Node* root, int &count){
    if(!root) return 0;
    count = count+1;

    countOfLeaf(root->left,count);
    countOfLeaf(root->right,count);
}
int countOfLeaf(Node* root){
    if(!root) return 0;
    return root->data + countOfLeaf(root->left)+countOfLeaf(root->right);
}

void preOrder(Node* root){
    if(!root) return;
    cout << root -> data << " ";
    preOrder(root -> left);
    preOrder(root -> right);
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
    
    preOrder(root);
    cout << endl;
    int count = 0;
    countOfLeaf(root,count);
    cout<<count;
    return 0;
}