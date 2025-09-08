#include<bits/stdc++.h>
using namespace std;

// graph structure
class graph{
    public:
    // unordered_map<u, vector<pair<v, weight>>>
    unordered_map<int, vector<pair<int, int>>> adjList;

    void addEdge(int u, int v, int weight, bool direction){
        // direction == 0 (undirected graph)
        // direction == 1 (directed graph)
        if(direction == 0){
            adjList[u].push_back({v, weight});
            adjList[v].push_back({u, weight});
        }
        else{
            adjList[u].push_back({v, weight});
        }
    }

    bool detectCycle(int n, int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &path){
        visited[src] = true;
        path[src] = true;

        for(auto node : adjList[src]){
            int nbr = node.first;
            if(visited[nbr] != true){
                bool tempAns = detectCycle(n, nbr, visited, path);
                if(tempAns) return true;
            }
            else if(visited[nbr] == true && path[nbr] == true) return true;
        }
        // backtrack
        // ye mai bhul jati hu
        path[src] = false;
        return false;
    }
};

int main(){
     graph g;
    g.addEdge(2, 3, 1, 1);
    g.addEdge(3, 1, 1, 1);
    g.addEdge(4, 0, 1, 1);
    g.addEdge(4, 1, 1, 1);
    g.addEdge(5, 0, 1, 1);
    g.addEdge(5, 2, 1, 1);
    // g.addEdge(0, 3, 1, 1);
    // g.addEdge(1, 2, 1, 1);

    int n = 6;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> path;
    bool ans = false;
    for(int src = 0; src < n; src++){
        if(visited[src] != true){
            ans = g.detectCycle(n, src, visited, path);
            if(ans){
                cout << "Cycle is present";
                break;
            }
        }
    }
    if(!ans){
        cout << "Cycle is not present";
    }
    return 0;
}