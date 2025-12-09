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

void printLeftViewByPreorder(Node* root, int level,int &maxlevel){
    if(!root) return;
    if(level>maxlevel){
        cout << root-> data << " ";
        maxlevel++;
    }
    printLeftViewByPreorder(root->left, level+1, maxlevel);
    printLeftViewByPreorder(root->right, level+1, maxlevel);
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

    int maxlevel = -1;

    printLeftViewByPreorder(root,0,maxlevel);
    return 0;
}