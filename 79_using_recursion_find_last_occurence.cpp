#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int idx,int n, int target){
   
    if(idx>=n){
        return;
        
    }
    print(arr,idx+1,n,target);

    if(arr[idx]==target){
        cout << idx << endl;
        

        
    }
    else if(idx==0){
        cout << -1;
    }
    
    
}
int main(){

    int arr[]={1,2,3,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    print(arr,0,n,7);
    
    return 0;
}