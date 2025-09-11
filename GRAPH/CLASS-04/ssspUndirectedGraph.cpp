#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, vector<int>> adjList;
    void addEdge(int u, int v, bool direction){
        if(direction == 0){
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        else{
            adjList[u].push_back(v);
        }
    }

    void shortestPathBfs(int src, int n, unordered_map<int, int>& parent){
        unordered_map<int, bool> visited;
        queue<int> q;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto nbr : adjList[front]){
                if(visited[nbr] != true){
                    parent[nbr] = front;
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
    }
};





int main(){

    graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 4, 0);
    g.addEdge(4, 5, 0);
    g.addEdge(5, 3, 0);

    int n = 6;
    unordered_map<int, int> parent;
    g.shortestPathBfs(0, n, parent);

    int src = 0;
    int des = 3;
    int node = des;

    cout << "Shortest path is: ";
    while(parent[node] != -1){
        cout << node << " ";
        node = parent[node];
    }

    return 0;
}