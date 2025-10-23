#include<iostream>
using namespace std;
int main() {
    int arr[12] = {1,2,3,2,4,2,5,2,6,2,7,2};
    int n=12;
    int count=0;
    int target = 2;
    bool duplicate = true;

    for(int i=0; i<n; i++){
        if(arr[i] != target){
            duplicate = false;
            // i++;
        }
        else{
            count++;
            // i++;
        }
    }
    cout << "No. of duplicate: " << count;
    // break;
    return 0;
}