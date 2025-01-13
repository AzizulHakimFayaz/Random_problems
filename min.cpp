#include <bits/stdc++.h>
using namespace std;

void primeMST(vector<vector<int>>& graph, int v){
    vector<int> key(v,INT_MAX), parent(v,-1);
    vector<bool> inMST(v,false);
    
}


int main(){
    int V,E;
    cout<<"enter the number of vertex: ";
    cin>>V;
    cout<<"enter the number of edges: ";
    cin>>E;

    vector<vector<int>> graph(V,vector<int>(V,0));

    cout<<"enter edged (u,v,weight) for "<< E << " edges: \n";
    for(int i = 0;i<E;i++){
        int u,v,weight;
        cout<<"Edge "<<i+1<<" (u v weight): ";
        cin>>u>>v>>weight;
        graph[u][v] = weight;
        graph[u][v] = weight;

    }
    primeMST(graph,V);
    return 0;
}