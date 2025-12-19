#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int v = 8;

    vector<pair<int, int>> edges = {{1,2},{1,5},{1,4},{2,8},{2,7},{2,3}};

    // 1st way -> adjacency matrix
    vector<vector<int>> adj(v+1, vector<int> (v+1,0));

    for(auto& x : edges){
        int u = x.first;
        int v = x.second;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    
    cout << "Adjacency Matrix:\n";
    for (int i = 1; i <= v; i++) {
        for (int j = 1; j <= v; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    

    // 2nd way -> adjacency list
    
    vector<vector<int>> adj2(v+1);
    
    for(auto& x : edges){
        int u = x.first;
        int v = x.second;

        adj2[u].push_back(v);
        adj2[v].push_back(u);
    }
    
    cout << "Adjacency List:\n";
    for (int i = 1; i <= v; i++) {
        cout << i << " -> ";
        for (auto node : adj2[i]) {
            cout << node << " ";
        }
        cout << endl;
    }
    
    return 0;
}