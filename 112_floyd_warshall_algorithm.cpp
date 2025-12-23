#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define INF 100000000

void floydWarshall(vector<vector<int>> &dist) {
    int V = dist.size();

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main() {
    // actual vertices: 1,2,3,4
    int V = 4;

    vector<vector<int>> edges = {
        {1,2,2},
        {2,3,3},
        {2,4,1},
        {4,3,-5}
    };

    // distance matrix for Floyd–Warshall
    vector<vector<int>> dist(V, vector<int>(V, INF));

    // distance to itself = 0
    for (int i = 0; i < V; i++) {
        dist[i][i] = 0;
    }

    // fill direct edges (1-based to 0-based)
    for (auto &e : edges) {
        int u = e[0] - 1;
        int v = e[1] - 1;
        int w = e[2];
        dist[u][v] = w;
    }

    // run Floyd–Warshall
    floydWarshall(dist);

    // print result
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
