// Declaration of Max heap
// priority_queue<int> pq;  -> Max heap

// Declaration of Min heap
// priority_queue<int, vector<int>, greater<int>> pq;  -> Min heap



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    priority_queue<int> pq;

    vector<int> arr = {1,5,7,9};
    int n = arr.size();

    for(int i=0; i<n; i++){
        pq.push(arr[i]);
    }

    cout << pq.top() << endl;
    cout << pq.empty() << endl;
    cout << pq.size() << endl;
    
    for(int i=0; i<n; i++){
        cout << pq.top() << endl;
        pq.pop();

    }


    
    return 0;
}