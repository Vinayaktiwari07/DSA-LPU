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

Node* minVal(Node* root){
    Node* temp = root;
    while(temp && temp->left != NULL){
        temp = temp->left;
    }
    return temp;
}

void inOrder(Node* root){
    if(!root) return;
    inOrder(root -> left);
    cout << root -> data << " ";
    inOrder(root -> right);
}

Node* deletionInBst(Node* root, int val){
    // base case hai ye .
    if(root == NULL){
        return root;
    }
    
    if(root->data == val){
        // 0 child k liye...
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // 1 child k liye....
        // -- left child -- //
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // -- right child -- //
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        // 2 child k liye...
        if(root->left != NULL && root->right != NULL){
            // condition hai --- right side se min value nikalo ya fir left side se max value
            int mini = minVal(root->right) -> data;  // ye right side se minimum value nikal kr lata hai
            root->data = mini;// copy kr diya mini ko
            root->right = deletionInBst(root->right, mini); // then delete kr diya
            return root;
        }
    }
    else if(root->data > val){
        // left part me jayenge
        root->left = deletionInBst(root->left, val);
        return root;
    }
    else{
        // right part me jayenge
        root->right = deletionInBst(root->right, val);
        return root;
    }

    return root;
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

    
    root = deletionInBst(root, 1);
    cout << endl;
    inOrder(root);
    return 0;
}