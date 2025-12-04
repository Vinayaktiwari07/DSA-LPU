#include<iostream>
using namespace std;

bool print(int arr[],int idx,int n){
    if(idx==n-1){
        return true;
    }
    if(arr[idx]>arr[idx+1]){
        return false;
    }
    return print(arr,idx+1,n);
   
}
int main(){

    int arr[]={1,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout << print(arr,0,n);
    
    return 0;
}