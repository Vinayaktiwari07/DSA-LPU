#include<iostream>
using namespace std;

void print(int arr[],int idx,int &sum){
    if(idx>=5){
        return;
    }
    sum+=arr[idx];
    
    print(arr,idx+1,sum);
  
}
int main(){
    int arr[5]={10,20,30,40,50};
    int sum=0;
    print(arr,0,sum);
    cout<<sum;
    return 0;
}