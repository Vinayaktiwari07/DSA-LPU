#include<iostream>
using namespace std;
int main() {
    int arr[7] = {1,2,3,4,5,6,7};
    int n=7;
    int target = 6;
    bool present = false;

    for(int i=0; i<n; i++){
        if(arr[i] == target){
            present = true;
            break;
        } 
    }
    if(!present){
        cout << "Not present";
    }
    else{
        cout << "Present";
    }
    return 0;
}