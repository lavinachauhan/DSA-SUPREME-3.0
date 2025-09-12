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

    void bellmanFord(int n, vector<int> &distance){
        for(int i = 0; i < n - 1; i++){

            for(auto list : adjList){
                int u = list.first;
                for(auto nbr : adjList[u]){
                    int v = nbr.first;
                    int wt = nbr.second;
                    if(distance[u] != INT_MAX){
                        distance[v] = min(distance[v], distance[u] + wt);
                    }
                }
            }
        }
    }
   


};

int main(){
    graph g;
    g.addEdge(1, 4, 2, 1);
    g.addEdge(0, 1, -1, 1);
    g.addEdge(0, 2, 4, 1);
    g.addEdge(1, 2, 3, 1);
    g.addEdge(1, 3, 2, 1);
    g.addEdge(3, 1, 1, 1);
    g.addEdge(4, 3, -3, 1);
    g.addEdge(3, 2, 5, 1);

    int n = 5;
    vector<int> distance(n, INT_MAX);
    distance[0] = 0;
    // bellman ford algo says perform relaxation step for n - 1 times
    g.bellmanFord(n, distance);
    for(int i = 0; i < n; i++){
        cout << "Distance of " << i << "-> " << distance[i] << endl;
    }

    return 0;
}