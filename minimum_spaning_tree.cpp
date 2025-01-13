#include <iostream>
#include <vector>
#include <climits>
#include <queue>

using namespace std;

void primMST(vector<vector<int>>& graph, int V) {
    vector<int> key(V, INT_MAX), parent(V, -1);
    vector<bool> inMST(V, false);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    key[0] = 0;
    pq.push({0, 0});

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();
        inMST[u] = true;

        for (int v = 0; v < V; ++v) {
            if (graph[u][v] && !inMST[v] && graph[u][v] < key[v]) {
                key[v] = graph[u][v];
                parent[v] = u;
                pq.push({key[v], v});
            }
        }
    }

    // Print MST
    cout << "Minimum Spanning Tree Edges:\n";
    for (int i = 1; i < V; ++i)
        cout << parent[i] << " - " << i << " : " << graph[i][parent[i]] << endl;
}

int main() {
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;

    cout << "Enter number of edges: ";
    cin >> E;

    // Create a graph with V vertices
    vector<vector<int>> graph(V, vector<int>(V, 0));

    cout << "Enter edges (u, v, weight) for " << E << " edges:\n";
    for (int i = 0; i < E; ++i) {
        int u, v, weight;
        cout << "Edge " << i + 1 << " (u v weight): ";
        cin >> u >> v >> weight;
        graph[u][v] = weight;
        graph[v][u] = weight;
    }

    primMST(graph, V);
    return 0;
}