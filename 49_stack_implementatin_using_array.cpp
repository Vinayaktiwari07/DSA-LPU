#include<iostream>
using namespace std;

class Stack{
public: 
    int top;
    int arr[100];

    Stack(){
        top = -1;
    }

    //Function for addition of element
    void push(int val){
        if(top == 100){
            cout <<"Stack overflow" << endl;
        }
        else{
            top++;
            arr[top] = val;
        }
    }

    // Function for deletion of top element
    void pop(){
        if(top == -1){
            cout << "stack is underflow" << endl;
        }
        else{
            top--;
        }

    }
    
    // Function for check stack is empty or not
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

        // return top == -1;
    }

    // return top element
    int peek(){
        if(top == -1){
            return -1;
        }
        else {
            return arr[top];
        }
    }

    // traverse
    void traverse(){
        if(top == -1){
            cout <<"stack is underflow"<<endl;
        }
        else{
            int i = top;
            while(i>=0){
                cout << arr[i] <<" ";
                i--;
            }

        }
    }

};
int main() {

    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    st.traverse();
    cout << endl;
    cout << st.isEmpty() << endl;
    cout << st.peek() << endl;
    
    return 0;
}