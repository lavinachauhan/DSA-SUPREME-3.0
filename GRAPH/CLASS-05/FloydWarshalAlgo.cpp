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

    void floydWarshal(int n, vector<vector<int>> &distance){

        // step 01 -> diagonal pr 0
        for(int i = 0; i < n; i++) distance[i][i] = 0;
        
        // step 01 -> copy all distance from graph to matrix
        for(auto list : adjList){
            int u = list.first;
            for(auto nbr : adjList[u]){
                int v = nbr.first;
                int wt = nbr.second;
                distance[u][v] = wt;
            }
        }

        // find minimum distance using helper node
        for(int helper = 0; helper < n; helper++){
            for(int u = 0; u < n; u++){
                for(int v = 0; v < n; v++){
                        distance[u][v] = min(distance[u][v], distance[u][helper] + distance[helper][v]);
                }
            }
        }
    }

};



int main(){
    graph g;
    g.addEdge(0, 2, -2, 1);
    g.addEdge(1, 0, 4, 1);
    g.addEdge(1, 2, 3, 1);
    g.addEdge(2, 3, 2, 1);
    g.addEdge(3, 1, -1, 1);

    int n = 4;
    vector<vector<int>> distance(n, vector<int> (n, 1e9));
    g.floydWarshal(n, distance);

    for(int u = 0; u < n; u++){
        for(int v = 0; v < n; v++){
            cout << distance[u][v] << ", ";
        }
        cout << endl;
    }
    return 0;
}

// 0, -1, -2, 0, 
// 4, 0, 2, 4, 
// 5, 1, 0, 2, 
// 3, -1, 1, 0, 
