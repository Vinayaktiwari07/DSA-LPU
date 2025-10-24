#include<iostream>
using namespace std;
int main() {
    int arr[12] = {1,2,2,2,3,3,4,4,5,6,7,7};

    int s=0;
    int e=11;
    
    int target = 2;
    
    int firstidx = -1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            firstidx = mid;
            e = mid-1;
      
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;  
        }
    }
    

    s = 0;
    e = 11;

    int lastidx = -1;
     while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            lastidx = mid;
            s = mid+1;
      
        }
        else if(target < arr[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }

    cout << lastidx - firstidx + 1 << endl;
    return 0;
}


