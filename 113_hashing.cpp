#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<char> vec = {'a','a','b','c','d','a','e','f','b','f'};
    
    unordered_map<char, int> mp;
    // vector<int> freqArray(11);


    for(int i=0; i<vec.size(); i++){
        // freqArray[vec[i]]++;
        mp[vec[i]]++;
    }

    // cout << freqArray[a];
    cout << mp['a'];
    return 0;
}