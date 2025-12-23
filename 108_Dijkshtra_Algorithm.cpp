#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Dijkstra(vector<vector<pair<int, int>>> &adjList, int src, vector<int> &dist){
    priority_queue<pair<int,int>,vector<pair<int, int>>,greater<pair<int,int>>>pq;

    pq.push({0,src});
    dist[src]=0;

    while(!pq.empty()){
        int node = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[node]) continue;

        for(auto& ngbr : adjList[node]){
            int cost = ngbr.second;
            int ngbrNode = ngbr.first;

            if(cost+d < dist[ngbrNode]){
                dist[ngbrNode] = cost+d;
                pq.push({cost+d, ngbrNode});
            }
        }
    }
}
int main() {
    int v = 2;

    vector<pair<int, pair<int, int>>> edges = {{0,{1,8}},{0,{2,2}},{1,{2,4}}};

    // 1st way -> adjacency matrix

    // vector<vector<int>> adj(v+1, vector<int> (v+1,0));
    
    // for(auto& x : edges){
    //     int u = x.first;
    //     int v = x.second;

    //     adj2[u].push_back(v);
    //     adj2[v].push_back(u);
    // }

    // 2nd way -> adjacency list
    vector<vector<pair<int, int>>> adjList(v+1);

    for(auto& x : edges){
        int u = x.first;
        int v = x.second.first;
        int w = x.second.second;

        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    // vector<bool> visited(v + 1, false); 
    // int root = 1;

    vector<int>dist(v+1, INT_MAX);
    int src = 0;
    // int dist = INT_MAX;



    Dijkstra(adjList, src, dist);

    for (int i = 0; i <= v; i++) {
        cout << "Distance from " << src << " to " << i << " = " << dist[i] << endl;
    }
    
    return 0;
}