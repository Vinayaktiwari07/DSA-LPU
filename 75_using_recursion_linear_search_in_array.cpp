#include<iostream>
using namespace std;

bool print(int arr[],int idx, int target){
    if(idx>=5){
        return 0;
    }
    if(arr[idx]==target){
        return true;
    }
    return print(arr,idx+1,target);
   
    

}
int main(){
    int arr[5]={10,20,5,40,50};
    
    cout << print(arr,0,50);
    
    return 0;
}