#include<iostream>
using namespace std;

int print(int arr[],int idx,int n, int target){
    int count=0;
    if(idx>=n){
        return 0;
    }
    if(arr[idx]==target){
        count++;
    }
    return count + print(arr,idx+1,n,target);
   
}
int main(){

    int arr[]={1,2,1,1,3,4,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<print(arr,0,n,1);
    
    return 0;
}