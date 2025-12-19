#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void DFS(int root, vector<vector<int>> &adjList, vector<bool> &visited){
    visited[root]=true;
    cout << root<<" ";

    for(auto& neighbour : adjList[root]){
        if(visited[neighbour] == false){
            DFS(neighbour, adjList, visited);
        }
    }
}
int main() {
    int v = 8;

    vector<pair<int, int>> edges = {{1,2},{1,5},{1,4},{2,8},{2,7},{2,3}};

    // 1st way -> adjacency matrix

    // vector<vector<int>> adj(v+1, vector<int> (v+1,0));
    
    // for(auto& x : edges){
    //     int u = x.first;
    //     int v = x.second;

    //     adj2[u].push_back(v);
    //     adj2[v].push_back(u);
    // }

    // 2nd way -> adjacency list
    vector<vector<int>> adjList(v+1);

    for(auto& x : edges){
        int u = x.first;
        int v = x.second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    vector<bool> visited(v + 1, false); 
    int root = 1;

    DFS(root, adjList, visited);
    
    return 0;
}