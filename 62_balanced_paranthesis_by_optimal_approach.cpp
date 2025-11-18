#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    string  s = "()";
    int n = s.size();

    int count = 0;


    for(int i=0; i<n; i++){
        if(s[i] == ')'){
            cout << "not balanced" << endl;
            break;
        }
        if(s[i] == '(' ){
            count++;
        }
        else if(s[i] == ')' ){
            count--;
        }

    }

    if(count == 0){
        cout << "balanced";
    }
    else{
        cout << "not balanced";
    }
    return 0;
}