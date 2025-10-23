#include <iostream>
using namespace std;

int main() {
    int arr[8] = {1,2,3,4,3,2,2,2};
    int n = 8;
    
    int target =2;
    int index1 = -1;
    int index2 = -1;
    
    // for(int i = 0; i < n; i++) {
    //     if(arr[i] == target) {
    //         if(index1 == -1) {
    //             index1 = i; // pehli baar mila to first occurrence
    //         }
    //         index2 = i; // har baar update hoga, last tak
    //     }
    // }

   
    for(int i = 0, j = n - 1; i <= j; i++, j--) {
        if(arr[i] == target && index1 == -1) {
            index1 = i; // First occurrence from left
        }
        if(arr[j] == target && index2 == -1) {
            index2 = j; // First occurrence from right (i.e., last occurrence)
        }
        if(index1 != -1 && index2 != -1) {
            break; // Stop loop once both found
        }
    }


    cout << index1 << " "<< index2;
 
    return 0;
}