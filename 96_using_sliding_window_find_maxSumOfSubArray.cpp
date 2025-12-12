#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> arr = {3,4,1,5,2,7,6,1,3};
    int k = 3;
    int n = arr.size();

    int maxi = INT_MIN;
    vector<int> brr;

    int maxSum = 0;
    int sum = 0;

    int i = 0, j = 0;

    while(j<n){
        sum += arr[j];

        int window_len = j-i+1;

        if(window_len > k){
            sum -= arr[i];
            i++;
            window_len--;
        }

        if(window_len == k){
             maxSum = max(maxSum, sum);
        }
        j++;
    }

    
    cout << maxSum;


    return 0;
}