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

int sumOfTree(Node* root, int &sum){
    if(!root) return 0;
    // int sum = 0;
    sum += root->data;

    sumOfTree(root->left,sum);
    sumOfTree(root->right,sum);
}
int sumOfTree(Node* root){
    if(!root) return 0;
    return root->data + sumOfTree(root->left)+sumOfTree(root->right);
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
    int sum = 0;
    sumOfTree(root,sum);
    cout<<sum;
    return 0;
}