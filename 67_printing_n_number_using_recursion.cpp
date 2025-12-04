#include<bits/stdc++.h>
using namespace std;

// 1. base case  2. some operation 3. recursive call

void print(int idx,int n){
    if(idx>n){
        return;
    }
    cout<<idx<<" ";
    print(idx+1,n);
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin>>n;
    print(1,n);
    return 0;
}