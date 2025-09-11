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
};





int main(){

    graph g;
    g.addEdge(0, 2, 13, 1);
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 7, 1);
    g.addEdge(1, 4, 1, 1);
    g.addEdge(0, 4, 3, 1);
    g.addEdge(4, 3, 6, 1);

    return 0;
}
