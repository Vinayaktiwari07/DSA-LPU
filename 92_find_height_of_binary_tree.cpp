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

// int countOfLeaf(Node* root, int &count){
//     if(!root) return 0;
//     if(root->left == nullptr && root->right == nullptr){

//         count = count+1;
//     }

//     countOfLeaf(root->left,count);
//     countOfLeaf(root->right,count);
// }
// int countOfLeaf(Node* root){
//     if(!root) return 0;
//     return root->data + countOfLeaf(root->left)+countOfLeaf(root->right);
// }

int height(Node* node){
    if(!node)return 0;

    if(node->left == nullptr && node->right == nullptr) return 1;

    int leftCount = height(node -> left);
    int rightCount = height(node -> right);
    int maxi = max(leftCount,rightCount);
    return 1+maxi;
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
    // countOfLeaf(root);
    cout << height(root);
    // cout<<count;
    return 0;
}