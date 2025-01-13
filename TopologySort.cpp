#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void dfs(int node, vector<bool>& visited, stack<int>& topoStack, vector<vector<int>>& graph) {
    visited[node] = true;
    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, visited, topoStack, graph);
        }
    }
    topoStack.push(node);
}

void topologicalSort(int vertices, vector<vector<int>>& graph) {
    vector<bool> visited(vertices, false);
    stack<int> topoStack;

    for (int i = 0; i < vertices; i++) {
        if (!visited[i]) {
            dfs(i, visited, topoStack, graph);
        }
    }

    while (!topoStack.empty()) {
        cout << topoStack.top() << " ";
        topoStack.pop();
    }
    cout << endl;
}

int main() {
    int vertices = 6;
    vector<vector<int>> graph(vertices);

    graph[5] = {2, 0};
    graph[4] = {0, 1};
    graph[2] = {3};
    graph[3] = {1};
    graph[0] = {};
    graph[1] = {};

    topologicalSort(vertices, graph);

    return 0;
}
