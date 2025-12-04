#include<iostream>
using namespace std;

void print(int idx,int n){
    if(idx>n){
        return;
    }
    print(idx+1,n);
    cout<<idx<<" ";
     
}
int main(){
    cout << "Enter a number: ";
    int n;
    cin>>n;
    print(1,n);
    return 0;
}