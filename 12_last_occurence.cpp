#include<iostream>
using namespace std;
int main() {
    int arr[6]={1,5,3,4,5,6};
    int n=6;
    int target = 5;

    for(int i=n-1;i>=0;i--){
        if(arr[i] == target){
            cout << i;
            break;

        }
    }
    return 0;
}