#include<iostream>
using namespace std;
int main() {
    int n =9;
    int arr[n]={9,8,7,6,5,4,3,2,1};

    int target = 7;

    int s=0;
    int e=8;

    
    while(s<=e){
        int mid = s + (e-s)/2;
        if(arr[mid] == target){
            cout << "found" << endl;
            break;
        }
        else if(arr[mid]>target){
            s = mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}