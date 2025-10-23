#include<iostream>
using namespace std;
int main() {
    int arr[5]={2,3,1,0,7};
    int maxi = INT8_MIN;
    
    for(int i=0; i<5; i++){
        if(arr[i]>INT8_MIN){
            maxi = arr[i]; 
        }
    }
    cout << maxi;
    return 0;
}