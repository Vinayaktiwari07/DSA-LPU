#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "hello";

    stack<char>  st;

    for(int i=0; i<s.size(); i++){
        st.push(s[i]);
    }

    // for(auto& x : s){
    //     st.push(x);
    // }

    string temp = "";
    while(!st.empty()){
        temp += st.top();
        st.pop();
    }

    cout << temp;

    return 0;
}