#include<iostream>
using namespace std;
int main() {
    int arr[9]={1,2,3,2,4,5,2,2,2};
    int n=9;
    int target=2;

    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout << i << " ";
        }
    }
    return 0;
}