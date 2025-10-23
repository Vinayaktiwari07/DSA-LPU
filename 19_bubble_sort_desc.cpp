#include<iostream>
using namespace std;
int main() {
    int n=5;
    int arr[n] = {1,2,3,4,5};

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }


    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}