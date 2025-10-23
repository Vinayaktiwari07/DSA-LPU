#include<iostream>
using namespace std;
int main() {
    int n = 5;
    int arr[n]={5,3,2,1,4};
    
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i; j<n; j++){
            if(arr[mini]<arr[j]){
                mini = j;
                
            }
        }
        swap(arr[mini], arr[i]);
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}