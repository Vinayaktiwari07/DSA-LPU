#include<iostream>
using namespace std;
int main() {
    int arr[12] = {1,2,2,2,3,3,4,4,5,6,7,7};

    int s=0;
    int e=11;
    
    int target = 2;
    
    int idx = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            idx = mid;
            s = mid+1;
      
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    cout << idx << endl;
    return 0;
}