#include<iostream>
using namespace std;

int print(int arr[],int idx){
    if(idx>=5){
        return 0;
    }
    // int sum=0;
    // sum+=arr[idx];
    
    // return sum + print(arr,idx+1);
    return arr[idx] + print(arr,idx+1);

}
int main(){
    int arr[5]={10,20,30,40,50};
  
    cout << print(arr,0);
    
    return 0;
}