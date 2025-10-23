#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    vector<int> arr = {10,10,5};
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0; i<n; i++){
        cout << arr[n-2];
        
    }
    return 0;
}