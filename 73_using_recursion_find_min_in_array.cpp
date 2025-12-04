#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int print(int arr[],int idx, int &min){
    if(idx>=5){
        return 0;
    }
    min=min<arr[idx]?min:arr[idx];
    return print(arr,idx+1,min);
    
    // int maxi=arr[idx]; for maximum
    // return max(arr[idx],print(arr,idx+1,n));

}
int main(){
    int arr[5]={10,20,30,40,50};
    int min=INT_MAX;
    print(arr,0,min);
    cout <<min;
    return 0;
}