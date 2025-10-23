#include<iostream>
using namespace std;
int main() {
    int arr[5] = {1,2,3,4,5};
    int n=5;

    for(int i=1; i<n;i+=2){
        cout << arr[i] << " ";
    }
    return 0;
}