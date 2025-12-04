#include<iostream>
using namespace std;

void print(int arr[],int n,int idx){
    if(idx>=n){
        return;
    }
    print(arr,n,idx+1);
    cout<<arr[idx]<<" ";
}
int main(){
    int n=5;
    
    int arr[5]={10,20,30,40,50};
    print(arr,n,0);
    return 0;
}