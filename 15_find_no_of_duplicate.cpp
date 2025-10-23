#include <iostream>
using namespace std;

int main() {
    int arr[7] = {1,2,3,1,3,4,2};
    int n = 7;
    
    int count =0;
    
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    
    cout << count<< endl;
    

    return 0;
}