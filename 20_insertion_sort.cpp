#include<iostream>
using namespace std;
int main() {
    int n=5;
    int arr[n] = {5,4,3,2,1};

    for(int i=0; i<n; i++){
        for(int j=i; j>0; j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}