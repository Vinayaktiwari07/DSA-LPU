#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int print(int arr[],int idx ){
    if(idx>=5){
        return INT_MIN;
    }
    int maxi=arr[idx]; //for maximum
    return max(arr[idx],print(arr,idx+1));
}
int main(){
    int arr[5]={10,20,50,40,30};
    // int min=INT_MAX;
    cout<<print(arr,0);
    
    return 0;
}