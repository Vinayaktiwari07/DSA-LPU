#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {1,2,3,4,5};

    int n = arr.size();

    // sort(arr.begin(), arr.end());


    // vector<int> brr;

    // int sum = 0;
    // for(int i=0; i<n-1; i++){
    //     int sum = arr[i] + arr[i+1];
    //     arr[i+1] = sum;
    //     brr.push_back(sum);
    // }

    // int sum1 = 0;
    // int k = brr.size();
    // for(int i=0; i<k; i++){
    //     sum1 = sum1 + brr[i];
    // }

    // cout << sum1 << endl;


    priority_queue<int,vector<int>,greater<int>> pq;  // Min Heap

    for(auto & x: arr)pq.push(x);

    int cost = 0;

    while(pq.size()>1){
        int rope1 = pq.top();
        pq.pop();

        int rope2 = pq.top();
        pq.pop();

        cost += (rope1+rope2);

        pq.push(rope1 + rope2);
    }

    // cout<<pq.top();
    cout << cost << endl;



    return 0;
}