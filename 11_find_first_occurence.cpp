#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int target=5;

    for(int i=0;i<n;i++){
        if(arr[i] == target){
            cout << i;
        }
    }
    return 0;
}