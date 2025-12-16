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

int insertInBst(Node* &root, int key){
    if(!root){
        root = new Node(key);
        return 0;
    }
    
    if(key < root->data){
        insertInBst(root->left,key);
    }
    else{
        insertInBst(root->right,key);
    }
    
    // return root;
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

    
    insertInBst(root, 80);
    cout << endl;
    inOrder(root);
    return 0;
}