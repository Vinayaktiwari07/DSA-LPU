#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BFS(int root, vector<vector<int>> &adjList, vector<bool> &visited){
    queue<int> q;
    q.push(root);

    while(!q.empty()){
        int node = q.front();
        q.pop();
        visited[node] = true;
        cout << node << " ";

        for(auto& x: adjList[node]){
            if(visited[x]==false){
                q.push(x);
            }
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

    BFS(root, adjList, visited);
    
    return 0;
}