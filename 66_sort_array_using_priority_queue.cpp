#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int,vector<int>,greater<int>> pq;  // Min Heap

    vector<int> arr = {4,5,3,1,9,8};

    int n = arr.size();

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }
    
    for(int i=0; i<n; i++){
        cout << pq.top() << " ";
        // arr.push_back(pq.top());
        pq.pop();
    }
    
    // for(int i=0; i<n; i++){
    //     cout << arr[i] << " ";
    // }
    return 0;
}