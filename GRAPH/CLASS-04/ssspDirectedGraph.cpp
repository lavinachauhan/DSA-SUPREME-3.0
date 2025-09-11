#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, vector<pair<int, int>>> adjList;
    void addEdge(int u, int v, int wt, bool direction){
        if(direction == 0){
            adjList[u].push_back({v, wt});
            adjList[v].push_back({u, wt});
        }
        else{
            adjList[u].push_back({v, wt});
        }
    }

    void topoSortDfs(int src,  unordered_map<int, bool>&visited, stack<int>&topoSort){
        visited[src] = true;

        for(auto node : adjList[src]){
            int nbr = node.first;
            if(visited[nbr] != true){
                topoSortDfs(nbr, visited, topoSort);
            }
        }
        topoSort.push(src);
    }

    void shortestPathDfs(int top, vector<int> &distance){
        
            for(auto node : adjList[top]){
                int nbr = node.first;
                int wt = node.second;
                distance[nbr] = min(distance[nbr], wt + distance[top]);
            }
    }
};





int main(){

    graph g;
    g.addEdge(0, 2, 13, 1);
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 7, 1);
    g.addEdge(1, 4, 1, 1);
    g.addEdge(0, 4, 3, 1);
    g.addEdge(4, 3, 6, 1);
    g.addEdge(3, 2, 2, 1);


    int n = 5;
    unordered_map<int, bool> visited;
    // step 01-> find topological order
    stack<int> topoSort;
    for(int src = 0; src < n; src++){
        if(visited[src] != true){
            g.topoSortDfs(src, visited, topoSort);
        }
    }
    // step 02-> make a distance array
    vector<int> distance(n, INT_MAX);
    distance[0] = 0;
    // step 03-> dfs traversal and update distance of nbr accordingly
    while(!topoSort.empty()){
        int top = topoSort.top();
        topoSort.pop();
        g.shortestPathDfs(top, distance);
    }
    
    cout << "Shortest distance of each node is: " << endl;
    for(int i = 0; i < n; i++){
        cout << i << " -> " << distance[i] << endl;
    }
    


    return 0;
}
