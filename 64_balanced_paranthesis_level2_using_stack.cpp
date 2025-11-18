#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string newstr = "(())";

    stack<char> st;

    for(auto& x : newstr){
        if(x == '(' || x == '{' || x == '['){
            st.push(x);
        }
        else{
            if(st.empty()){
                cout << "not balanced";
                break;
            }
            // st.pop();
            char top = st.top();
            if(top == '(' ){
                if(x == ')' ){
                    st.pop();
                }
                else{
                    cout << "not balanced" << endl;
                    break;
                }
            }
            if(top == '{' ){
                if(x == '}' ){
                    st.pop();
                }
                else{
                    cout << "not balanced" << endl;
                    break;
                }
            }
            if(top == '[' ){
                if(x == ']' ){
                    st.pop();
                }
                else{
                    cout << "not balanced" << endl;
                    break;
                }
            }
        }
    }

    if(st.size() == 0){
        cout << "yes balanced";
    }
    else{
        cout << "not balanced";
    }
    return 0;
}